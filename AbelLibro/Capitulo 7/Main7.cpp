#include <iostream>
#include <algorithm>
#include <functional>
#include <array>
#include <string>
#include <vector>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Token
{
public:
	char type;
	double value;
	string names;
	Token(char a) :type(a) { }
	Token(char a, double val) :type(a), value(val) { }
	Token(char a, string name) :type(a), names(name) { }
};

class Token_stream
{
public:
	Token get(); 
	void putback(Token t);
	void ignore(char i);
private:
	vector<Token> buf;
};

const char let = 'L';
const char constant = 'C';
const char command = 'c';
const char print = ';';
const char num = '8';
const char n = 'a';
const char sqrtfun = 's';

const string declkey = "let";
const string constkey = "const";
const string valkey = "valores";
const string helpkey = "ayuda";
const string quitkey = "salir";
const string sqrtkey = "sqrt";

void Token_stream::putback(Token t)
{
	buf.push_back(t);
}

Token Token_stream::get() // Exercises 5
{
	if (!buf.empty())
	{
		Token t = buf.back();
		buf.pop_back();
		return t;
	}

	char a = ' ';

	while (isspace(a) && a != '\n') 
		a = cin.get();

	switch (a)
	{
		case ';':
		case '\n':
			return Token{ print }; 
		case '(': case ')':
		case '+': case '-': case '*': case '/': 
		case '%': case '!':
		case '=':
		case ',':
			return Token{ a };
		case '.':
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
		{
			cin.putback(a);
			double b;
			cin >> b;
			return Token{ num, b };
		}
		default: 
			if (isalpha(a))
			{
				string s;
				s += a;
				while (cin.get(a) && (isalpha(a) || isdigit(a) || a == '_')) s += a;
				cin.putback(a);
				if (s == declkey) 
					return Token{ let };
				if (s == constkey) 
					return Token{ constant };
				if (s == quitkey) 
					return Token{ command, quitkey };
				if (s == helpkey) 
					return Token{ command, helpkey };
				if (s == valkey) 
					return Token{ command, valkey };
				if (s == sqrtkey) 
					return Token{ sqrtfun };
				return Token{ n, s };

			}
	}
}

void Token_stream::ignore(char i)
{
	while (!buf.empty() && buf.back().type != i)
		buf.pop_back();
	if (!buf.empty())
		return;
	char a{ ' ' };
	while (a != i && a != '\n')
		a = cin.get();
	return;
}

class Variable
{
public:
	string n;
	double val;
	bool constant;
};

class Symbol_table // Exercises 4
{
	vector<Variable> var_table;
public:
	double get(string a);
	void set(string a, double b);
	bool is_declared(string a);
	void declare(string a, double b, bool c);
	void print();
};

double Symbol_table::get(string a)
{
	for (const Variable& v : var_table)
		if (v.n == a)
			return v.val;
}

void Symbol_table::set(string a, double b)
{
	for(Variable& v : var_table)
		if (v.n == a)
		{
			if (v.constant)
			{
				cout << a << "";
				v.val = b;
				return;
			}
		}
}

bool Symbol_table::is_declared(string a)
{
	for (const Variable& v : var_table)
		if (v.n == a)
			return true;
	return false;
}

void Symbol_table::declare(string a, double b, bool c)
{
	if (is_declared(a))
	{
		cout << a << "Ya existe.\n";
	}
	var_table.push_back(Variable{ a, b, c });
}

void Symbol_table::print()
{
	for (Variable v : var_table)
	{
		cout << v.n << " = " << v.val;
		if (v.constant)
			cout << " -> Constante";
		cout << '\n';
	}
}

Symbol_table st;
Token_stream ts;
double expression();

int factorial(int b) //Extra 
{
	int result = 1;
	for (int i = b; i > 0; --i)
	{
		result *= i;
	}
	return result;
}

