//dateTypeClass.cpp This is the unit test
//


#include <iostream>
#include <string>
//#include "dayType.h"
#include "dateType.h"
using namespace std;

int main()
{
	dateType date;
	cout << "Default constructor: ";
	date.print();
	cout << "Constructor: ";
	date.setDate(2, 20, 2003);
	date.print();
	date.futureDate(15); 
	cout << "After 15 days, date will be: ";
	date.print();
	cout << "Resetting month to 2: ";
	date.setDate(2, 7, 2000);
	date.print();
	cout << "Resetting day to 29: ";
	date.setDate(2, 29, 2000);
	date.print();
	cout << "Resetting year to 2001: ";
	date.setDate(3, 1, 2001);
	date.print();
	cout << "Resetting date to a non-valid day: 50-50-2001" << endl;
	date.setDate(50, 50, 2001);
	date.print();
	//date.futureDate(365);
	int passed = date.daysPassed();
	cout << "Passed: " << passed << endl;
	//cout << "Passed: " << date.daysPassed() << endl;

	int remaining = date.daysRemaining();
	cout << "Remaining: " << remaining << endl;





}