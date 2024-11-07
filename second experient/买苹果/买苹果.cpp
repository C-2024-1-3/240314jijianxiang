#include<iostream>
using namespace std;
int main()
{
	double a = 2, b = 0, c = 0;
	while (c < 100)
	{
		b++;
		a = a * 2;
		c += a;
	}
	cout << (c - a + 2) * 0.8 / b << endl;
	cout << b;
}
