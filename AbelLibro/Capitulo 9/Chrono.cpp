# include "Chrono.h"

namespace Chrono {

	Date::Date(int yy, Month mm, int dd)
		: y{ yy }, m{ mm }, d{ dd }
	{
		if (!is_date(yy, mm, dd)) throw Invalid{};
	}

	const Date& default_date()
	{
		static Date dd{ 2001, Month::Jan,1 };
		return dd;
	}

	Date::Date()
		:y{ default_date().Year() },
		m{ default_date().month() },
		d{ default_date().Day() }
	{
	}

	void Date::add_day(int n)
	{

	}

	void Date::add_month(int n)
	{

	}

	void Date::add_year(int n)
	{
		if (m == Month::Feb && d == 29 && !leapyear(y + n))
		{
			m = Month::Mar;
			d = 1;
		}
		y += n;
	}

	bool is_date(int y, Month m, int d)
	{
		if (d <= 0) return false;
		if (m < Month::Jan || Month::Dec < m) return false;

		int days_in_month = 31;

		switch (m)
		{
		case Month::Feb:
			days_in_month = (leapyear(y)) ? 29 : 28;
			break;
		case Month::Apr: case Month::Jun: case Month::Sep: case Month::Nov:
			days_in_month = 30;
			break;
		}

		if (days_in_month < d) return false;

		return true;
	}

	bool leapyear(int y)
	{

	}

	bool operator == (const Date& a, const Date& b)
	{
		return a.Year() == b.Year()
			&& a.month() == b.month()
			&& a.Day() == b.Day();
	}

	bool operator!= (const Date& a, const Date& b)
	{
		return !(a == b);
	}

	ostream& operator << (ostream& os, const Date& d)
	{
		return os << '(' << d.Year()
			<< ',' << int(d.month())
			<< ',' << d.Day() << ')';
	}

	istream& operator >> (istream& is, Date& dd)
	{

	}
}