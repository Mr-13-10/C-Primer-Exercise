// 3-24.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>vInt;
	int iVal;
	cout << "Please input a set of numbers:" << endl;
	while (cin >> iVal)
	{
		vInt.push_back(iVal);
	}
	if (vInt.cbegin() == vInt.cend())
	{
		cout << "No element" << endl;
		return -1;
	}
	cout << "  " << endl;
	for (auto it = vInt.cbegin(); it != vInt.cend() - 1; it++)
	{
		cout << (*it + *(it + 1)) << "  ";
		if ((it - vInt.cbegin() + 1) % 10 == 0)
			cout << endl;
	}
	if (vInt.size() % 2 != 0)
		cout << *(vInt.cend() - 1);
	system("pause");
    return 0;
}

