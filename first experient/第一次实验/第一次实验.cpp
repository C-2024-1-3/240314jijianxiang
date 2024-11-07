#include<iostream>
using namespace std;
int main()
{
	//Int i = k + 1;没有Int类型，只有int类型，未定义k
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}