// 3-14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int>vInt;
	int c;
	cout << "������һ��������" << endl;
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

