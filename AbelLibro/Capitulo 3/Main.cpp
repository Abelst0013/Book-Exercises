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

int main() // Try this 1
{
	cout << "Please enter your First name and Age\n";
	string first_name = "???";
	int age = 0;
	cin >> first_name >> age;
	cout << "Hello, " << first_name << "(Age in months: " << age * 12 << ")\n";
}

//int main() // Try this 2
//{
//	cout << "Please enter a floating-point value: ";
//	int n;
//	cin >> n;
//	cout << "n ==" << n
//		<< "\nn+1 ==" << n + 1
//		<< "\nthree times n ==" << 3 * n
//		<< "\ntwice n ==" << n + n
//		<< "\nn squared ==" << n * n
//		<< "\nhalf of n ==" << n / 2
//		<< "\nsquare root of n ==" << sqrt(n)
//		<< '\n';
//}

//int main() // Try this 4
//{
//	string previous = "";
//	string current;
//	while (cin >> current) {
//		if (previous == current)
//			cout << "Repeated word: " << current << '\n';
//		previous = current;
//	}
//	//How many repeated words were there? 4 Words. 
//	//Why? Because the program compares letter by letter, it is also different upper and lower case.
//	//What is the definition of "Word" used here? A set of chars without space between them. 
//	//What is the definition of "Repeated word"? Two set of chars that are literally the same. 
//}

//int main() // Try this 5 
//{
//	string s = "Goodbye, cruel world!";
//	cout << s << '\n';
//
//	//Did the compiler find all the errors? 8 errors.
//	//What did it suggest as the problems? 
//	// 1 identifier "STRING" is undefined 
//	// 2 identifier "cOut" is undefined
//	// 3 identifier "S" is undefined
//	// 4 'STRING' : Undeclared identifier
//	// 5 syntax error: missing ";" before identifier 's'
//	// 6 's' : undeclared identifier 
//	// 7 'cOut' : Undeclared identifier 
//	// 8 'S' : Undeclared identifier 
//	//Did the compiler get confused and diagnose more than four errors? Yes.
//}

//int main()  // Try this 6 
//{
//	double d = 0;
//	while (cin >> d) {
//		int i = d; 
//		char c = i;
//		int i2 = c;
//		cout << "\nd ==" << d
//			<< "\ni ==" << i
//			<< "\ni2 ==" << i2
//			<< "\nchar(" << c << ")\n"; 
//	}
//}

// Exercises 2 

//int main() // Miles to Km
//{
//	cout << "Please enter the number of miles that you want to convert to kilometers:\n";
//	int miles = 0;
//	cin >> miles;
//	cout <<"(Kilometers: " << miles * 1.609 << ")\n";
//}


// Exercises 3 

//int main() // Does't do anything 
//{
//	int double = 0;
//	int char = 1;
//	double int = 2;
//	double char = 3;
//	// Invalid combination of type specifiers //
//	// Expected an identifier //
//}

// Exercises 4 

//int main()
//{
//	cout <<"Please enter two values:\n";
//	int val1;
//	int val2; 
//	cin >> val1 >> val2;
//		 
//	cout << "\nSum == " << val1 + val2
//		//<< "\nSmaller ==" << 
//		//<< "\nLarger ==" << 
//		<< "\nDifference == " << val1 - val2
//		//<< "\nProduct ==" << 
//		<< "\nRatio of these values ==" << val1 % val2;
//}

// Exercises 5 

//int main()
//{
//	cout <<"Please enter two floating-point values:\n";
//	double val1;
//	double val2;
//	cin >> val1 >> val2;
//
//	cout << "\nSum == " << val1 + val2
//		//<< "\nSmaller ==" << 
//		//<< "\nLarger ==" << 
//		<< "\nDifference == " << val1 - val2;
//		//<< "\nProduct ==" << 
//		//<< "\nRatio of these values ==" << val1 % val2
//
//}

// Exercises 6

//int main() // Sort Numbers
//{
//	cout << "Please enter three values:\n";
//	int val1;
//	int val2; 
//	int val3;
//	cin >> val1 >> val2 >> val3;
//	int arr[] = { val1, val2, val3 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//
//	sort(arr, arr + n);
//
//	cout << "\nThe order of the values ​​is : \n";
//	for (int i = 0; i < n; ++i)
//		cout << arr[i] << " ";
//
//	return 0;
//}

// Exercises 7 

//int main() // Sort Chars ->>DON'T WORK!!
//{
//	string a, b, c; 
//	cout << "Enter three words:\n";
//	cin >> a, b, c;
//
//	if (c > b && b > a) {
//		cout << "the order is: " << a, b, c;
//	}
//	else if (a > b && b > c) {
//		cout << "the order is: " << c, b, a;
//	}
//	else if (a > b && c > a) {
//		cout << "the order is: " << b, a, c;
//	}
//	else if (a > c && c > b) {
//		cout << "the order is: " << b, c, a;
//	}
//	else if (b > c && b > a) {
//		cout << "the order is: " << c, a, b;
//	}
//	else {
//		cout << "the order is: " << a, c, b;
//	}
//}

// Exercises 8 

//int main()
//{
//
//	int num;
//
//	cout << "Enter a number: ";
//	cin >> num;
//
//	if (num % 2 == 0) {
//		cout << "The number " << num << " is even\n";
//	}
//
//	else {
//		cout << "The number " << num << " is odd\n";
//	}
//	return 0;
//}

// Exercises 9 

//int main()
//{
//	int num;
//	cout << "Enter a number between 0 and 4: ";
//	cin >> num;
//
//	if (num == 0) {
//		cout << "The number is Zero\n";
//	}
//	if (num == 1) {
//		cout << "The number is One\n";
//	}
//	if (num == 2) {
//		cout << "The number is Two\n";
//	}
//	if (num == 3) {
//		cout << "The number is Three\n";
//	}
//	if (num == 4) {
//		cout << "The number is Four\n";
//	}
//
//	else {
//		cout << "Not a number I know! Stupid Computer!";
//	}
//	return 0;
//}

// Exercises 10 

//int main()
//{
//
//}

// Exercises 11 

//int main()  // Cents to Dollar  
//{
//	cout << "How many cents do you have?\n";
//	double pennies = 0;
//
//	while (cin >> pennies) {
//		int i = pennies;
//		float p = pennies; 
//		cout << "You have: " << i / 1 << " pennies.\n"
//			<< "You have: " << i / 5 << " nickels.\n"
//			<< "You have: " << i / 10 << " dimes.\n"
//			<< "You have: " << i / 25 << " quaters.\n"
//			<< "You have: " << i / 50 << " half dollars.\n"
//			<< "You have: $ " << p / 100 << " dollars.\n";
//	}
//}