double primary() 
{
	Token t = ts.get();
	switch (t.type)
	{
		case '(':
		{
			double a = expression();
			t = ts.get();
			return a;
		}
		case '-':
			return -primary();
		case '+':
			return primary();
		case num:
			return t.value;
		case n:
			return st.get(t.names);
		case sqrtfun:
		{
			t = ts.get();
			double a = expression();
			return sqrt(a);
		}
	}
}

double term() 
{
	double b = primary();
	while (true)
	{
		Token t = ts.get();
		switch (t.type)
		{
		case '*':
			b *= primary();
			break;
		case '/':
		{
			double b2 = primary();
			b /= b2;
			break;
		}
		case '!':
		{
			return factorial(b);
		}
		case '%':
		{
			double b2 = primary();
			b = fmod(b, b2);
			break;
		}
		default:
			ts.putback(t);
			return b;
		}
	}
}

double expression() 
{
	double c = term();
	while (true)
	{
		Token t = ts.get();
		switch (t.type)
		{
		case '+':
			c += term();
			break;
		case '-':
			c -= term();
			break;
		default:
			ts.putback(t);
			return c;
		}
	}
}

double declaration()
{
	Token t = ts.get();
	if (t.type != n)
		cout << "Error!\n";
	string var_name = t.names;
	Token t2 = ts.get();

	double a = expression();
	st.declare(var_name, a, t.type == constant);
	return a;
}

double statement()
{
	Token t = ts.get();
	switch (t.type)
	{
	case let:
	case constant:
		ts.putback(t);
		return declaration();
	
	default:
		ts.putback(t);
		return expression();
	}
}

const string prompt = "-> ";
const string result = "Resultado: ";

void help() // Exercises 6 
{
	cout << "Funciones basicas: \n";
	cout << "Para Sumar -> Ingresa 2 numeros con un '+' en medio de los dos.\n";
	cout << "Para Restar -> Ingresa 2 numeros con un '-' en medio de los dos.\n";
	cout << "Para Multiplicar -> Ingresa 2 numeros con un '*' en medio de los dos.\n";
	cout << "Para Dividir -> Ingresa 2 numeros con un '/' en medio de los dos.\n";
	cout << "Para Factorial -> Ingresa 1 numeros con un '!' al final.\n";
	cout << "Para Modulo -> Ingresa 2 numeros con un '%' en medio de los dos.\n";
	cout << "Para Pi -> Puedes usarlo como el siguiente ejemplo: '3*pi'\n";
	cout << "Para E -> Puedes usarlo como el siguiente ejemplo: '3*e'\n";
	cout << "Para K -> Puedes usarlo como el siguiente ejemplo: '3*k'\n";
	cout << "Para Raiz Cuadrada -> Ingresa 'sqrt' y presiona Enter, despues de eso ingresa un numero.\n";
	cout << "Ingresa 'Valores' para saber los valores de 'Pi, E, K'.\n";

}

void calculate()
{
	while (true)
	{
		cout << prompt;
		Token t = ts.get();
		while (t.type == print) t = ts.get();
		if (t.type == command)
		{
			if (t.names == quitkey) // Exercises 7
				return;
			if (t.names == helpkey)
				help();
			if (t.names == valkey)
				st.print();
			ts.ignore(print);
		}
		else 
		{
			ts.putback(t);
			cout << result << statement() << '\n';
		}
	}
}

void clean_input()
{
	ts.ignore(print);
}

int main()
{
	st.declare("pi", 3.1415926535, true);
	st.declare("k", 1000, false);
	st.declare("e", 2.7182818284, true);

	cout << "<< Calculadora de Abel >>\n";
	cout << "\n";
	cout << "Haz la Operacion que sea de tu agrado. \n";
	cout << "Utilizando numeros y operadores disponibles.\n";
	cout << "Operadores disponibles: '+, -, *, /, %, (), pi, k, e, sqrt'\n";
	cout << "Ingresa 'ayuda' para recibir ayuda o 'salir' para terminar.\n";
	cout << "Presiona Enter.\n";
	cout << "\n";
	calculate();
	return 0;
}