// 1-21.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"d:\Sales_item.h"


int main()
{
	Sales_item book1, book2;
	std::cout << "������������ͬ��������ۼ�¼��" << std::endl;
	std::cin >> book1 >> book2;
	if (book1.isbn == book2.isbn)
		std::cout << "������Ϣ��ISBN���۳����������۶��ƽ���ۼ�Ϊ:\n" << book1 + book2 << std::endl;
	else
		std::cout << "ISBN��ƥ��";
	system("pause");
    return 0;
}

