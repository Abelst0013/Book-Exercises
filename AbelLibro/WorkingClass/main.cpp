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

//int sumOneToN(int num);
//int sumThreeAndFive(int num);
//void numberPyramid(int num);
//int Suma(int a, int b);
//
//int main()
//{
//	cout << "Escoge una de 3 opciones:\n"
//		<< "\t1. Suma numeros de 1 a n.\n"
//		<< "\t2. Syma multiplos de 3 y 5 de 1 a n.\n"
//		<< "\t3. Escalera de numeros a n.\n";
//
//	int option = 0;
//	int number = 0;
//	cin >> option;
//
//	if (option == 1)
//	{
//		cout << "Escribe un numero: ";
//		cin >> number;
//		cout << "El resultado es: " << sumOneToN(number);
//	}
//	else if (option == 2)
//	{
//		cout << "Escribe un numero: ";
//		cin >> number;
//		cout << "El resultado es: " << sumThreeAndFive(number);
//	}
//	else if (option == 3)
//	{
//		cout << "Escribe un numero: ";
//		cin >> number;
//		numberPyramid(number);
//	}
//	else {
//		cout << "Option incorrecta. Me fui ";
//	}
//
//	cin.ignore();
//	cin.clear();
//	cin.get();
//	return 0;
//}
//
//int sumOneToN(int num) {
//
//	int result = 0;
//	for (int i = 1; i <= num; ++i)
//	{
//		cout << i << ", ";
//		result += i;
//	}
//
//	return result;
//}
//
//int sumThreeAndFive(int num) {
//
//	int result = 0;
//	for (int i = 1; i <= num; ++i)
//	{
//		if (0 == i % 3 || 0 == i % 5)
//		{
//			cout << i << ", ";
//			result += i;
//		}
//	}
//
//	return result;
//}
//
//void numberPyramid(int num)
//{
//	for (int i = 1; i < i <= num; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cout << j;
//		}
//		cout << endl;
//	}
//}

// 09-18-2019 

// I = Integrated, D = Development, E = Enviroment
// Compilador - Debugger - Editor de Texto

// Compilador -> Analisis, Linker, Codigo Objeto.
// Debugger -> Breakpoints, Profiler de memoria, Profiler de procesador, visualizador de memoria, Stack de llamadas.  
// Editor de texto 

// Funciones >>
// Parametros por valor 

//int Suma(int a, int b)
//{														  //
//	int result = Suma(4, 5);							  //
//	cout << Suma(8, 3);									  //**Lapso de vida
//	return a + b;				                          //
//} //(Se elimina todo y se limpia el espacio de memoria.)  //
//
////Parametros por referencia 
//
//int Suma2(int& a, int& b)                                  //
//{														   //
//	a = a + 1;											   //**Lapso de vida
//	b = b + 5;											   //
//	return a + b;										   //
//} //(Se elimina todo y se limpia el espacio de memoria.)   //
//
//int main2()
//{
//	int x = 8;
//	int y = 3;
//	cout << Suma2(x, y);
//	cout << x; //->9
//	cout << y; //->8
//}
//
////Parametros por referencia constante 
//
//int Suma3(const int& a, const int& b) //No se puede modificar. Solamente leer y usar. //
//{																					  //**Lapso de vida
//	return a + b;																	  //
//} //(Se elimina todo y se limpia el espacio de memoria.)							  //
//
//// 09-19-2019
//
//// Sobrecarga -> de Funciones y de Operadores.
////
//// Funciones -> Crear 2 o mas versiones de la misma funcion para que trabaje con parametros y tipo de retornos diferentes. 
//
//int Suma4(int a, int b) //Cambiar siempre los parametros de entrada. 
//{
//	return a + b;
//}
//
//float Suma4(float a, float b)
//{
//	return a + b;
//}
//
//float Suma4(float a, int b)
//{
//	return a + b;
//}
//
//float Suma4(int a, float b)
//{
//	return a + b;
//}
//
//int Suma4(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//string Suma4(string a, string b) // Concatenacion 
//{
//	for (int i = 0; i < b.lenght(); ++i)
//	{
//		a.push(b[i]);
//	}
//	return a;
//}
//
//class Vector ()
//{
//public:
//	Vector(int x, int y)
//	Vector();
//	int m_x;
//	int m_y;
//}
//
//Vector Suma4(Vector a, Vector b)
//{
//	Vector result;
//	result.m_x = a.m_x + b.m_x;
//	result.m_y = a.m_y + b.m_y;
//	return result;
//
//}
// Operadores -> "+, -, *, /, <<, >>, ==, !==" 
//
//
// Estructuras de Datos -> *Arreglo, Lista, Stack, Queue, Map/Dictonary, Binary Tree, Set, Graph, Deque, *Matrix, Tuple.
// Arreglo (Vector) -> Conjunto de datos almacenados en bloques de memoria secuenciales. 
// Lista -> Conjunto de datos almacenados en bloques distribuidos aleatoriamente en la memoria con una referencia al siguiente elemento. 
// Stack -> (FiLo -> First in, Last Out), (LiFo -> Last in, First Out) Conjunto de datos organizados de tal manera en que el ultimo elemento en ser insertado es el primero en poderse sacarse.
// Queue -> (FiFo -> First in, First Out) Conjunto de datos organizados de tal manera en que el primer elemento en ser insertado es el primero en salir. (Filas comunes) 
// Map / Dictonary -> Conjunto de datos almacenados en pares de datos donde uno es una llave/identificador, y el otro el valor que queremos almacenar; las llaves deben ser unicas.
// Binary Tree -> (Raiz, Rama y Hojas) Conjunto de datos donde cada elemento puede obtener hasta 2 sub elementos. Primer Elemento -> Raiz, Sub divisiones -> Rama, Y los ultimos -> Hojas.
// Set -> Una lista con elementos unicos.
// Graph -> Conjunto de datos o elementos enlazados segun la conveniencia. Los elementos pueden estar enlazados a cualquier cantidad de otros elementos. 
// Deque -> Queue con dos finales. Se pueden sacar el elemento inicial o el final, pero no los intermedios. (Combinancion de Stack con Queue)
// Matrix -> Es un array (vector) bi dimesional. 
// Tuple -> Una lista con ELEMENTOS inmutables.

