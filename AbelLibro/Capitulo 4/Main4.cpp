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

//int main() // Try this 1
//{
//	float dolar;
//	cout << "Cuantos dolares tienes? ";
//	cin >> dolar;
//
//	cout << "$ " << dolar << " = " << dolar / 0.0093 << " Yen" << endl;
//	cout << "$ " << dolar << " = " << dolar / 0.11 << " Kroner" << endl;
//	cout << "$ " << dolar << " = " << dolar / 1.24 << " Pounds" << endl;
//}

//int main() // Try this 2
//{
//	float Yuan;
//	float Kroner; 
//	cout << "Cuantos Yuans y Kroners tienes? ";
//	cin >> Yuan >> Kroner;
//
//	cout << "Yuan $ " << Yuan << " = " << Yuan * 0.14 << " Dolares" << endl;
//	cout << "Kroner $ " << Kroner << " = " << Kroner * 0.11 << " Dolares" << endl;
//
//}

//int main() // Try this 3
//{
//	char a = 97;
//	while (a < 123) {
//		cout << a << '\t' << a+1 << '\n';
//		++a;
//	}
//}

//void p_square(int x) // Try this 4 
//{
//	cout << x << '\t' << x * x << '\n';
//}
//
//int main()
//{
//	for (int i = 0; i < 100; ++i)p_square(i);
//}

//int main() // Try this 5 
//{
//	vector<string> palabras;
//	string temp;
//  cout << "Escriba algo usando las palabras 'Abel', 'Hola' y 'Broccoli' << endl;
//	while (cin >> temp)
//		palabras.push_back(temp);
//	vector<string> disliked;
//	disliked.push_back("Broccoli");
//	disliked.push_back("Hola");
//	disliked.push_back("Abel");
//
//	for (int i = 0; i < palabras.size(); ++i)
//	{
//		bool PalabraDisliked = false;
//		for (int a = 0; a < disliked.size(); ++a)
//		{
//			if(disliked[a] == palabras[i-1]) PalabraDisliked = true;
//		}
//		if (PalabraDisliked)
//			cout << "BLEEP";
//		else
//			cout << palabras[i] << "\n";
//	}
//	cout << endl;
//	return 0;
//}

// Exercises 3 

//int main()
//{
//	vector<double> distancias;
//	double distancia;
//	double total = 0;
//	double corta = 0;
//	double lejana = 0;
//	double media = 0;
//	cout << "Ingrese 5 distancias y al terminar escriba distancias: " << endl;
//	while (cin >> distancia) 
//	{
//		if (distancia > 0)
//			distancias.push_back(distancia);
//	}
//	if (distancias.size() == 0)
//		cout << "Error";
//	corta = distancias[0];
//	lejana = distancias[0];
//	for (int i = 0; i < distancias.size(); ++i)
//	{
//		total += distancias[i];
//		if (distancias[i] < corta)
//			corta = distancias[i];
//		if (distancias[i] > lejana)
//			lejana = distancias[i];
//	}
//	media = total / distancias.size();
//	cout << "Total: " << total << endl;
//	cout << "Distancia mas corta: " << corta << endl;
//	cout << "Distancia media: " << media << endl;
//	cout << "Distancia mas lejana: " << lejana << endl;
//	return 0;
//}

// Exercises 5 

//int main()
//{
//	cout << "Ingresa 2 valores double y un operador : ";
//	double a = 0;
//	double b = 0;
//	char c = ' ';
//	while (cin >> a >> b >> c)
//	{
//		switch (c) 
//		{
//		case'+':
//			cout << "Suma: " << a << " + " << b << " = " << a + b << endl;
//			break;
//		case'-':
//			cout << "Resta: " << a << " - " << b << " = " << a - b << endl;
//			break;
//		case'/':
//			cout << "Division: " << a << " / " << b << " = " << a / b << endl;
//			break; 
//		case'*':
//			cout << "Multiplicacion: " << a << " * " << b << " = " << a * b << endl;
//			break;
//		}
//
//	}
//
//}

// Exercises 6

//int main()
//{
//	vector<string>letras;
//	letras.push_back("Cero");
//	letras.push_back("Uno");
//	letras.push_back("Dos");
//	letras.push_back("Tres");
//	letras.push_back("Cuatro");
//	letras.push_back("Cinco");
//	letras.push_back("Seis");
//	letras.push_back("Siete");
//	letras.push_back("Ocho");
//	letras.push_back("Nueve");
//	vector<string>numeros;
//	numeros.push_back("0");
//	numeros.push_back("1");
//	numeros.push_back("2");
//	numeros.push_back("3");
//	numeros.push_back("4");
//	numeros.push_back("5");
//	numeros.push_back("6");
//	numeros.push_back("7");
//	numeros.push_back("8");
//	numeros.push_back("9");
//
//	string ingreso = " ";
//	cout << "Ingresa un numero expresado con letras del >Cero< al >Nueve<: \n";
//	while (cin >> ingreso)
//	{
//		bool valido = false;
//		for (int i = 0; i < numeros.size(); ++i)
//		{
//			if (letras[i] == ingreso)
//			{
//				cout << numeros[i] << endl;
//				valido = true;
//			}
//		}
//	}
//}

// Exercises 7 

//vector<string>letras;
//
//void init_vector()
//{
//	letras.push_back("Cero");
//	letras.push_back("Uno");
//	letras.push_back("Dos");
//	letras.push_back("Tres");
//	letras.push_back("Cuatro");
//	letras.push_back("Cinco");
//	letras.push_back("Seis");
//	letras.push_back("Siete");
//	letras.push_back("Ocho");
//	letras.push_back("Nueve");
//}
//
//int convertidor()
//{
//	string ingreso;
//	cin >> ingreso;
//	for (int i = 0; i < letras.size(); ++i)
//	{
//		if (letras[i] == ingreso)
//			return i;
//	}
//}
//
//int main()
//{
//	init_vector();
//	cout << "Ingresa 2 valores escritos a letra del >Cero< al >Nueve< y un operador \n";
//	while (true)
//	{
//		int a = 0;
//		int b = 0;
//		char c = 0;
//		a = convertidor();
//		b = convertidor();
//		cin >> c;
//
//		switch (c)
//		{
//		case'+':
//			cout << "Suma: " << a << " + " << b << " = " << a + b << endl;
//			break;
//		case'-':
//			cout << "Resta: " << a << " - " << b << " = " << a - b << endl;
//			break;
//		case'/':
//			cout << "Division: " << a << " / " << b << " = " << a / b << endl;
//			break;
//		case'*':
//			cout << "Multiplicacion: " << a << " * " << b << " = " << a * b << endl;
//			break;
//		}
//	}
//}
