// 3-20-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>vint;
	int a;
	cout << "������һ���������������������" << endl;
	while (cin >> a)
	{
		vint.push_back(a);

	}
	cout << "�������" << endl;
	if (vint.size() % 2 == 0)
	{
		for (int i = 0; i < vint.size() / 2; i++)
		{
			cout << vint[i] + vint[vint.size() - 1 - i]<<'\t';
		}
	}
	else {
		for (int i = 0; i < vint.size() / 2; i++)
		{
			cout << vint[i] + vint[vint.size() - 1 - i] << '\t';
		}
		cout << vint[vint.size()/2]<<'\t';
	}
	system("pause");
    return 0;
}

 