#include<iostream>
using namespace std;
#include<vector>
void bubble(vector<double>& v)
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = 0; j < v.size() - 1 - i; j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}
int main()
{
	vector<double>v;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	bubble(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	return  0;
}