#include<iostream>
using namespace std;
int smallerone(int a, int b)
{
	return a < b ? a : b;
}
int greaterone(int a, int b)
{
	return a > b ? a : b;
}
int yinshu(int a, int b)
{
	int cnt = 0;
	for (int i = smallerone(a, b); i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cnt = i;
			break;
		}
	}
	return cnt;
}
int beishu(int a, int b)
{
	int cnt = 0;
	for (int i = greaterone(a, b); i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			cnt = i;
			break;
		}
	}
	return cnt;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << "最大公因数为：" << yinshu(n, m) << endl;
	cout << "最小公倍数为：" << beishu(n, m) << endl;
	return 0;
}