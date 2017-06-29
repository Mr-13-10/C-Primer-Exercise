// 3-14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>vInt;
	int c;
	cout << "情输入一组整数：" << endl;
	while (cin >> c)
	{
		vInt.push_back(c);
	}
	for (int i = 0; i < vInt.size(); i++)
	{
		cout <<i<<'\t'<< vInt[i]<<endl;
	}
	for (auto mem : vInt)
	{
		cout << mem << "  ";
	}
	system("pause");
    return 0;
}

