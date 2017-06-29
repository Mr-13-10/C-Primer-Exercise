// 3-23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;


int main()
{
	vector<int>s;
	int num;
	while (cin>>num)
	{
		s.push_back(num);
	}
	
	for (auto it = s.begin(); it != s.end(); it++)
	{
		*it = 2 * (*it);
		cout << *it << endl;
	}
	system("pause");
    return 0;
}

