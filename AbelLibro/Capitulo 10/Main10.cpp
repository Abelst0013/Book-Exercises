#include <iostream>
#include <fstream>
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

void read(vector<int>& v, const string& s)
{
	ifstream ifst{ s };
	if (!ifst) cout << "It already exists." << s;
	int n;
	while (ifst >> n)
		v.push_back(n);
}

int sum(const vector<int>& a)
{
	int sum = 0;
	for (int i = 0; i < a.size(); ++i)
		sum += a[i];
	return sum;
}

int main()
{
	cout << "Enter name of the file: ";
	string n;
	cin >> n;
	vector<int> v;
	read(v, n);
	int sum1 = sum(v);
	cout << "Sum: " << n << " is " << sum1 << ".\n";
}