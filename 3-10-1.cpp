// 3-10-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main()
{
	string s;
	cout << "请输入一个字符串，最好包含一些标点符号：" << endl;
	getline(cin, s);
	for (auto c : s)
	{
		if ((c <= 'z'&&c >= 'a') || (c <= 'Z'&&c >= 'A'))//忘记考虑数字情况
		{
			cout << c;
		}
	}
	string t;
	cout << "请继续输入一个字符串，最好包含一些标点符号：" << endl;
	getline(cin, s);
	for (auto d : s)
	{
		if (!ispunct(d))
		{
			cout << d;
		}
	}

	system("pause");
    return 0;
}

