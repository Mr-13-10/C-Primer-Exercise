// 3-17.cpp : 定义控制台应用程序的入口点。
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
	cout << "请输入一个单词" << endl;
	while (cin >> s)
	{
		vstr.push_back(s);
		cout << "是否继续（y or n）" << endl;
		cin >> c;
		if (c!= 'y'&&c != 'Y')
		{
			break;
		}
		cout << "继续输入：";
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

