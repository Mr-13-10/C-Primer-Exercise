// 3-20-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>vint;
	int a;
	cout << "请输入一组整数：输入非整数结束" << endl;
	while (cin >> a)
	{
		vint.push_back(a);

	}
	cout << "输入完成" << endl;
	if (vint.size() % 2 == 0)
	{
		for (int i = 0; i < vint.size() / 2; i++)
		{
			cout << vint[i] + vint[vint.size() - 1 - i]<<'\t';
		}
	}
	else {
		for (int i = 0; i < vint.size() / 2; i++)
		{
			cout << vint[i] + vint[vint.size() - 1 - i] << '\t';
		}
		cout << vint[vint.size()/2]<<'\t';
	}
	system("pause");
    return 0;
}

 