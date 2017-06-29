// 1-20.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"D:\Sales_item.h"


int main()
{
	Sales_item book;
	std::cout << "请输入销售记录:" << std::endl;
	while (std::cin >> book)
	{
		std::cout << "ISBN、售出本数、销售额和平均售价为" << book << std::endl;
	}
	system("pause");

    return 0;
}

