// 3-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string line;
	cout << "�����������ַ��������԰����ո�" << endl;
	while (getline(cin, line))
	{
		cout << line << endl;
	}
	string word;
	cout << "���������ĵ��ǣ������԰����ո�" << endl;
	while (cin >> word)
	{
		cout << word << endl;
	}
	system("pause");
    return 0;
}

