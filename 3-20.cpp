// 3-20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using  namespace std;


int main()
{
	vector<int>vint;
	int a;
	cout << "请输入一组整数，输入非整数结束：" << endl;
	while (cin >> a)
	{
		vint.push_back(a);
	}
	cout << "输入完成" << endl;
	if (!vint.size())
	{
		cout << "没有有效输入" << endl;
		system("pause");
		return -1;
	}
	cout << "相邻数的和分别为：" << endl;
	for (int i = 0; i < vint.size()-1; i += 2)
	{
		cout << vint[i] + vint[i + 1] << '\t';

	}
	if (vint.size() % 2 == 1)
	{
		cout << vint[vint.size() - 1];
	}
	system("pause");
    return 0;
}

