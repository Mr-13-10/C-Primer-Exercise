// 3-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cout << "������һ���ַ���(���԰����ո�)��" << endl;
	getline(cin,s);
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] != ' ')
		{
			s[i] = 'X';
		}
	}
	cout << "�ı����ַ�����" << s << endl;
	system("pause");
    return 0;
}

