// 3-20.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using  namespace std;


int main()
{
	vector<int>vint;
	int a;
	cout << "������һ�����������������������" << endl;
	while (cin >> a)
	{
		vint.push_back(a);
	}
	cout << "�������" << endl;
	if (!vint.size())
	{
		cout << "û����Ч����" << endl;
		system("pause");
		return -1;
	}
	cout << "�������ĺͷֱ�Ϊ��" << endl;
	for (int i = 0; i < vint.size()-1; i += 2)
	{
		cout << vint[i] + vint[i + 1] << '\t';

	}
	if (vint.size() % 2 == 1)
	{
		cout << vint[vint.size() - 1];
	}
	system("pause");
    return 0;
}

