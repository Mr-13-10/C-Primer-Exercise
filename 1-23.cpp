// 1-23.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"d:\Sales_item.h"
#define NUM 100


int main()
{
	Sales_item book[NUM] ;
	int i = 0,n=1;
	std::cout << "���������������ۼ�¼��" << std::endl;
	while (std::cin >> book[i])
	{
		i++;
	}
	std::cout << "������Ϣ��ISBN���۳����������۶ƽ���ۼۺ� ���ۼ�¼����Ϊ:\n";
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
