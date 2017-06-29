// 3-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "请输入一个字符串(可以包含空格)：" << endl;
	getline(cin,s);
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] != ' ')
		{
			s[i] = 'X';
		}
	}
	cout << "改变后的字符串：" << s << endl;
	system("pause");
    return 0;
}

