#include<iostream>
using namespace std;
#include<vector>
bool is_prime(int val)
{
	if (val % 2 == 0)
	{
		return false;
	}
	int cnt = 0;
	for (int i = 3; i < val; i++)
	{
		if (val % i == 0)
		{
			cnt++;
		}
	}
	if (cnt > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	vector<int>v;
	int cnt = 0;
	int i = 3;
	while (cnt <= 200)
	{
		if (is_prime(i))
		{
			v.push_back(i);
			cnt++;
		}
		i++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}