/*
 *  Chapter 4 task 1
 */
 
#include <iostream>
using namespace std;
#include <string>

const int NAME_LEN = 64;
int main()
{
	string resultStr, firstName, lastName;
	
	cout << "What is your first name? ";
	getline(cin, firstName);
	cout << "What is your last name? ";
	getline(cin, lastName);


	resultStr = "Here`s the information in the single string: ";
	resultStr += lastName + ", " + firstName;

	cout << resultStr << endl;

	return 0;
}
