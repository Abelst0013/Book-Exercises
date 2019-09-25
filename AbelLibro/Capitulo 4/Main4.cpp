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