// 2-42.cpp : �������̨Ӧ�ó������ڵ㡣
//

// 2-41.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"C:\Sales_data.h"
using namespace std;

int main()
{
	Sales_data book;
	cout << "���������ۼ�¼" << endl;
	while (cin >> book)
	{
		cout << "ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ" << book << endl;
	}
	Sales_data trans1, trans2;
	cout << "���������ISBN��ͬ�����ۼ�¼��" << endl;
	cin >> trans1 >> trans2;
	if (compareIsbn(trans1, trans2))
	{
		cout << "������Ϣ��ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ��" << trans1 + trans2 << endl;
	}
	else
	{
		std::cout << "�������ۼ�¼��ISBN��ͬ" << endl;
	}
	Sales_data total, trans;
	cout << "�����뼸��ISBN��ͬ�����ۼ�¼;" << endl;
	if (cin >> total)
	{
		while (cin >> trans)
		{
			if (compareIsbn(total, trans))
			{
				total += trans;
			}
			else
			{
				cout << "��ǰ�鼮ISBN��ͬ" << endl;
				break;
			}
			cout << "��Ч������Ϣ��ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ" << total << endl;
		}
	}
	else
	{
		cout << "û������" << endl;
		return -1;
	}
	int num = 1;
	cout << "�������������ۼ�¼��" << endl;
	if (cin >> trans1)
	{
		while (cin >> trans2)
		{
			if (compareIsbn(trans1, trans2))
			{
				num++;
			}
			else
			{
				cout << trans1.isbn() << "����" << num << "�����ۼ�¼" << endl;
				trans1 = trans2;
				num = 1;
			}
			cout << trans1.isbn() << "����" << num << "�����ۼ�¼" << endl;
		}
	}
	else
	{
		cout << "û������" << endl;
		return -1;
	}
	system("pause");
	return 0;
}

