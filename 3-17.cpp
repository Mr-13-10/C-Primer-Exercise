// 3-17.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
	vector<string>vstr;
	string s;
	char c='y';
	cout << "������һ������" << endl;
	while (cin >> s)
	{
		vstr.push_back(s);
		cout << "�Ƿ������y or n��" << endl;
		cin >> c;
		if (c!= 'y'&&c != 'Y')
		{
			break;
		}
		cout << "�������룺";
	}
	for (auto &mem:vstr)
	{
		for (int i = 0; i < mem.size(); i++)
		{
			if (mem[i] <= 'z'&&mem[i] >= 'a')
			{
				mem[i] += 'A' - 'a';
			}
		}
		cout << mem << "  ";
	}
	system("pause");
    return 0;
}

