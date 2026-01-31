#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int day, month, year;
public:
	Date(int n = 1, int n1 = 1, int n2 = 2024) {
		day = n;
		month = n1;
		year = n2;
	}
	~Date(){}

	void setDay(int n) { day = n; }
	void setMonth(int n) { month = n; }
	void setYear(int n) { year = n; }

	int getDay() { return day; }
	int getMonth() { return month; }
	int getYear() { return year; }

	void printDetails() {

		cout << endl << day << "/" << month << "/" << year << endl;

	}
};

