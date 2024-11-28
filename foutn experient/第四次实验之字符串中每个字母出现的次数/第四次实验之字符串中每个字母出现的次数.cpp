#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int size = -1;
	for (int i = 0; i < 100; i++)
	{
		if (-1 < (int)s[i] && (int)s[i] < 127)
		{
			size++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((int)s[i]>64 && (int)s[i] < 91)
		{
			counts[(int)s[i] - 65]++;
		}
		else if((int)s[i]>96&&(int)s[i]<123)
		{
			counts[(int)s[i] - 97]++;
		}
	}
}
int main()
{
	int counts[26] = { 0 };
	char s[100];
	cin.getline(s, 100);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] > 0)
		{
			cout << (char)(i + 97) << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}