#include<iostream>
using namespace std;
#include<vector>
#include<ctime>
#include<algorithm>
class Student
{
public:
	Student(int i, int g)
	{
		id = i;
		grade = g;
	}
	int getid()
	{
		return id;
	}
	int getgrade()
	{
		return grade;
	}
private:
	int id;
	int grade;
};
class Greater
{
public:
	bool operator()(Student s1, Student s2)
	{
		return s1.getgrade() < s2.getgrade();
	}
};
int max(vector<Student>v)
{
	sort(v.begin(), v.end(), Greater());
	return v[v.size() - 1].getid();
}
int main()
{
	srand((unsigned)time(NULL));
	vector<Student>v;
	for (int i = 0; i < 5; i++)
	{
		Student s(rand() % 100 + 1, rand() % 750 + 1);
		v.push_back(s);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << "id:" << v[i].getid() << " " << "grade:" << v[i].getgrade() << endl;
	}
	cout << "max:" << max(v) << endl;
	return 0;
}