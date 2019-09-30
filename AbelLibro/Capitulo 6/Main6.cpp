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

//Exercises 1, 2, 3

//class Token {
//
//};
//
//class Token_stream {
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

class Name_Value {
public:
	string nombre;
	int valor;
	Name_Value(string str, int val)
		:nombre(str), valor(val){ }
};

int main()
{
	cout << "Ingresa un nombre y valor -> 'Joe 17'. Escribre 'abcd 0' al final.\n";
	string nombre = " ";
	int valor = -1;
	vector<Name_Value>Ingreso;
	while (cin >> nombre >> valor && !(nombre == "abcd" && valor == 0))
	{
		for (int i = 0; i < Ingreso.size(); ++i)
			if (nombre == Ingreso[i].nombre)
				cout << "Este nombre ya esta en la lista";
		Ingreso.push_back(Name_Value(nombre, valor));
	}
	for (int i = 0; i < Ingreso.size(); ++i)
	{
		cout << "(" << Ingreso[i].nombre << " , " << Ingreso[i].valor << ")\n";
	}
}