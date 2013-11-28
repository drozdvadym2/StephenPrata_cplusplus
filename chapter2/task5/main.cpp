#include <iostream>
using namespace std;


int celsius2fahrenheit(int aValue)
{
	return (aValue * 9 / 5 + 32); 
}
int main()
{
	long temperature;
	
	cout << "Please enter a Celsius value: ";
	cin >> temperature;
	cout << temperature << " degrees Celsius is ";
	cout << celsius2fahrenheit(temperature) << " degrees Fahrenheit" << endl;

	return 0;
}
