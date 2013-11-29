#include <iostream>
using namespace std;

int main()
{
	long long miles, gallons;
	double miles_per_gallon;
	
	cout << "Enter how many miles you have driven: ";
	cin >> miles;
	cout << "Enter how many gallons of gasoline you have used: ";
	cin >> gallons;

	miles_per_gallon = (double) miles / gallons;

	cout << "Your car has gotten " << miles_per_gallon << " miles per gallon" << endl;

	return 0;
}