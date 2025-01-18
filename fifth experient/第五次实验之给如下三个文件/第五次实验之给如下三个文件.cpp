#include<iostream>
using namespace std;
#include"student.h"
#include<string>
int main()
{
	Student stu;
	stu.set_value(7, "tcg", 'm');
	stu.display();
	return 0;
}