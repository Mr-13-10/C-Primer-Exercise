// 3-22.cpp : 定义控制台应用程序的入口点。
//


#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<string>text;
	string s;
	//利用getline读取一句话，直接回车产生一个空串，表示段落结束
	while (getline(cin, s))
	{
		text.push_back(s);
	}
	//利用迭代器遍历全部字符串，遇见空串停止循环
	for (auto it = text.begin(); it != text.end() ; it++)
	{
		//利用迭代器遍历当前字符串
		for (auto it2 = it->begin(); it2 != it->end(); it2++)
		{
			*it2 = toupper(*it2);
		}
		cout << *it << endl;
	}
	system("pause");
    return 0;
}

