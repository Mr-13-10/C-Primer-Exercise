// 3-15.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<string>
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<string>vstr;
	string s;
	char y = 'Y';
	cout << "������һ���ַ�����" << endl;
	while (cin >> s)
	{
		vstr.push_back(s);
		cout << "�Ƿ�����������y or n��" << endl;
		cin >> y;
		if (y == 'y' || y == 'Y')
		{
			continue;
		}
		else {
			break;
		}
	}
	for (auto mem : vstr)
	{
		cout << mem << "  ";
	}
	system("pause");
    return 0;
}

