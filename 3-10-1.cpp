// 3-10-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cctype>
using namespace std;


int main()
{
	string s;
	cout << "������һ���ַ�������ð���һЩ�����ţ�" << endl;
	getline(cin, s);
	for (auto c : s)
	{
		if ((c <= 'z'&&c >= 'a') || (c <= 'Z'&&c >= 'A'))//���ǿ����������
		{
			cout << c;
		}
	}
	string t;
	cout << "���������һ���ַ�������ð���һЩ�����ţ�" << endl;
	getline(cin, s);
	for (auto d : s)
	{
		if (!ispunct(d))
		{
			cout << d;
		}
	}

	system("pause");
    return 0;
}

