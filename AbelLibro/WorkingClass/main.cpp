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

int sumOneToN(int num);
int sumThreeAndFive(int num);
void numberPyramid(int num);
int Suma(int a, int b);

int main()
{
	cout << "Escoge una de 3 opciones:\n"
		<< "\t1. Suma numeros de 1 a n.\n"
		<< "\t2. Syma multiplos de 3 y 5 de 1 a n.\n"
		<< "\t3. Escalera de numeros a n.\n";

	int option = 0;
	int number = 0;
	cin >> option;

	if (option == 1)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		cout << "El resultado es: " << sumOneToN(number);
	}
	else if (option == 2)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		cout << "El resultado es: " << sumThreeAndFive(number);
	}
	else if (option == 3)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		numberPyramid(number);
	}
	else {
		cout << "Option incorrecta. Me fui ";
	}

	cin.ignore();
	cin.clear();
	cin.get();
	return 0;
}

int sumOneToN(int num) {

	int result = 0;
	for (int i = 1; i <= num; ++i)
	{
		cout << i << ", ";
		result += i;
	}

	return result;
}

int sumThreeAndFive(int num) {

	int result = 0;
	for (int i = 1; i <= num; ++i)
	{
		if (0 == i % 3 || 0 == i % 5)
		{
			cout << i << ", ";
			result += i;
		}
	}

	return result;
}

void numberPyramid(int num)
{
	for (int i = 1; i < i <= num; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		cout << endl;
	}
}


// 09-18-2019 

// I = Integrated, D = Development, E = Enviroment
// Compilador - Debugger - Editor de Texto

// Compilador -> Analisis, Linker, Codigo Objeto.
// Debugger -> Breakpoints, Profiler de memoria, Profiler de procesador, visualizador de memoria, Stack de llamadas.  
// Editor de texto 

// Funciones >>
// Parametros por valor 

int Suma(int a, int b)
{														  //
	int result = Suma(4, 5);							  //
	cout << Suma(8, 3);									  //**Lapso de vida
	return a + b;				                          //
} //(Se elimina todo y se limpia el espacio de memoria.)  //

//Parametros por referencia 

int Suma2(int& a, int& b)                                  //
{														   //
	a = a + 1;											   //**Lapso de vida
	b = b + 5;											   //
	return a + b;										   //
} //(Se elimina todo y se limpia el espacio de memoria.)   //

int main2()
{
	int x = 8;
	int y = 3;
	cout << Suma2(x, y);
	cout << x; //->9
	cout << y; //->8
}

//Parametros por referencia constante 

int Suma3(const int& a, const int& b) //No se puede modificar. Solamente leer y usar. //
{																					  //**Lapso de vida
	return a + b;																	  //
} //(Se elimina todo y se limpia el espacio de memoria.)							  //

// 09-19-2019

// Sobrecarga -> de Funciones y de Operadores.
//
// Funciones -> Crear 2 o mas versiones de la misma funcion para que trabaje con parametros y tipo de retornos diferentes. 

int Suma4(int a, int b) //Cambiar siempre los parametros de entrada. 
{
	return a + b;
}

float Suma4(float a, float b)
{
	return a + b;
}

float Suma4(float a, int b)
{
	return a + b;
}

float Suma4(int a, float b)
{
	return a + b;
}

int Suma4(int a, int b, int c)
{
	return a + b + c;
}

string Suma4(string a, string b) // Concatenacion 
{
	for (int i = 0; i < b.lenght(); ++i)
	{
		a.push(b[i]);
	}
	return a;
}

class Vector ()
{
public:
	Vector(int x, int y)
	Vector();
	int m_x;
	int m_y;
}

Vector Suma4(Vector a, Vector b)
{
	Vector result;
	result.m_x = a.m_x + b.m_x;
	result.m_y = a.m_y + b.m_y;
	return result;

}
// Operadores -> "+, -, *, /, <<, >>, ==, !==" 
//