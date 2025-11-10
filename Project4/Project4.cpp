#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;//PI

void displayMenu() {//Original display menu using void because nothing is returned
	cout << "***Geometry Calulator***\n";
	cout << "1. Calculate the Area of a Circle\n";
	cout << "2. Calculate the Area of a Rectangle\n";
	cout << "3. Calculate the Area of a Triangle\n";
	cout << "4. Quit\n";
	cout << "Enter your choice (1-4): ";
}

double stayPositive(const string& prompt) {//Protect from negative numbers
	double value;
	cout << prompt;
	cin >> value;
	while (value < 0) {
		cout << "\nError: Value cannot be negative.\n" << prompt;
		cin >> value;
	}
	return value;
}

void calculateCircleArea() {//Circle equation
	double radius = stayPositive("\nEnter the radius of the circle : ");
	double area = PI * radius * radius;//circle area is PI * r ^2
	cout << fixed << setprecision(2);
	cout << "\nThe area of the circle is " << area << endl;
}

void calculateRectangleArea() {//Rectangle equation
	double length = stayPositive("\nEnter the length of the rectangle: ");
	double width = stayPositive("\nEnter the width of the rectangle: ");
	double area = length * width;
	cout << fixed << setprecision(2);
	cout << "\nThe area of the rectangle is " << area << endl;
}

void calculateTriangleArea() {//Triangle equation
	double base = stayPositive("\nEnter the base of the triangle: ");
	double height = stayPositive("\nEnter the height of the triangle: ");
	double area = base * height * 0.5;
	cout << fixed << setprecision(2);
	cout << "\nThe area of the triangle is " << area << endl;
}

int main() {//Switch case to decide which above equation is formulated for the user
	int choice;

	do {
		displayMenu();
		cin >> choice;

		switch (choice) {
		case 1:
			calculateCircleArea();
			break;
		case 2:
			calculateRectangleArea();
			break;
		case 3:
			calculateTriangleArea();
			break;
		case 4:
			cout << "\nThank you for using Geometry Calculator! Goodbye!\n";
			break;
		default:
			cout << "\n\nError: Please enter a number between 1 and 4\n\n";//Safety net to ensure user inputs a number netween 1 and 4
		}
		cout << endl;
	} while (choice != 4);
	return 0;
}