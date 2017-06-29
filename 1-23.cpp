// 1-23.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"d:\Sales_item.h"
#define NUM 100


int main()
{
	Sales_item book[NUM] ;
	int i = 0,n=1;
	std::cout << "请输入各种书的销售记录：" << std::endl;
	while (std::cin >> book[i])
	{
		i++;
	}
	std::cout << "汇总信息：ISBN、售出本数、销售额、平均售价和 销售记录条数为:\n";
	for (int j = 0; j < i; j++)
	{
		if (book[j].isbn != "#")
		{
			for (int k = j + 1; k < i; k++)
			{
				if (book[j].isbn == book[k].isbn)
				{
					book[j] += book[k];
					book[k].isbn = "#";
					n++;
				}
			}
			std::cout << book[j] << "   " << n << std::endl;
		}
		n = 1;
	}
	system("pause");

	return 0;
}
