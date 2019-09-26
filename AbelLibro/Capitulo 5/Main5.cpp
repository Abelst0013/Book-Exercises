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

// Exercises 1 
int area(int length, int width);
 //Try this 1
int s0 = area(7, 2); // Correcto
//int s1 = area(7;   // "Area" is undefined <-> expected a ')'
//int s2 = area(7)   // "Area" is undefined 
//int s3 = area(7);  // expected a ';'
//int s4 = area('7); // "Area" is undefined <-> missing closing quote 


// Try this 2
//int x0 = arena(7);
//int x1 = area(7);
//int x2 = area("seven", 2);
//int x3 = 7(arena);
//int x4 = area(7, "two");
//double x5 = area(7, 2);
//int x6 = arena(7, 2)

// Exercises 2 

//double ctok(double c)
//{
//	if (c < -273.15) cout << " Error : Temperatura debajo del 0\n"; // Exercises 3 
//	double k = c + 273.15;
//	return k;
//}
//
//double ktoc(double k) // Exercises 4 y 5 
//{
//	if (k<0) cout << " Error : Temperatura debajo del 0\n";
//	double c = k - 273.15;
//	return c;
//}
//
//int main()
//{
//	double temperatura = 0;
//	char unidad = 0;
//	double r_temperatura = 0;
//	char r_unidad = 0;
//
//	cout << "Ingresa la temperatura que quieras convertir y la unidad ->('C' = Celsius o 'K' = Kelvin)\n";
//	cin >> temperatura >> unidad;
//	if (unidad == 'C')
//	{
//		r_temperatura = ctok(temperatura);
//		r_unidad = 'K';
//		cout << "Resultado: " << r_temperatura << r_unidad << endl;
//	}
//	else if (unidad == 'K')
//	{
//		r_temperatura = ktoc(temperatura);
//		r_unidad = 'C';
//		cout << "Resultado: " << r_temperatura << r_unidad << endl;
//	}
//	else {
//		cout << "Ingresa valores validos\n" << endl;
//		return 0;
//	}
//}

// Exercises 6 

//double ctof(double c)
//{
//	if (c<-273.15) cout << " Error : Temperatura debajo del 0\n";
//	double f = c * 9 / 5 + 32;
//	return f;
//}
//
//double ftoc(double f)
//{
//	if (f<-459.67) cout << " Error : Temperatura debajo del 0\n";
//	double c = (f - 32) * 5 / 9;
//	return c;
//}
//
//int main()
//{
//	double temperatura = 0;
//	char unidad = 0;
//	double r_temperatura = 0;
//	char r_unidad = 0;
//
//	cout << "Ingresa la temperatura que quieras convertir y la unidad ->('C' = Celsius o 'F' = Fahrenheit)\n";
//	cin >> temperatura >> unidad;
//	if (unidad == 'C')
//	{
//		r_temperatura = ctof(temperatura);
//		r_unidad = 'F';
//		cout << "Resultado: " << r_temperatura << r_unidad << endl;
//	}
//	else if (unidad == 'F')
//	{
//		r_temperatura = ftoc(temperatura);
//		r_unidad = 'C';
//		cout << "Resultado: " << r_temperatura << r_unidad << endl;
//	}
//	else 
//	{
//		cout << "Ingresa valores validos\n" << endl;
//		return 0;
//	}
//
//}

// Exercises 7 

// Exercises 8 

//int main()
//{
//	vector<int> valores;
//	int valor = 0;
//	int numero = 0;
//
//	cout << "Ingresa la cantidad de valores que quieres sumar: \n";
//	cin >> numero;
//	cout << "Ingresa los valores que quieres sumar: (Escribe tu nombre al terminar y presiona enter)\n";
//	while (cin >> valor)
//		valores.push_back(valor);
//	
//	int suma = 0;
//	cout << "La suma de estos ";
//	if (numero > 1) cout << numero << ' ';
//	cout << "numeros ( ";
//	for (int i = 0; i < numero; ++i)
//	{
//		suma += valores[i];
//		cout << valores[i];
//	}
//	cout << " ) es " << suma << "\n";
//	return 0; 
//}

// Exercises 10

//int main()
//{
//	vector<double> valores;
//	vector<double> diferencias;
//	double valor = 0;
//	int numero = 0;
//
//	cout << "Ingresa la cantidad de valores que quieres sumar: \n";
//	cin >> numero;
//	cout << "Ingresa los valores que quieres sumar: (Escribe tu nombre al terminar y presiona enter)\n";
//	while (cin >> valor) 
//	{
//		valores.push_back(valor);
//		if (valores.size() >= 2)
//			diferencias.push_back(valor - valores[valores.size() - 2]);
//	}
//
//	if (valores.size() < 2)
//		cout << "Necesitas minimo 2 valores para tener un vector de diferencias\n";
//	else
//	{
//		cout << "Vector de diferencias: \n";
//			for (int i = 0; i < diferencias.size(); ++i)
//				cout << diferencias[i] << endl;
//	}
//
//	double suma = 0;
//	cout << "La suma de estos ";
//	if (numero > 1) cout << numero << ' ';
//	cout << "numeros ( ";
//	for (int i = 0; i < numero; ++i)
//	{
//		suma += valores[i];
//		cout << valores[i];
//	}
//	cout << " ) es " << suma << "\n";
//	return 0;
//}

// Exercises 11

//int main()
//{
//	char opcion = 0;
//	cout << "Quieres numeros Fibonacci o ver el numero mas grande en un Int. (N/G) \n";
//	cin >> opcion;
//	vector<int> Fibonacci;
//	Fibonacci.push_back(1);
//	Fibonacci.push_back(1);
//	if (opcion == 'n' || opcion == 'N') {
//		int numero = 0;
//		cout << "Cuantos numeros Fibonacci quieres?\n";
//		cin >> numero;
//		for (int i = 2; Fibonacci.size() < numero; ++i) {
//			Fibonacci.push_back(Fibonacci[i - 1] + Fibonacci[i - 2]);
//		}
//
//		cout << "Numeros Fibonacci:\n";
//		for (int i = 0; i < numero; ++i)
//			cout << Fibonacci[i] << endl;
//	}
//	else {
//		while (Fibonacci[Fibonacci.size() - 1] + Fibonacci[Fibonacci.size() - 2] > Fibonacci[Fibonacci.size() - 1])
//			Fibonacci.push_back(Fibonacci[Fibonacci.size() - 1] + Fibonacci[Fibonacci.size() - 2]);
//		cout << "El numero mas grande posible es: " << Fibonacci[Fibonacci.size() - 1] << endl;
//	}
//
//	return 0;
//}