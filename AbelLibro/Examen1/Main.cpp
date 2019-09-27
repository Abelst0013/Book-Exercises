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

void Factorial(int n);

int main()
{
	int n = 0;
	int resultado = 0;
	cout << "Escribe el numero '4' para sacar su Factorial\n";
	cin >> n;
	Factorial(n);
}

void Factorial(int n)
{
	int a = 0;
	int b = 0;
	a = n * (n - 1);
	b = a * 2;
	cout << b;
}