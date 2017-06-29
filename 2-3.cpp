// 2-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u<< std::endl;
	std::cout << u - u2 <<std::endl;
	int i = 10,i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
	system("pause");  
    return 0;
}

