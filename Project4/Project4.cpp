#include <iostream>
using namespace std;

bool LeapYear(int year) //Using rules of leap years, this will establish if "year" is a leap year
{
	if (year % 100 == 0)
		return year % 400 == 0;
	else
		return year % 4 == 0;
}
int main() 
{
	int month, year;
	cout << "****Welcome to the Days in a Month Calulator****" << endl << endl;//Intro to first input
	cout << "Begin by entering the number of the month (1-12): ";
	cin >> month;
	if (month < 1 || month >12) {//Safety net should the user input outside of 1-12
		cout << "\nInvalid input. Please enter a month between 1-12" << endl << endl;
		return 0;
	}
	cout << endl << "Now enter a year: ";
	cin >> year;
	//Below will inform the user if the year they inputted is a leap year
	if (LeapYear(year)) {
		cout << endl << year << " is a leap year" << endl << endl;
	}
	else {
		cout << endl << year << " is not a leap year" << endl << endl;
	}
	int days;
	//Below is the different cases that give user the amount of days depending on month input
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	case 2:
		days = LeapYear(year) ? 29 : 28;
		break;
	}
	cout << "That month has " << days << " days in it!\n\n";//Final output to the user
	return 0;
}
