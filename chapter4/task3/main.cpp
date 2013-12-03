/*
 *  Chapter 4 task 1
 */
 
#include <iostream>
using namespace std;
#include <cstring>

const int NAME_LEN = 64;
int main()
{
	char resultStr[3 * NAME_LEN], firstName[NAME_LEN], lastName[NAME_LEN];
	
	cout << "What is your first name? ";
	cin.get(firstName, NAME_LEN).get();
	cout << "What is your last name? ";
	cin.get(lastName, NAME_LEN).get();

	strcpy(resultStr, "Here`s the information in the single string: ");
	strcat(resultStr, lastName);
	strcat(resultStr, ", ");
	strcat(resultStr, firstName);

	cout << resultStr << endl;

	return 0;
}
