// 2-18.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>


int main()
{
	int  *p, i= 5,j=10;
	p = &i;
	std::cout << p<<"   "<< *p  << std::endl;
	p = &j;
	std::cout << p << "   " << *p << std::endl;
	*p = 20;
	std::cout << p << "   " << *p << std::endl;
	j = 30;
	std::cout << p << "   " << *p << std::endl;
	system("pause");
    return 0;
}

