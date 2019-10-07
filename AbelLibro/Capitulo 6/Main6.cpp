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

//Exercises 1, 2, 3 // No pude hacerlo, demasiado complejo creo yo ahaha. 

//class Token {
//public:
//
//};
//
//class Token_stream {
//public:
//
//private:
//
//};
//
//void Token_stream::putback(Token t) {
//
//}
//
//Token Token_stream::get() {
//
//}
//
//Token_stream ts;
//double expression();
//
//double primary() {
//
//}
//double term() {
//
//}
//double expression() {
//
//}
//
//int main()
//{
//
//}

// Exercises 4 

//class Name_Value {
//public:
//	string nombre;
//	int valor;
//	Name_Value(string str, int val)
//		:nombre(str), valor(val){ }
//};
//
//int main()
//{
//	cout << "Ingresa un nombre y valor -> 'Joe 17'. Escribre 'abcd 0' al final.\n";
//	string nombre = " ";
//	int valor = -1;
//	vector<Name_Value>Ingreso;
//	while (cin >> nombre >> valor && !(nombre == "abcd" && valor == 0))
//	{
//		for (int i = 0; i < Ingreso.size(); ++i)
//			if (nombre == Ingreso[i].nombre)
//				cout << "Este nombre ya esta en la lista";
//		Ingreso.push_back(Name_Value(nombre, valor));
//	}
//	for (int i = 0; i < Ingreso.size(); ++i)
//	{
//		cout << "(" << Ingreso[i].nombre << " , " << Ingreso[i].valor << ")\n";
//	}
//}

// Exercises 5, 6, ?7?  //No entendi realmente lo que se necesita hacer en estos ejercicios. Creo que el 7 tambien tiene que ver con estos 2. 

// Exercises 8

//vector<char> list(4);
//
//void init_List()
//{
//	list[0] = 'a';
//	list[1] = 'b';
//	list[2] = 'c';
//	list[3] = 'd';
//}
//
//bool check(vector<char>answers)
//{
//	vector<int>trues(4, 0);
//	int bulls = 0;
//	int cows = 0;
//
//	for (int i = 0; i < list.size(); ++i)
//	{
//		if (answers[i] == list[i])
//		{
//			++bulls;
//			trues[i] = 1;
//		}
//	}
//	for (int i = 0; i < list.size(); ++i)
//	{
//		for (int j = 0; j < answers.size(); ++j)
//		{
//			if (list[i] == answers[j] && trues[j] == 0)
//			{
//				++cows;
//				trues[j] = 1;
//			}
//		}
//	}
//
//	cout << "Bulls: " << bulls << endl;
//	cout << "Cows: " << cows << endl;
//	if (bulls == 4) return true; 
//	return false; 
//}
//
//int main()
//{
//	char a = 0;
//	char b = 0;
//	char c = 0;
//	char d = 0;
//	vector<char> guess(4);
//
//	init_List();
//
//	cout << "Adivina las 4 letras!\n";
//	cout << "Ingresa 4 letras elegidas a tu eleccion\n";
//	while (cin >> a >> b >> c >> d)
//	{
//		guess[0] = a;
//		guess[1] = b;
//		guess[2] = c;
//		guess[3] = d;
//
//		bool f = check(guess);
//		if (f)
//		{
//			cout << "Has acertado!\n";
//			break;
//		}
//	}
//}

// Exercises 9 
// Este ejercicio lo estaba haciendo en español, y cuando vi que tenia que agregarle el plural a las palabras, aborte la mision. 
// Tuve que cambiar a ingles todo. Intente hacerlo con el plural en español, pero no me salio. 
// JAJA intente hacer un ejemplo que encontre en internet con un arreglo, pero no jalo. 

//vector<string> words;
//
//void init()
//{
//	words.push_back("thousand"); 
//	words.push_back("hundred");
//	words.push_back("ten");
//	words.push_back("one"); 
//}
//
//void plural(int b) // Agregar 's' a palabras en plural
//{
//	if (b > 1)
//		cout << 's';
//	if (b == 1)
//		return;
//}
//
//void cout_result(vector<int> a) 
//{
//	cout << " is -> ";
//	for (int i = 0; i < a.size(); ++i)
//	{
//		cout << a[i] << ' ' << words[i + 4 - a.size()];
//		plural(a[i]);
//		if (i < a.size() - 1)
//			cout << " and ";
//	}
//	cout << ".\n";
//}
//
//int main()
//{
//	init();
//
//	cout << "Enter a maximum number of 4 digits and in the end add a '.' and press enter.\n";
//	while (true)
//	{
//		vector<int> v;
//		char c;
//		while (cin >> c)
//		{
//			if (c<'0' || c>'9')
//			{
//				cin.ignore(10000, '\n'); //Descartas # caracteres, o un salto de linea. Lo que aparezca primero. https://foro.elhacker.net/programacion_cc/funcion_cinignore-t290246.0.html
//				break;
//			}
//			v.push_back(c - '0');
//		}
//		cout_result(v);
//
//		return 0;
//	}
//}

// Exercises 10 

int factorial(int num) // Examen
{
	if (num == 0)
		return 1;
	int result = 1;
	for (int i = 1; i <= num; ++i)
	{
		result *= i;
	}
	return result; 
}
	//Permutations: P(a,b) = a!/(a-b)!
int permutations(int a, int b) // Una permutacion es la variacion del orden o posicion de los elementos de un conjunto ordenado o una tupla. https://www.disfrutalasmatematicas.com/combinatoria/combinaciones-permutaciones.html
{
	int result = 0;
	int x = factorial(a);
	int y = factorial(a - b);
	result = x / y;
	return result;
}
	//Combinations: C(a,b) = P(a,b)/b!
int combinations(int a, int b) //https://www.aaamatematicas.com/sta-combin.htm
{
	return permutations(a, b) / factorial(b);
}

int main()
{
	int a = 0;
	int b = 0;
	while (cin)
	{
		cout << "Ingresa 2 numeros: \n";
		cin >> a >> b;

		char c = 0;
		cout << "Ingresa que quieres hacer con esos 2 numeros (P)ermutaciones o (C)ombinaciones\n";
		cin >> c;
		int resultado = 0;
		switch (c)
		{
		case 'p': case 'P':
			resultado = permutations(a, b);
			cout << "Permutaciones posibles de (" << a << ',' << b << ") = " << resultado << endl;
			break;
		case 'c': case 'C':
			resultado = combinations(a, b);
			cout << "Combinaciones posibles de (" << a << ',' << b << ") = " << resultado << endl;
			break;
		}
	}
	return 0;
}