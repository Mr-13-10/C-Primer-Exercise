// 3-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string line;
	cout << "请输入您的字符串，可以包含空格：" << endl;
	while (getline(cin, line))
	{
		cout << line << endl;
	}
	string word;
	cout << "请输入您的但是，不可以包含空格：" << endl;
	while (cin >> word)
	{
		cout << word << endl;
	}
	system("pause");
    return 0;
}

