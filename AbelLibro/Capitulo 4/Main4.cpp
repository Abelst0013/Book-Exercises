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

// Exercises 8 

//int main()
//{
//	double square = 1;
//	double total = 0;
//	cout << "Square" << '\t' << "Grains" << '\t' << "Total\n";
//	for (int i = 1; i <= 64; ++i)
//	{
//		total += square;
//		cout << i << '\t' << square << '\t' << total << endl;
//		square *= 2;
//	}
//	return 0;
//}

// Exercises 11 y 12 

//vector<int> primo;
//
//bool NumeroPrimo(int a)
//{
//	for (int i = 0; primo[i] <= sqrt(a); i++)
//	{
//		if (a % primo[i] == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	// cout << "Cuantos numeros primos quieres?\n";
//	int primos = 25; // Cambiar a 0 
//	// Cin >> primos; 
//	primo.push_back(2);
//	int i = 3;
//	cout << "Los numeros primos entre el 1 al 100 son:" << endl;
//	while (primo.size() < primos)
//	{
//		if (NumeroPrimo(i))
//			primo.push_back(i);
//		i += 2;
//	}
//	for (int i = 0; i < primo.size(); ++i)
//		cout << primo[i] << endl;
//}

// Exercises 13 y 14

//const int len = 100; // Cambiar para 14
//int main()
//{
//	int arr[100] = { 0 };
//	for (int i = 2; i < 100; i++)
//	{
//		for (int j = i * i; j < 100; j += i)
//		{
//			arr[j - 1] = 1;
//		}
//	}
//	for (int i = 1; i < 100; i++)
//	{
//		if (arr[i - 1] == 0)
//			cout << i << '\t';
//	}
//}

// Exercises 18

//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	cout << "Ingresa los valores de la siguiente ecuacion ->( 'a' x^2 + 'b' x + 'c' ): \n";
//	while (cin >> a >> b >> c)
//	{
//		double respuesta = b * b - 4 * a * c;
//		if (respuesta == 0)
//		{
//			double x = -b / (2 * a);
//			cout << "El valor de 'x' es: " << x << endl;
//		}
//		else {
//			double x1 = (-b + sqrt(respuesta)) / 2 * a;
//			double x2 = (-b - sqrt(respuesta)) / 2 * a;
//			cout << "Los valores de x1 y x2 son: " << x1 << " y " << x2 << endl;
//		}
//	}
//}

// Exercises 19

vector<string> nombres;
vector<int> scores;

void score(string a)
{
	int i = 0;
	while (i < nombres.size())
	{
		if (nombres[i] == a)
		{
			cout << a << " " << scores[i] << endl;
			return;
		}
		++i;
	}
	cout << "Name not found\n"; // Exercises 20
}

void nombre(int b)
{
	bool existe = false;
	for (int i = 0; i < scores.size(); ++i)
	{
		if (scores[i] == b)
		{
			cout << nombres[i] << " " << b << endl;
			existe = true;
		}
	}
	if (!existe)
		cout << "Score not found\n"; // Exercises 21
}

int main()
{
	string nombre2 = " ";
	int score2 = 0;
	cout << "Ingresa un nombre y puntuacion. (Ejemplo: 'Joe 17') despues agrega 'NoName 0' cuando alla terminado. \n";
	while (cin >> nombre2 >> score2 && !(nombre2 == "NoName" && score2 == 0))
	{
		nombres.push_back(nombre2);
		scores.push_back(score2);
	}
	for (int i = 0; i < nombres.size(); ++i)
	{
		for (int j = i + 1; j < nombres.size(); ++j)
		{
			if (nombres[i] == nombres[j])
				cout << "Ya existe este nombre\n";
		}
	}
	for (int i = 0; i < nombres.size(); ++i)
		cout << nombres[i] << ", " << scores[i] << endl;
	int score3 = 0;
	cout << "Ingresa el nombre o la puntuacion\n";
	while (true)
	{
		if (cin >> score3)
			nombre(score3);
		else
		{
			cin.clear();
			string nombre3;
			cin >> nombre3;
			score(nombre3);
		}
	}
}