#include <iostream>
using namespace std;

int main()
{
	int degrees, minutes, seconds;
	double exact_degrees;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;


	exact_degrees = degrees + (minutes + double(seconds) / 60) / 60;

 	cout << degrees << " degrees " << minutes << " minutes ";
 	cout << seconds << "seconds = " << exact_degrees  << " degrees" << endl;

	return 0;
}

