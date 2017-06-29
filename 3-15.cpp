// 3-15.cpp : 定义控制台应用程序的入口点。
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
	cout << "请输入一组字符串：" << endl;
	while (cin >> s)
	{
		vstr.push_back(s);
		cout << "是否继续输出：（y or n）" << endl;
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

