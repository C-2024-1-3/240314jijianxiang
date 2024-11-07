#include<iostream>
using namespace std;
#include<string>
int main()
{
	string a;
	cin >> a;
	int letternum = 0;
	int spacenum = 0;
	int valuenum = 0;
	int othernum = 0;
	for (string::iterator it = a.begin(); it != a.end(); it++)
	{
		if (*it >= '0' && *it <= '9')
		{
			valuenum++;
		}
		else if (*it >= 'a' && *it <= 'z')
		{
			letternum++;
		}
		else if (*it == ' ')
		{
			spacenum++;
		}
		else
		{
			othernum++;
		}
	}
	cout << letternum << endl;
	cout << spacenum << endl;
	cout << valuenum << endl;
	cout << othernum << endl;
	return 0;
}