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
#include <math.h>

using namespace std;

class Vector2D
{
public:
	Vector2D();
	Vector2D(float x, float y);
	Vector2D(const Vector2D& other);

	Vector2D operator+(const Vector2D& other);
	float operator*(const Vector2D& other);
	ostream& operator<<(const Vector2D& os);

public:
	float m_x;
	float m_y;
	float magnitude;

};

Vector2D::Vector2D()
{
	m_x = 0;
	m_y = 0;
	magnitude = 0;
}

Vector2D::Vector2D(float x, float y)
{
	m_x = x;
	m_y = y;
	magnitude = sqrt((m_x * m_x) + (m_y * m_y));
}

Vector2D::Vector2D(const Vector2D& other)
{
	m_x = other.m_x;
	m_y = other.m_y;
	magnitude = sqrt((m_x * m_x) + (m_y * m_y)); 
}

Vector2D Vector2D::operator+(const Vector2D& other)
{
	Vector2D result;
	result.m_x = m_x + other.m_x;
	result.m_y = m_y + other.m_y;

	result.magnitude sqrt((result.m_x * result.m_x) + (result.m_y * result.m_y));
	return result;
}

ostream& Vector2D::operator<<(const Vector2D& os)
{

}

int main()
{
	Vector2D lineOne(3, 8);
	Vector2D lineTwo(4, 6);
	Vector2D lineThree = lineOne + lineTwo;
	Vector2D lineFour = lineOne + lineTwo + lineThree;

	cout << lineOne << endl;

	cin.get();
	return 0;
}