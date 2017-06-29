// 1-16.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include"d:\std_lib_facilities.h"
const int NUM = 100;

int main()
{
	int sum=0, shuzu[NUM];
	std::cout << "请输入一组整数：(输入q结束)" << std::endl;
	int i = 0;
	while (std::cin >> shuzu[i])
	{
		sum += shuzu[i];
		i++;
	}
	std::cout << "这一组数的和为：" << sum << std::endl;
	system("pause");
    return 0;
}

