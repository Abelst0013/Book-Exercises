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

void print(const string& a, const vector<int>& v) //2
{
	cout << a << v.size();
	for (int i = 0; i < v.size(); ++i)
	{
		if (i % 8 == 0) 
			cout << endl;
			cout << v[i];
		if (i < v.size() - 1)
			cout << " >> ";
	}
}
 
void Fibo(int x, int y, vector<int>& v, int n)
{
	if (n == 0)
		cout << "Tienes que agregar un numero minimo.\n";
	if (n < 2)
		cout << "Tienes que ingresar un numero 2 o mas.\n";

	v.push_back(x);
	v.push_back(y);

	for (int i = 2; i < n; ++i)
		v.push_back(v[i - 2] + v[i - 1]);
}

int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	vector<int> v;

	cout << ">> SUCESION DE FIBONACCI <<\n";
	cout << "Ingresa el primer y segundo numero de la sucesion Fibonacci.\n";
	cout << "Ademas la cantidad de numeros que quieres recibir.\n";
	cout << ">> Presiona Enter al final.\n";
	cin >> x >> y >> n;

	Fibo(x, y, v, n);

	string a = "Numeros Fibonacci: ";
	print(a, v);
}