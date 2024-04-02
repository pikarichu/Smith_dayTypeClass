#include <iostream>
#include "dayType.h"

string dayType::dayOfWeek[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

void dayType::setDay(string aDay)
{
	int index = 0;
	for (int i = 0; i < 7; i++)
	{
		//cout << dayOfWeek[i]; //Taken from original document
		if (dayOfWeek[i] == aDay)
		{
			index = i;
			break;
		}
	}
	day = dayOfWeek[index];
}

void dayType::print() const
{
	cout << day << endl;
}

string dayType::previousDay()
{
	//day = dayOfWeek[0]; //Taken from original document
	
	for (int i = 0; i < 7; i++)
	{


		if (dayOfWeek[i] == day)
		{
			int newIndex;
			newIndex = (i - 1) % 7;

			if (newIndex < 0)
				newIndex = 6;
			//day = dayOfWeek[newIndex];
			return dayOfWeek[newIndex];
			break;
		}
		
	}

}

string dayType::nextDay()
{
	//day = dayOfWeek[0]; //Taken from original document
	
	for (int i = 0; i < 7; i++)
	{

		if (dayOfWeek[i] == day)
		{
			int newIndex = 0;
			newIndex = (i + 1) % 7;

			if (newIndex > 6)
				newIndex = 0;

			//day = dayOfWeek[newIndex]; //Taken from original document
			return dayOfWeek[newIndex];
			break;
		}
		
	}

}

void dayType::addDays(int nDays)
{
	int index = 0;
	
	for (int i = 0; i < 7; i++)
	{
		if (dayOfWeek[i] == day)
		{
			int newIndex = 0;
			index = i;
			newIndex = (index + nDays) % 7;
			cout << "After adding " << nDays << " days: " << dayOfWeek[newIndex] << endl;
			break;
		}
		
	}
	
}


dayType::dayType(string start)
{
	setDay(start);
	//previousDay();
	//nextDay();
}

