#include <iostream>
using namespace std;


int ly2au(double aValue)
{
	return (aValue *63240); 
}
int main()
{
	double lightYears;
	
	cout << "Enter the number of light years: ";
	cin >> lightYears;
	cout << lightYears << " light years = ";
	cout << ly2au(lightYears) << " astronomical units" << endl;

	return 0;
}
