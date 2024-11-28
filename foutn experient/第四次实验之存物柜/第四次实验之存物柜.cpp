#include<iostream>
using namespace std;
#include<vector>
void dfs(vector<bool>& v, int cur)
{
	if (cur < v.size())
	{
		for (int i = cur-1; i < v.size(); i += cur)
		{
			v[i] = !v[i];
		}
		dfs(v, cur + 1);
	}
	else
	{
		return;
	}
}
int main()
{
	vector<bool>v(100,false);
	dfs(v, 1);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
		if ((i + 1) % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}