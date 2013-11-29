#include <iostream>
using namespace std;

const int ft2in_scale = 12;

struct Height {
	void set(int anInches) {
		feet = anInches / ft2in_scale;
		inches = anInches - feet * ft2in_scale; 
	}
	void display() {
		cout << "Your height is " << feet << " feet and ";
		cout << inches << " inches" << endl;
	}
	int feet;
	int inches;
};

int main()
{
	int height_inches;
	Height res_height;

	cout << "Please, enter your height in inches:_";
	cin >> height_inches;

	res_height.set(height_inches);
	res_height.display();

	return 0;
}
