#include<iostream>
using namespace std;
void panduan(int a, int b, int c)
{
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "该三角形周长为" << a + b + c << endl;
		if (a == b||b==c||a==c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "该三角形不存在" << endl;
	}
}
int main()
{
	cout << "请输入三角形三边长度" << endl;
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	panduan(a, b, c);
	return 0;
}