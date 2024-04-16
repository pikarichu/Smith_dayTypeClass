#include "dateType.h"
//#include "dayType.h"
#include <iostream>


//string dateType::dateMonth[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int daysInYear = 365;

bool dateType::isLeapYear()
{
	if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
		return true;
	else
		return false;

}

//main()
//{
//	cin >> year;
//	bool val = false;
//	val = isLeapYear();
//	cout << val;
//}

void dateType::setDate(int month, int day, int year)
{
	dateType::month = month;
	dateType::day = day;
	dateType::year = year;
	if (isLeapYear() == true)
	{
		daysInYear = 366;
		daysInMonth[1] = 29;
	}
	else
	{
		daysInYear = 365;
		daysInMonth[1] = 28;
	}
	//cout << isLeapYear() << endl;
	//cout << daysInMonth[month - 1] << endl;
	
}

//int year;
 
//string dateType::getDate() { return date; }

void dateType::print() const
{
	cout << month << "-" << day << "-" << year << endl;
}



int dateType::daysPassed()
{
	int totalDays = 0;
	for (int m = 0; m < month -1; m++)
		totalDays += daysInMonth[m];
	totalDays += day;
	return totalDays;
}
int dateType::daysRemaining()
{
	int totalDays = 0;
	totalDays += day;
	for (int m = month; m < 12; m++)
		totalDays += daysInMonth[m];
	return totalDays;
}
void dateType::futureDate(int nDays)
{
	while (nDays > 0) 
	{

		day++;
		nDays--;
		if (day > daysInMonth[month -1])
		{
			day = 1;
			month ++;
		}
		if (month > 12)
		{
			month = 1;
			year++;
		}
		setDate(month, day, year);
	}
	print();
		
}
