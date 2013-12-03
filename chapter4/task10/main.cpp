/* Chapter 4 task 10
 * 
 * Write a program that requests the user to enter three times for the 40-yd dash (or
 * 40-meter, if you prefer) and then displays the times and the average. Use an array
 * object to hold the data. (Use a built-in array if array is not available.)
 */

#include <iostream>
using namespace std;
#include <string>

int main()
{

	float times[3];

	cout << "Enter time for the first 40-yd dash: ";
	cin >> times[0];
	
	cout << "Enter time for the second 40-yd dash: ";
	cin >> times[1];

	cout << "Enter time for the third 40-yd dash: ";
	cin >> times[2];

	cout << "Time of dashes:\n";
	cout << "1 dash: " << times[0] << endl;
	cout << "2 dash: " << times[1] << endl;
	cout << "3 dash: " << times[2] << endl;

	cout << "Average time is: " << (times[0] + times[1] + times[2]) / 3 << endl;

	return 0;
}