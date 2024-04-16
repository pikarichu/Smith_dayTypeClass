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
	date.setDate(3, 15, 1912);
	//date.futureDate(15);
	//date.futureDate(365);
	int passed = date.daysPassed();
	cout << "Passed: " << passed << endl;
	//cout << "Passed: " << date.daysPassed() << endl;

	int remaining = date.daysRemaining();
	cout << "Remaining: " << remaining << endl;





}