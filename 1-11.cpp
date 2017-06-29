// 1-11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int main()
{
	std::cout << "请输入两个整数：\n";
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

