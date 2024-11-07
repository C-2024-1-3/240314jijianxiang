#include<iostream>
using namespace std;
double transfrom(double f)
{
	double s = 0;
	s = (f - 32) / (1.8);
	return s;
}
int main()
{
	cout << "请输入一个华氏温度" << endl;
	double f = 0;
	cin >> f;
	double cnt=transfrom(f);
	cout << "摄氏温度为：" << cnt << endl;
	return 0;
}