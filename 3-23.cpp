// 3-23.cpp : �������̨Ӧ�ó������ڵ㡣
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

