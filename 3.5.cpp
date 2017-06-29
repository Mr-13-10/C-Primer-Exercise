// 3.5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	char cont = 'y';
	string s, result;
	cout << " 请输入第一字符串：" << endl;
	while (cin >> s) 
	{
		result += s;
		cout << "是否继续（y or n）？" << endl;
		cin >> cont;
		if (cont == 'y' || cont == 'Y')
		{
			cout << "请输入下一个字符串：" << endl;

		}
		else 
		{
			break;
		}
	}
	cout << "拼接后的字符串：" << result << endl;
	system("pause");
    return 0;
}

