#include<iostream>
using namespace std;
int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void yue(int a, int b)
{
	int cnt=0;
	int count = 0;
	for (int i = max(a, b); i <= a * b; i++)
	{
		if ((i % a) == 0 && (i % b) == 0)
		{
			cout << "最小公倍数为" << i << endl;
			break;
		}
	}
	for (int i = min(a, b); i > 0; i--)
	{
		if ((a % i) == 0 && (b % i) == 0)
		{
			cout << "最大公约数为" << i << endl;
			break;
		}
	}
}
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	yue(a, b);
	return 0;
}