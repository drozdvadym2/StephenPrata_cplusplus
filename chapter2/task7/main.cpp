#include <iostream>
using namespace std;

void printTime(size_t aHours, size_t  aMinutes)
{
	cout << aHours << ":";
	cout << (aMinutes < 10 ? "0" : "");
	cout << aMinutes << endl;
}

int main()
{
	size_t hours, minutes;
	
	do {
		cout << "Enter the number of hours: ";
		cin >> hours;
	} while (hours < 0 || 24 < hours);

	do {
		cout << "Enter the number of minutes: ";
		cin >> minutes;
	} while (minutes < 0 || 60 < minutes || (24 == hours && minutes != 0 ));

	printTime(hours, minutes);

	return 0;
}
