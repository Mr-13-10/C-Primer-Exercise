// 3-6-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<math.h>
using namespace std;


int main()
{
	string s;
	cout << "������һ���ַ��������԰����ո�" << endl;
	getline(cin, s);
	for (auto &c : s)
	{
		c = 'X';
	}
	cout << s << endl;
	system("pause");
    return 0;
}

