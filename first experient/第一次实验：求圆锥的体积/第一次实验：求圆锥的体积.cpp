#include<iostream>
using namespace std;
int main()
{
	const double yuanzhoulv = 3.14;
	int height = 0;
	int radical = 0;
	cout << "请输入圆锥底的半径与锥高" << endl;
	cin >> radical;
	cin >> height;
	double cnt = yuanzhoulv * radical * radical * height / 3;
	cout << "圆锥的体积为：" << cnt << endl;
	return 0;
}