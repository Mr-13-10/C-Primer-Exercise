// 1-16.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include"d:\std_lib_facilities.h"
const int NUM = 100;

int main()
{
	int sum=0, shuzu[NUM];
	std::cout << "������һ��������(����q����)" << std::endl;
	int i = 0;
	while (std::cin >> shuzu[i])
	{
		sum += shuzu[i];
		i++;
	}
	std::cout << "��һ�����ĺ�Ϊ��" << sum << std::endl;
	system("pause");
    return 0;
}

