#pragma once
class Student
{
public:
	void display();
	void set_value(int n, string na, char s);
private:
	int num;
	string name;
	char sex;
};