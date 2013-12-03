#include <iostream>
using namespace std;

const int S_MINUTE = 60;
const int S_HOUR = S_MINUTE * 60;
const int S_DAY = S_HOUR * 24;


int main()
{
	long long all_seconds, remain_seconds;
	long days, hours, minutes;

	
	cout << "Enter the number of seconds:" << endl;
	cin >> all_seconds;

	days = all_seconds / S_DAY;
	remain_seconds = all_seconds % S_DAY;

	hours = remain_seconds / S_HOUR;
	remain_seconds = remain_seconds % S_HOUR;

	minutes = remain_seconds / S_MINUTE;
	remain_seconds = remain_seconds % S_MINUTE;



	cout << all_seconds << " seconds = ";

	cout << days << " days, ";
	cout << hours << " hours, ";
	cout << minutes << " minutes, ";
	cout << remain_seconds << " seconds" << endl;

	return 0;
}
