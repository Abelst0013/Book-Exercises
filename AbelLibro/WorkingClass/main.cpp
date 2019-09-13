#include <iostream>

using namespace std;

int sumOneToN(int num);
int sumThreeAndFive(int num);
void numberPyramid(int num);


int main()
{
	cout << "Escoge una de 3 opciones:\n"
		<< "\t1. Suma numeros de 1 a n.\n"
		<< "\t2. Syma multiplos de 3 y 5 de 1 a n.\n"
		<< "\t3. Escalera de numeros a n.\n";

	int option = 0;
	int number = 0;
	cin >> option;

	if (option == 1)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		cout << "El resultado es: " << sumOneToN(number);
	}
	else if (option == 2)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		cout << "El resultado es: " << sumThreeAndFive(number);
	}
	else if (option == 3)
	{
		cout << "Escribe un numero: ";
		cin >> number;
		numberPyramid(number);
	}
	else {
		cout << "Option incorrecta. Me fui ";
	}

	cin.ignore();
	cin.clear();
	cin.get();
	return 0;
}

int sumOneToN(int num) {

	int result = 0;
	for (int i = 1; i <= num; ++i)
	{
		cout << i << ", ";
		result += i;
	}

	return result;
}

int sumThreeAndFive(int num) {

	int result = 0;
	for (int i = 1; i <= num; ++i)
	{
		if (0 == i % 3 || 0 == i % 5)
		{
			cout << i << ", ";
			result += i;
		}
	}

	return result;
}

void numberPyramid(int num)
{
	for (int i = 1; i < i <= num; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << j;
		}
		cout << endl;
	}
}