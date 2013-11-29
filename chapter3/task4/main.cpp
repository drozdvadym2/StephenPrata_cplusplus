#include <iostream>
using namespace std;

const int 	in2ft_scale = 12;
const float m2in_scale = 0.0254;
const float pn2kg_scale = 2.2;

int main()
{
	int height_in;
	int height_ft;
	int weight_pn;

	float height_m;
	float weight_kg;
	
	cout << "Please, enter your height in feet and inches:" << endl;
	cout << "feet: ";
	cin >> height_ft;
	cout << "inches: ";
	cin >> height_in;

	cout << "Please, enter your weight in pounds: ";
	cin >> weight_pn;


	//Calculate BMI
	height_m = (height_ft * in2ft_scale + height_in) * m2in_scale;
	weight_kg = weight_pn / pn2kg_scale;

	double BMI = height_m / (weight_kg * weight_kg);

	cout << "Your BMI is " << BMI << endl;

	return 0;
}
