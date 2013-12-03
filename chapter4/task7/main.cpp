/* Chapter 4 task 7
 *
 *	William Wingate runs a pizza-analysis service. For each pizza, he needs to record
 *	the following information:
 *	 - The name of the pizza company, which can consist of more than one word
 *	 - The diameter of the pizza
 *	 - The weight of the pizza
 *	Devise a structure that can hold this information and write a program that uses a
 *	structure variable of that type.The program should ask the user to enter each of the
 *	preceding items of information, and then the program should display that informa-
 *	tion. Use cin (or its methods) and cout.
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

	Pizza pizza;
	
	cout << "What is the name of the pizza company? ";
	getline(cin, pizza.companyName);
	cout << "What is the diameter of the pizza? ";
	cin >> pizza.diameter;
	cout << "What is the weight of the pizza? ";
	cin >> pizza.weight;

	pizza.display();



	return 0;
}