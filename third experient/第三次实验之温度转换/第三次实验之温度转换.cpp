#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	int cei, fah;
	cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;
	cin >> cei;
	cout << "  " << ceitofah(cei) << " | ";
	cin >> fah;
	cout << "  " << fahtocei(fah) << endl;
	return 0;
}
