#include<iostream>
using namespace std;
int indexof(const char s1[], const char s2[])
{
	int ssize = -1;
	for (int i = 0; i < 100; i++)
	{
		if (-1 < (int)s1[i] && (int)s1[i] < 127)
		{
			ssize++;
		}
	}
	int fsize = -1;
	for (int i = 0; i < 100; i++)
	{
		if (-1 < (int)s2[i] && (int)s2[i] < 127)
		{
			fsize++;
		}
	}
	if (ssize > fsize)
	{
		return -1;
	}
	int ans = 0;
	for (int i = 0; i < fsize; i++)
	{
		int count = 0;
		if (s1[0] == s2[i])
		{
			count++;
			for (int j = 1,k=i+1; j < ssize; j++,k++)
			{
				if (s1[j] == s2[k])
				{
					count++;
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
		if (count == ssize)
		{
			ans = i;
			break;
		}
	}
	return ans;
}
int main()
{
	char arrs[100];
	char arrf[100];
	cout << "Enter the first string:";
	cin.getline(arrs, 100);
	cout << "Enter the second string:";
	cin.getline(arrf, 100);
	int ans = indexof(arrs, arrf);
	cout << "indexof(" << arrs << "," << arrf << ")is";
	cout << ans << endl;
	return 0;
}