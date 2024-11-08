#include<iostream>
using namespace std;
#include<string>
#include<vector>
double ci(int k, int n)
{
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		cnt *= k;
	}
	return cnt;
}
int caculate(string question)
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<char> symbol;
	int result = 0;
	for (string::iterator it = question.begin(); it != question.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (string::iterator it = question.begin(); it != question.end(); it++)
	{
		v1.push_back((int)*it);
	}
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		if (47 < *it && *it < 58)
		{
			v2.push_back(*it - 48);
		}
		else
		{
			v2.push_back(*it);
		}
	}
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<int>::iterator oi = v2.begin();
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		if (*it < 10)
		{
			continue;
		}
		else
		{
			int cnt = 0;
			for (int i = 0; i < it - oi; i++)
			{
				cnt += (*(oi + i)) * ci(10, it - oi - i - 1);
			}
			oi = it + 1;
			v3.push_back(cnt);
			symbol.push_back((char)*it);
		}
	}
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (vector<char>::iterator it = symbol.begin(); it != symbol.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<int>::iterator itt = v3.begin();
	for (vector<char>::iterator it = symbol.begin(); it != symbol.end(); it++)
	{
		if (*it == '*')
		{
			v3[it - symbol.begin()] = v3[it - symbol.begin() + 1] * v3[it - symbol.begin()];
			for (int i = itt - v3.begin() + 1; i < v3.end() - 1 - v3.begin(); i++)
			{
				v3[it - symbol.begin() + 1] = v3[it - symbol.begin() + 2];
			}
			v3.pop_back();
			for (int i = it - symbol.begin(); i < symbol.end() - symbol.begin(); i++)
			{
				symbol[it - symbol.begin()] = symbol[it - symbol.begin() + 1];
			}
			symbol.pop_back();
		}
		else if (*it == '/')
		{
			v3[it - symbol.begin()] = v3[it - symbol.begin() + 1] / v3[it - symbol.begin()];
			for (int i = itt - v3.begin() + 1; i < v3.end() - 1 - v3.begin(); i++)
			{
				v3[it - symbol.begin() + 1] = v3[it - symbol.begin() + 2];
			}
			v3.pop_back();
			for (int i = it - symbol.begin(); i < symbol.end() - symbol.begin(); i++)
			{
				symbol[it - symbol.begin()] = symbol[it - symbol.begin() + 1];
			}
			symbol.pop_back();
		}
		else if (*it == '%')
		{
			v3[it - symbol.begin()] = v3[it - symbol.begin() + 1] % v3[it - symbol.begin()];
			for (int i = itt - v3.begin() + 1; i < v3.end() - 1 - v3.begin(); i++)
			{
				v3[it - symbol.begin() + 1] = v3[it - symbol.begin() + 2];
			}
			v3.pop_back();
			for (int i = it - symbol.begin(); i < symbol.end() - symbol.begin(); i++)
			{
				symbol[it - symbol.begin()] = symbol[it - symbol.begin() + 1];
			}
			symbol.pop_back();
		}
		itt++;
	}
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (vector<char>::iterator it = symbol.begin(); it != symbol.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<int>::iterator ittt = v3.begin();
	for (vector<char>::iterator it = symbol.begin(); it != symbol.end(); it++)
	{
		if (*it == '+')
		{
			v3[it - symbol.begin()] = v3[it - symbol.begin() + 1] + v3[it - symbol.begin()];
			for (int i = itt - v3.begin() + 1; i < v3.end() - 1 - v3.begin(); i++)
			{
				v3[it - symbol.begin() + 1] = v3[it - symbol.begin() + 2];
			}
			v3.pop_back();
			for (int i = it - symbol.begin(); i < symbol.end() - symbol.begin(); i++)
			{
				symbol[it - symbol.begin()] = symbol[it - symbol.begin() + 1];
			}
			symbol.pop_back();
		}
		else if (*it == '-')
		{
			v3[it - symbol.begin()] = v3[it - symbol.begin() + 1] - v3[it - symbol.begin()];
			for (int i = itt - v3.begin() + 1; i < v3.end() - 1 - v3.begin(); i++)
			{
				v3[it - symbol.begin() + 1] = v3[it - symbol.begin() + 2];
			}
			v3.pop_back();
			for (int i = it - symbol.begin(); i < symbol.end() - symbol.begin(); i++)
			{
				symbol[it - symbol.begin()] = symbol[it - symbol.begin() + 1];
			}
			symbol.pop_back();
		}
		ittt++;
	}
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (vector<char>::iterator it = symbol.begin(); it != symbol.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<int>::iterator hhh = v3.begin();
	result = *hhh;
	return result;
}
int main()
{
	string question;
	cin >> question;
	int answer = caculate(question);
	cout << question << answer << endl;
	return 0;
}