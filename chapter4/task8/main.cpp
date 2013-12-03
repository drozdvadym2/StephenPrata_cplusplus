/* Chapter 4 task 8
 *
 * Do Programming Exercise 7 but use new to allocate a structure instead of declaring
 * a structure variable. Also have the program request the pizza diameter before it
 * requests the pizza company name.
 */

#include <iostream>
using namespace std;
#include <string>


struct Pizza {
	string companyName;
	float weight;
	float diameter;

	void display() {
		cout << "Company name: " << companyName << endl;
		cout << "Weight: " << weight << endl;
		cout << "Diameter: " << diameter << endl;	
	}
};

int main()
{

	Pizza *pizza = new Pizza;
	
	cout << "What is the diameter of the pizza? ";
	(cin >> pizza->diameter).get();
	cout << "What is the name of the pizza company? ";
	getline(cin, pizza->companyName);
	cout << "What is the weight of the pizza? ";
	cin >> pizza->weight;

	pizza->display();


	delete pizza;

	return 0;
}