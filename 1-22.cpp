// 1-22.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"d:\Sales_item.h"
#define NUM 100


int main()
{
	Sales_item book[NUM],total;
	int i = 1;
	std::cout << "�����뼸����ͬ��������ۼ�¼��" << std::endl;
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
			std::cout << "ISBN��ͬ";
			return -1;
		}
		i++;
	}
	std::cout << "������Ϣ��ISBN���۳����������۶��ƽ���ۼ�Ϊ:\n" << total<< std::endl;
	system("pause");

	return 0;
}
