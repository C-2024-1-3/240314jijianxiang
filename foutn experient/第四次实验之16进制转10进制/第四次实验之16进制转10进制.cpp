#include<iostream>
using namespace std;
int cifang(int k, int n)
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		cnt *= k;
	}
	return cnt;
}
int parseHex(const char* const hexString)
{
	int size = -1;
	for (int i = 0; i < 100; i++)
	{
		if ((int)hexString[i] > -1 && (int)hexString[i] < 127)
		{
			size++;
		}
	}
	int cnt = 0;
	for (int i = 0; i < size; i++)
	{
		if ((int)hexString[i] > 64)
		{
			cnt += ((int)hexString[i] - 55) * cifang(16, size - i - 1);
		}
		else
		{
			cnt += ((int)hexString[i] - 48) * cifang(16, size - i - 1);
		}
	}
	return cnt;
}
int main()
{
	char a[100];
	cin >> a;
	cout << parseHex(a) << endl;
	return 0;
}