#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			return true;
		}
		else if (year % 400 == 0)
		{
			return true;
		}
		else return false;
	}
	else return false;
}

int SecondsINHours(int h)
{
	return h * 60 * 60;
}

int main()
{

}