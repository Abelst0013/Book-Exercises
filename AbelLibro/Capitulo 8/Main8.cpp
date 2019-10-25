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

// Exercises 2, 3 // https://joseguerreroa.wordpress.com/2011/07/13/serie-de-fibonacci-en-cc/
// https://es.stackoverflow.com/questions/104234/c-c%C3%B3digo-de-fibonacci-que-imprima-la-serie-desde-la-funci%C3%B3n-recursiva

//void print(const string& a, const vector<int>& v) //2
//{
//	cout << a << v.size();
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (i % 8 == 0) 
//			cout << endl;
//			cout << v[i];
//		if (i < v.size() - 1)
//			cout << " >> ";
//	}
//}
// 
//void Fibo(int x, int y, vector<int>& v, int n)
//{
//	if (n == 0)
//		cout << "Tienes que agregar un numero minimo.\n";
//	if (n < 2)
//		cout << "Tienes que ingresar un numero 2 o mas.\n";
//
//	v.push_back(x);
//	v.push_back(y);
//
//	for (int i = 2; i < n; ++i)
//		v.push_back(v[i - 2] + v[i - 1]);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int n = 0;
//	vector<int> v;
//
//	cout << ">> SUCESION DE FIBONACCI <<\n";
//	cout << "Ingresa el primer y segundo numero de la sucesion Fibonacci.\n";
//	cout << "Ademas la cantidad de numeros que quieres recibir.\n";
//	cout << ">> Presiona Enter al final.\n";
//	cin >> x >> y >> n;
//
//	Fibo(x, y, v, n);
//
//	string a = "Numeros Fibonacci: ";
//	print(a, v);
//}

// Exercises 5 

//void print(const string& a, const vector<int>& v)
//{
//	cout << a;
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (i % 8 == 0)
//			cout << endl;
//		cout << v[i];
//		if (i < v.size() - 1)
//			cout << " >> ";
//	}
//}
//
//vector<int> reversa(const vector<int>& v)
//{
//	vector<int> vr(v.size());
//	for (int i = 0; i < v.size(); ++i)
//	{
//		vr[i] = v[v.size() - 1 - i];
//	}
//	return vr;
//}
//
//void reversa1(vector<int>& v)
//{
//	for (int i = 0; i < v.size() / 2; ++i)
//	{
//		swap(v[i], v[v.size() - 1 - i]);   //https://www.geeksforgeeks.org/swap-in-cpp/
//	}
//}
//
//int main()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	v1.push_back(1);
//	v1.push_back(3);
//	v1.push_back(5);
//	v1.push_back(7);
//	v1.push_back(9);
//	v2.push_back(2);
//	v2.push_back(4);
//	v2.push_back(6);
//	v2.push_back(8);
//
//	print(" << Reversa ", v1);
//	vector<int> vr = reversa(v1);
//	print(" << Inicial ", v1);
//	print("  ", vr);
//	reversa1(v1);
//	print(" << Con Reversa", v1);
//	print(" << Final \n", v2); 
//	vector<int> vr2 = reversa(v2);
//	print("      << Inicial2 ", v2);
//	print(" ", vr2);
//	reversa1(v2);
//	print("      << Con Reversa ", v2);
//	cout << "      << Final\n";
//}

// Exercises 6

//void print(const string& a, const vector<string>& v)
//{
//	cout << a;
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (i % 8 == 0)
//			cout << endl;
//		cout << v[i];
//		if (i < v.size() - 1)
//			cout << " >> ";
//	}
//}
//
//vector<string> reversa(const vector<string>& v)
//{
//	vector<string> vr(v.size());
//	for (int i = 0; i < v.size(); ++i)
//	{
//		vr[i] = v[v.size() - 1 - i];
//	}
//	return vr;
//}
//
//void reversa1(vector<string>& v)
//{
//	for (int i = 0; i < v.size() / 2; ++i)
//	{
//		swap(v[i], v[v.size() - 1 - i]);   //https://www.geeksforgeeks.org/swap-in-cpp/
//	}
//}
//
//int main()
//{
//	vector<string> va;
//	vector<string> vb;
//
//	va.push_back("Uno");
//	va.push_back("Tres");
//	va.push_back("Cinco");
//	va.push_back("Siete");
//	va.push_back("Nueve");
//	vb.push_back("Dos");
//	vb.push_back("Cuatro");
//	vb.push_back("Seis");
//	vb.push_back("Ocho");
//
//	print(" << Reversa >> ", va);
//	vector<string> vr = reversa(va);
//	print(" << Inicial ", va);
//	print("  ", vr);
//	reversa1(va);
//	print(" << Con Reversa", va);
//	print(" << Final \n", vb);
//	vector<string> vr2 = reversa(vb);
//	print(" << Inicial2 ", vb);
//	print(" ", vr2);
//	reversa1(vb);
//	print(" << Con Reversa ", vb);
//	cout << " << Final\n";
//}

// Exercises 7 

//vector<string> name;
//vector<double> age;
//
//void get_namesNages()
//{
//	string names;
//	cout << "Enter a list of names.\n";
//	while (cin >> names && names!=".")
//	{
//		for (int i = 0; i < name.size(); ++i)
//		{
//			if (names == name[i])
//				cout << "It already exists.";
//		}
//		name.push_back(names);
//	}
//	for (int i = 0; i < name.size(); ++i)
//	{
//		cout << "Enter the ages of " << name[i] << ": \n";
//		double ages;
//		cin >> ages;
//		age.push_back(ages);
//	}
//}
//
//void print(const vector<string>& name, const vector<double>& age)
//{
//	for (int i = 0; i < name.size(); ++i)
//		cout << " >> " << name[i] << " is " << age[i] << " years old.\n";
//}
//
//int name_idx(const vector<string>& name, const string& n)
//{
//	for (int i = 0; i < name.size(); ++i)
//	{
//		if (name[i] == n)
//			return i;
//	}
//}
//
//int main()
//{
//	get_namesNages();
//	cout << " \n";
//
//	vector<string> names = name;
//	vector<double> ages = age;
//	sort(name.begin(), name.end());
//	for (int i = 0; i < name.size(); ++i)
//		age[i] = ages[name_idx(names, name[i])];
//	cout << "With sort: \n";
//	print(name, age);
//}

//Exercises 10

void print(const string& a, const vector<double>& v)
{
	cout << a << " >> ";
	for (double b : v)
		cout << b << " ";
	cout << "<< \n";
}

double maxV(const vector<double>& v)
{
	double max{ v[0] };

	for (double a : v)
		if (a > max)
			max = a;
	return max;
}

int main()
{
	vector<double> values{21, 322, 4532, -199, 212, 4, 0, 29};

	print("Valores: ", values);
	cout << "Elemento mas grande: " << maxV(values) << "\n";

	return 0;
}