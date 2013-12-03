/* Chapter 4 task 9
 *
 * Do Programming Exercise 6, but instead of declaring an array of three CandyBar
 * structures, use new to allocate the array dynamically.
 */

#include <iostream>
using namespace std;
#include <string>


struct CandyBar {
	string brandName;
	float weight;
	int calories;

	void set(const char * aName, float aWeight, int aCalories) {
		brandName = aName;
		weight = aWeight;
		calories = aCalories;
	}

	void display() {
		cout << "Brand name: " << brandName << endl;
		cout << "Weight: " << weight << endl;
		cout << "Calories: " << calories << endl;	
	}
};

int main()
{

	CandyBar *candys = new CandyBar[4];

	candys[0].set("Bar", 2.3, 350);
	candys[1].set("Nuts", 3.3, 250);
	candys[2].set("Mars", 2.1, 1000);
	candys[3].set("Fooo", 5.2, 20);


	//use for :)
	cout << "1 candy:" << endl;
	candys[0].display();
	cout << "2 candy:" << endl;
	candys[1].display();
	cout << "3  candy:" << endl;
	candys[2].display();
	cout << "4 candy:" << endl;
	candys[3].display();


	delete [] candys;

	return 0;
}