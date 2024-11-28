#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int p1 = 0; 
	int p2 = 0;
	int i = 0;
	while (p1 < size1 && p2 < size2)
	{
		if (list1[p1] <= list2[p2])
		{
			list3[i] = list1[p1];
			p1++;
		}
		else
		{
			list3[i] = list2[p2];
			p2++;
		}
		i++;
	}
	if (p1 == size1)
	{
		int cnt = p1 + p2;
		for (int j = p2; j < size2; j++,cnt++)
		{
			list3[cnt] = list2[j];
		}
	}
	if (p2 == size2)
	{
		int cnt = p1 + p2;
		for (int j = p1; j < size1; j++,cnt++)
		{
			list3[cnt] = list1[j];
		}
	}
}
int main()
{
	int n, m;
	int list1[80];
	int list2[80];
	cout << "Enter list1:";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> list1[i];
	cout << "Enter list2:";
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> list2[i];
	int list3[160];
	merge(list1, n, list2, m, list3);
	cout << "The merge list is ";
	for (int i = 0; i < n + m; i++)
	{
		cout << list3[i] << " ";
	}
	cout << endl;
	return 0;
}