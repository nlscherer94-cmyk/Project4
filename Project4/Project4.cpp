#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double weight, distance, rate, charge;

	cout << "****Welcome to the Shipping Charges Calulator****\n\n";

	do {//Do/while statement to protect from input outside of requested range.
		cout << "Enter the weight of the package (must be between 1-20 kg): ";
		cin >> weight;

		if (weight <= 0 || weight > 20)
			cout << "\nInvalid weight. Must be between 1-20 kg.\n\n\n";
	} while (weight <= 0 || weight > 20);

	do {//Do/while statement to protect from input outside of requested range.
		cout << "\nEnter the shipping distance (must be between 10-3000 miles): ";
		cin >> distance;

		if (distance < 10 || distance > 3000)
			cout << "\nInvalid distance. Must be between 10-3000 miles. \n\n\n";
	} while (distance < 10 || distance > 3000);

	if (weight <= 2)//Calculating the rate of shipping based off of the items weight
		rate = 1.10;
	else if (weight <= 6)
		rate = 2.20;
	else if (weight <= 10)
		rate = 3.70;
	else
		rate = 4.80;

	int moneyPerMiles = static_cast<int>((distance + 499) / 500);//Distance changes price every 500 miles, calculates that for user.

	charge = rate * moneyPerMiles;//Gives the official shipping cost that is charged to the user

	cout << fixed << setprecision(2);
	cout << "\nShipping charge: $" << charge << endl << endl;
	return 0;
}
