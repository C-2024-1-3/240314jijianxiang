#include<iostream>
using namespace std;
class Point
{
public:
	void setpoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << x << " " << y << endl;
	}
private:
	int x = 60;
	int y = 80;
};
int main()
{
	Point p;
	p.setpoint(4, 5);
	p.display();
	return 0;
}