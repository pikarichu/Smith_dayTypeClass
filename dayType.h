#pragma once
#include <string>

using namespace std;
class dayType
{
public:

	static string dayOfWeek[7];
	//Precondition - a valid day is supplied (see daysOfWeek)
	//Postcondition - stores day if valid, otherwise stores default
	void setDay(string);

	//Postcondition - returns value of day
	string getDay() { return day; }

	//Postcondition - displays the value of day
	void print() const;

	//Returns the value of day after
	string nextDay();

	//Returns the value of day before
	string previousDay();

	//Precondition - nDays must be a positive integer
	//Postcondition - sets day to a day in the future 
	void addDays(int nDays);

	//Constructor
	dayType(string = dayOfWeek[0]);

private:
	string day;

};

