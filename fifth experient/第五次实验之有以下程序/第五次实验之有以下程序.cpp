#include<iostream>
using namespace std;
class Time             // 定义Time类
{
public:
	void sethour(int h)
	{
		hour = h;
	}
	void setminute(int m)
	{
		minute = m;
	}
	void setsec(int s)
	{
		sec = s;
	}
	int gethour()
	{
		return hour;
	}
	int getminute()
	{
		return minute;
	}
	int getsec()
	{
		return sec;
	}
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;          //定义t1为Time类对象
	int h, m, s;
	cin >> h;      //输入设定的时间 
	t1.sethour(h);
	cin >> m;
	t1.setminute(m);
	cin >> s;
	t1.setsec(s);
	cout << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsec() << endl;
	return 0;
}