// 1-20.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"D:\Sales_item.h"


int main()
{
	Sales_item book;
	std::cout << "���������ۼ�¼:" << std::endl;
	while (std::cin >> book)
	{
		std::cout << "ISBN���۳����������۶��ƽ���ۼ�Ϊ" << book << std::endl;
	}
	system("pause");

    return 0;
}

