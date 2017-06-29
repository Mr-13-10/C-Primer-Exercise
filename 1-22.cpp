// 1-22.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"d:\Sales_item.h"
#define NUM 100


int main()
{
	Sales_item book[NUM],total;
	int i = 1;
	std::cout << "请输入几本相同的书的销售记录：" << std::endl;
	std::cin >> book[0];
	total = book[0];
	while (std::cin >> book[i])
	{
		if (book[i].isbn == book[0].isbn)
		{
			total += book[i];
		}
		else
		{
			std::cout << "ISBN不同";
			return -1;
		}
		i++;
	}
	std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为:\n" << total<< std::endl;
	system("pause");

	return 0;
}
