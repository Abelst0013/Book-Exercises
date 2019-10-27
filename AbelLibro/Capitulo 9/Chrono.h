#pragma once
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

namespace Chrono {

	enum class Month {
		Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
	};

	class Date
	{
	public:
		class Invalid {};
		Date(int y, Month m, int d);
		Date();

		int Day() const { return d; }
		Month month() const { return m; }
		int Year() const { return y; }

		void add_day(int n);
		void add_month(int n);
		void add_year(int n);
	private:
		int y;
		Month m;
		int d;
	};

	bool is_date(int y, Month m, int d);
	bool leapyear(int y);

	bool operator == (const Date& a, const Date& b);
	bool operator!= (const Date& a, const Date& b);

	ostream& operator << (ostream& os, const Date& d);
	istream& operator >> (istream& is, Date& dd);

	Day day_of_week(const Date& d);
	Date next_Sunday(const Date d);
	Date Next_weekday(const Date& d);
}

