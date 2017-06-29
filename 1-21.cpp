// 1-21.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"d:\Sales_item.h"


int main()
{
	Sales_item book1, book2;
	std::cout << "请输入两本相同的书的销售记录：" << std::endl;
	std::cin >> book1 >> book2;
	if (book1.isbn == book2.isbn)
		std::cout << "汇总信息：ISBN、售出本数、销售额和平均售价为:\n" << book1 + book2 << std::endl;
	else
		std::cout << "ISBN不匹配";
	system("pause");
    return 0;
}

