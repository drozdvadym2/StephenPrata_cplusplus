/* Chapter 4 task 6
 *
 *	The CandyBar structure contains three members, as described in Programming
 *	Exercise 5.Write a program that creates an array of three CandyBar structures, ini-
 *	tializes them to values of your choice, and then displays the contents of each struc-
 *	ture.
 */

#include <iostream>
using namespace std;
#include <string>


struct CandyBar {
	string brandName;
	float weight;
	int calories;
	void display() {
		cout << "Brand name: " << brandName << endl;
		cout << "Weight: " << weight << endl;
		cout << "Calories: " << calories << endl;	
	}
};

int main()
{

	CandyBar candys[4] = {
		{"Bar", 2.3, 350},	
		{"Nuts", 3.3, 250},	
		{"Mars", 2.1, 1000},	
		{"Fooo", 5.2, 20}
	};


	//use for :)
	cout << "1 candy:" << endl;
	candys[0].display();
	cout << "2 candy:" << endl;
	candys[1].display();
	cout << "3  candy:" << endl;
	candys[2].display();
	cout << "4 candy:" << endl;
	candys[3].display();



	return 0;
}