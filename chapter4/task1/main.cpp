/*
 *  Chapter 4 task 1
 */
 
#include <iostream>
using namespace std;
#include <string>

const int NAME_LEN = 64;
int main()
{
	char firstName[NAME_LEN], lastName[NAME_LEN];
	char grade;
	int age;
	

	cout << "What is your first name? ";
	cin.get(firstName, NAME_LEN).get();
	cout << "What is your last name? ";
	cin.get(lastName, NAME_LEN).get();
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

	return 0;
}