// 23-09-2019

// Tipos de errores -> Errores de Compilacion, Errores de Linker, Errores de Codigo Objeto.

// Errores de Compilacion -> Errores de Sintaxis, Errores de definicion. 
// Errores de Linker -> Blibioteca no encontradas, Inclusiones recursivas
// Errores de Ejecucion - > Errores Fatales (Excepciones), Bugs. -> Errores de Logica. 
// vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
// Stack Overflow -> Te terminas la memoria y se cierra el programa. 
// Access Violation -> Cuando quieres acceder a una parte de la memoria que no tienes control, o que no tienes acceso a ella. (>Punteros y Arreglos<)


// For ( >Declaracion inicial< , >Condicion< , >Operacion< )
// 0 = Falso
// # = Verdadero

// bool isABigger(int a, int b)
// {
// 	return a > b;
// }
// 
// if (isABigger(3,8))
// 
// while (isABigger(x,y))


// TEMARIO
// Cout -> Para imprimir 
// Cin -> Para llamar al input 

// Tipos de Datos -> 
// Int (4B - 32b), Char(1B - 8b), Float(4B - 32b), Bool(1B - 8b), 
// String(Indifinido), Double(8B - 64b), Long(4B - 32b), 
// Short(2B - 16b), Long long(8B - 64b). 

// Modificadores -> Const, Const Expr, Static, Dynamic, Unsigned, Long. 

// Sentencias condicionales -> If, else, Switch. 
// Sentencias ciclicas -> For & While.

// Funciones -> Tipos de Parametros, Sobrecarga

// Estructuras de datos -> *Arreglo, Lista, Stack, Queue, Map/Dictonary, Binary Tree, Set, Graph, Deque, *Matrix, Tuple.

// IDE -> I = Integrated, D = Development, E = Enviroment
// Proceso de Compilacion -> Analisis, Linker, Codigo Objeto.
// Errores -> Errores de Compilacion, Errores de Linker, Errores de Codigo Objeto.

// Strings -> Un conjunto de caracteres. -> Caracter Nulo al final. 
// Stack y Heap -> Stack = Memoria Estatica, Heap = Memoria Dinamica. 

// Revision de Examen

//bool IsPalindrome(string word)
//{
//	size_t size = word.size();
//	for (int i = 0; i < size * 0.5; i++)
//	{
//		if (word[i] != word[size - 1 - i])
//		{
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int Factorial(int num)
//{
//	int result = 1;
//
//	for (int i = num; i > 0; --i)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//int RecursiveFactorial(int num)
//{
//	if (1 == num)
//	{
//		return 1;
//	}
//
//	return num * RecursiveFactorial(num - 1);
//}


// Clase 7-10-2019

// Token es un objeto que nos representa una interpretacion (+, -, *, /) y un valor #.

// Formas basicas de crear tipos de datos 
// Tipos de datos complejos:
// Enum -> Enumeracion especifica
// Struct -> La definicion de un nuevo tipo de dato que almacena propiedades (miembros o variables). << Siempre es Publica >>
// Class -> Las clases siempre son privadas, a menos de que lo especifiques cuando la creas y le digas que es public. 

enum ComputerTypes
{
Portatil = 0, // agregar un valor de donde comenzar a guardar.
Escritorio, // 1
Servidor,
Carro,
Smartphone, 
Tablet,
Calculadora,
Robot, // 7
};

//struct Alumno
//{
//	string Nombre;
//	int Edad;
//	float Promedio;
//	string Grado;
//	char Grupo;
//	int Asistencias;
//	string Matricula;
//};
//Alumno Juan;
//Juan.Nombre = "Juan";
//cout << Juan.Nombre;

//class Alumno
//{
//public:
//	Alumno(string Nombre, int Edad); // Constructor
//	~Alumno(); // Destructor
//
//	m_Nombre;
//	m_Edad;
//};
//
//Alumno(string Nombre, int Edad)
//{
//	m_Nombre = Nombre;
//	m_Edad = Edad;
//}
//
//Alumno Pedro("Pedro", 21);
//cout << pedro.m_Nombre;

// Memory Leak -> Se libera hasta que reinicies la computadora, por eso es importante que crees un destructor para limpiar espacio en la memoria. 