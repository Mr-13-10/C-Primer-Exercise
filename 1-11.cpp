// 1-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>


int main()
{
	std::cout << "����������������\n";
	int v1, v2,v3;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		v3 = v1;
		v1 = v2;
		v2 = v3;
	}

	while (v1 <= v2)
	{
		std::cout << v1 << "  ";
		v1++;
	}
	char ch;
	std::cin >> ch;
    return 0;
}

