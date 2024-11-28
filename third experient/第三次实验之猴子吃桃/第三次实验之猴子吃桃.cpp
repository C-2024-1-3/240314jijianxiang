#include<iostream>
using namespace std;
void dfs(int day, int num)
{
	if (day > 1)
	{
		day--;
		num = (num + 1) * 2;
		dfs(day, num);
		return;
	}
	else
	{
		cout<<num;
		return;
	}
}
int main()
{
	cout << "第一天有";
	dfs(10, 1);
	cout << "个桃子" << endl;
	return 0;
}