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

// Exercises 2 & 3
//
//class NamePairs
//{
//public:
//	void read_names();
//	void read_ages();
//	void print();
//	void sort1();
//
//private: 
//    vector<string> name;
//    vector<double> age;
//
//	int name_idx(const string& n);
//};
//
//void NamePairs::read_names()
//{
//	cout << "Enter a list of names and add a '.' in the end. \n";
//	string n;
//	while (cin >> n && n != ".")
//	{
//		for (int i = 0; i < name.size(); ++i)
//			if (name[i] == n)
//				cout << "It already exists.";
//		name.push_back(n);
//	}
//}
//
//void NamePairs::read_ages()
//{
//	age = vector<double>();
//	for (int i = 0; i < name.size(); ++i)
//	{
//		cout << "Enter the ages of " << name[i] << ": \n";
//		double ages{ 0 };
//		cin >> ages;
//		age.push_back(ages);
//	}
//}
//
//void NamePairs::print() 
//{
//	for (int i = 0; i < name.size(); ++i)
//	{
//		cout << " >> " << name[i] << " is " << age[i] << " years old.\n";
//	}
//}
//
//int NamePairs::name_idx(const string& n)
//{
//	for (int i = 0; i < name.size(); ++i)
//	{
//		if (name[i] == n)
//			return i;
//	}
//}
//
//void NamePairs::sort1()
//{
//	vector<string> names = name;
//	vector<double> ages = age;
//	sort(name.begin(), name.end());
//	for (int i = 0; i < name.size(); ++i)
//		age[i] = ages[name_idx(name[i])];
//}
//
//int main()
//{
//	NamePairs np;
//
//	np.read_names();
//	np.read_ages();
//	cout << ">> List: \n";
//	np.print();
//	np.sort1();
//	cout << ">> Sort: \n";
//	np.print();
//
//	return 0;
//}

// Exercises 4 
// Dangerously Ugly Code

struct X                             // Struct X tiene funciones miembro f(), g(), X(), m3() y un Main(). Una Variable 'm'
{
	void f(int x)                    // Funcion f() con un argumento X dentro. 
	{
		struct Y                     // Struct Y con una funcion f() dentro. 
		{
			int f() { return 1; }    // Funcion miembro de Y 
			int m;                   // Variable miembro de Y
		};

		int m;                       // Variable dentro de f()
		m = x;                       // Establecer que 'm' es igual al argumento de f()
		Y m2;                        // Declara la variable Y -> 'm2' 
		return f(m2.f());            // Devuelve el resultado la funcion miembro f() llamando con m2.f().
	}
	int m;                           // Variable miembro de X

	void g(int m)                    // Funcion miembro g()  
	{
		if (m)                       // Este al igual que else, son utilizados para predeterminas las veces que sera recursiva la funcion. 
			f(m + 2);                // Llama la funcion miembro f() de struct X con 'm+2' de argumento.
		else                         // Arriba explicado. 
		{
			g(m + 2);                // Llama la funcion miembro g() de struck X con 'm+2' de argumento. 
		}
	}

	X() { }                          // Constructor predeterminado para Struct X.

	void m3() { }                    // Funcion miembro m3(), no hace absolutamente nada. 

	void main()                      // Funcion miembro main()
	{
		X a;                         // Declara la variable X -> 'a' y utiliza el constructor predeterminado 
		a.f(2);                      // Llama la funcion miembro f() de struct X con 2 de argumento
	}
};