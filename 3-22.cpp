// 3-22.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<string>text;
	string s;
	//����getline��ȡһ�仰��ֱ�ӻس�����һ���մ�����ʾ�������
	while (getline(cin, s))
	{
		text.push_back(s);
	}
	//���õ���������ȫ���ַ����������մ�ֹͣѭ��
	for (auto it = text.begin(); it != text.end() ; it++)
	{
		//���õ�����������ǰ�ַ���
		for (auto it2 = it->begin(); it2 != it->end(); it2++)
		{
			*it2 = toupper(*it2);
		}
		cout << *it << endl;
	}
	system("pause");
    return 0;
}

