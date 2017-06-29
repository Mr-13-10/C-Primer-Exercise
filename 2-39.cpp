// 2-39.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
struct Sales_data
{
	std::string bookNo;			//书籍编号
	unsigned units_sold = 0;	//销售量
	double sellingprice = 0.0;	//零售价
	double saleprice = 0.0;		//实际售价
	double diacount = 0.0;		//折扣
	double jingjia = 0.0;		//进价
};


int main()
{
    return 0;
}

