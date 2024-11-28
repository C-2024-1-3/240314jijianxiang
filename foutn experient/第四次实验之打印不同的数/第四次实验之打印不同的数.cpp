#include<iostream>
using namespace std;
#include<vector>
bool isnotExist(vector<int>v, int val)
{
	if (v.empty())
	{
		return true;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == val)
		{
			return false;
			break;
		}
	}
}
int main()
{
	vector<int>v;
	int i = 0;
	while (i < 10)
	{
		int n;
		cin >> n;
		if (isnotExist(v,n))
		{
			v.push_back(n);
		}
		i++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return  0;
}