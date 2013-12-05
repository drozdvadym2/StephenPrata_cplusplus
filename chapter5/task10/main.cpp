/* Chapter 4 task 10
 * 
 * Write a program that requests the user to enter three times for the 40-yd dash (or
 * 40-meter, if you prefer) and then displays the times and the average. Use an array
 * object to hold the data. (Use a built-in array if array is not available.)
 */

#include <iostream>
using namespace std;
#include <cstring>

int main()
{

	unsigned short howMany;

	char *outputStr;

	char period = '.';
	char asterix = '*';

	cout << "Enter a number of rows to display: ";
	cin >> howMany;

	//Forming first output string
	outputStr = new char[howMany + 1];
	memset(outputStr, period, howMany * sizeof(char); //but sizeof char always will be 1 
	outputStr[howMany] = '\0';

	for (int i = howMany - 1; i >= 0; i--) {
			outputStr[i] = asterix;
			cout << outputStr << endl;
	}

	delete outputStr;
	
	return 0;
}