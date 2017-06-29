// 3-6-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int main()
{
	string s;
	cout << "请输入一个字符串，可以包含空格：" << endl;
	getline(cin, s);
	for (auto &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	system("pause");
    return 0;
}

