#include <iostream>
using namespace std;


const double KM_IN_MILE  = 1.6093;
const double LITERS_IN_GALLON  = 3.785;

int main()
{
	double consumption_l, consumption_g, miles;
	
	cout << "Enter an automobile gasoline consumption per 100 km: ";
	cin >> consumption_l;

	consumption_g = consumption_l / LITERS_IN_GALLON;
	miles = (100 / KM_IN_MILE) / consumption_g;

	cout << "An automobile gasoline consumption of your car is: ";
	cout << miles << " miles per gallon" << endl;

	return 0;
}