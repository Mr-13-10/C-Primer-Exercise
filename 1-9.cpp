// 1-9.cpp : 定义控制台应用程序的入口点。
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

