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

class Token
{
public:
	char type;
	double value;
	string names;
};

class Token_stream
{
public:
	Token get();
	void putback(Token t);
private:
	bool full{ false };
	Token buf;
};

void Token_stream::putback(Token t)
{

}

Token Token_stream::get()
{

}

Token_stream ts;
double expression();

double primary() {

}

double term() {

}

double expression() {

}

int main()
{

}