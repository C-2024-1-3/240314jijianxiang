#include<iostream>
using namespace std;
class longSqure
{
public:
	longSqure(int l, int h, int w)
	{
		length = l;
		heigh = h;
		weight = w;
	}
	int getquild()
	{
		return length * heigh * weight;
	}
private:
	int length;
	int heigh;
	int weight;
};
int main()
{
	int arr[3] = { 0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		int l, h, w;
		cin >> l >> h >> w;
		longSqure ls(l, h, w);
		arr[i] = ls.getquild();
	}
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}