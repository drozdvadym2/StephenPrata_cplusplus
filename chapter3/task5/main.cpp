#include <iostream>
using namespace std;

int main()
{
	long long world_population, country_population;
	double percent_population;
	
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> country_population;

	percent_population = (double) country_population / world_population * 100;

	cout << "The population of the US is ";
	cout << percent_population << "% of the world population" << endl;

	return 0;
}