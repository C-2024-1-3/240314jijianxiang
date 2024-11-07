#include<iostream>
using namespace std;
double y = 0;
double zhi(double cnt)
{
	if (cnt > 0)
	{
		return cnt;
	}
	else
	{
		return -cnt;
	}
}
double ci(int a, int n)
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		cnt *= a;
	}
	return cnt;
}
void diedai(double a,double x)
{
	y = (x + a / x) / 2;
	if (zhi(y - x) < 1 / ci(10, 5))
	{
		cout << y << endl;
	}
	else
	{
		x = y;
		diedai(a, x);
	}
}
int main()
{
	int a;
	cin >> a;
	diedai(a, a);
	return 0;
}