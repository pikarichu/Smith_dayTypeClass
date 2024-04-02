//dayTypeClass.cpp: This is the unit test

#include <iostream>
#include <string>
#include "dayType.h"
using namespace std;

int main()
{
	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;

	dayType::dayOfWeek[0] = "Sun";
	dayType::dayOfWeek[1] = "Mon";
	dayType::dayOfWeek[2] = "Tue";
	dayType::dayOfWeek[3] = "Wed";
	dayType::dayOfWeek[4] = "Thu";
	dayType::dayOfWeek[5] = "Fri";
	dayType::dayOfWeek[6] = "Sat";

	for (int i = 0; i < 7; i++)
		cout << dayType::dayOfWeek[i] << " ";
	cout << endl;


	dayType day;
	cout << "From default constructor: ";
	day.print();
	cout << "Next day: " << day.nextDay() << endl;
	cout << "Previous Day: " << day.previousDay() << endl;
	//day.addDays(10);

	dayType monday(dayType::dayOfWeek[1]);
	cout << "From constructor with parameters: ";
	monday.print();
	monday.addDays(3);
	monday.addDays(30);
	monday.addDays(365);
	//cout << monday.nextDay() << endl;
	//cout << monday.previousDay() << endl;
} 