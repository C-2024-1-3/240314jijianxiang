#include<iostream>
#include<ctype.h>
using namespace std;
void transfrom(char LETTER)
{
	char Letter;
	if (isalpha(LETTER))
	{
		Letter = toupper(LETTER);
		cout << Letter << endl;
	}
	else
	{
		int count;
		count = (int)LETTER;
		cout << count+1 << endl;
	}
}
int main()
{
	char LETTER;
	cout << "请输入一个字母，如果是小写则输出大写，如果是大写就输出下一个ASCII值" << endl;
	cin >> LETTER;
	transfrom(LETTER);
	return 0;
}