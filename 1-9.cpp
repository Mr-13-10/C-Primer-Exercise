// 1-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>


int main()
{
	int t = 50, sum = 0;
	while (t <= 100)
	{
		sum += t;
		std::cout << t << "   " << sum << std::endl;
			t++;
	}
	char ch;
	std::cin >> ch;
    return 0;
}

