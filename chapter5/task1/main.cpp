/*
 *  Chapter 5 task 1
 *	Write a program that requests the user to enter two integers.The program should
 *	then calculate and report the sum of all the integers between and including the two
 *	integers.At this point, assume that the smaller integer is entered first. For example, if
 *	the user enters 2 and 9, the program should report that the sum of all the integers
 *	from 2 through 9 is 44
 */
 
#include <iostream>
using namespace std;

int main()
{

	int first, second;
	

	cout << "Enter first integer: ";
	cin >> first;
	cout << "Enter second integer: ";
	cin >> second;

	if (second > first) {
		cout << "The sum of all the integers from " << first;
		cout << " through " << second << " is: ";
		cout << (first + second) * (second - first + 1) / 2 << endl;
	}

	return 0;
}
