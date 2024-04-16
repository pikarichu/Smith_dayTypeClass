#pragma once
#include <string>

using namespace std;


class dateType
{
public:
	//Precondition: Year
	//Postcondition: Sets isLeapYear true or false
	bool isLeapYear();

	//Precondition: integer of month, day, and year
	//Postcondition: sets dateType month, day and year
	//sets daysInYear and daysInMonth based on the result of isLeapYear
	void setDate(int month, int day, int year);

	//string getDate() { return date; }
	
	//Precondition: valid dateType
	//Postcondition: prints the date
	void print() const;

	//Precondition: valid dateType
	//Postcondition: prints the number of days that have passed in the year
	int daysPassed();

	//Precondition: valid dateType
	//Postcondition: prints the number of days that are remaining in the year
	int daysRemaining();

	//Precondition: valid dateType and an integer number of days
	//Postcondition: sets the date to a date x days in the future
	void futureDate(int nDays);
	
	//Constructor
	dateType(int = 1, int = 1, int = 1900);
private:
	int day, month, year;
};

