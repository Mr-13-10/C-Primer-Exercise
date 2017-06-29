// 1-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int main()
{
	for (int i = 10; i >= 0; i--)
	{
		std::cout << i << "  ";
	}
	char ch;
	std::cin >> ch;
    return 0;
}

