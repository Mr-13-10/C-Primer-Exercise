// 3-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	const string s = "Keep out !";
	for (auto &c:s)
		{
			cout << "test" << endl;
		}
	system("pause");
    return 0;
}

