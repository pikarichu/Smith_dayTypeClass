#pragma once
#include <string>

using namespace std;


class dateType
{
public:
	bool isLeapYear();

	void setDate(int month, int day, int year);

	//string getDate() { return date; }

	void print() const;

	int daysPassed();

	int daysRemaining();

	void futureDate(int nDays);
	
private:
	int day, month, year;
	//int daysInMonth[12];

	//int daysInYear;
};

