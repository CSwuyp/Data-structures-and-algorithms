// 直接插入排序.cpp: 定义控制台应用程序的入口点。
//

//第一种方法用的是设置一个临时变量作为辅助空间，数组的存储从下标0开始
/*#include "stdafx.h"
#include<iostream>
using namespace std;

void InsertSort(int a[],int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			int temp = a[i];
			a[i] = a[i - 1];
			a[i - 1] = temp;
			for (int j = i - 1; j > 0 && a[j] < a[j - 1]; j--)
			{
				int  temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}
int main()
{
	int num[] = { 3,4,5,3,21,3,5,6 };//因为设置了临时变量，所以数组的存储可以用0开始
	int n = sizeof(num) / sizeof(int);
	InsertSort(num, n);//当把数组名作为参数传递时数组名会退化为数组地址
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
    return 0;
}
*/

//第二种方法是把L[0]作为辅助空间，数组的存储从下标1开始
#include"stdafx.h"
#include<iostream>

using namespace std;

void InsertSort(int a[], int n)
{
	for (int i = 2; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			a[0] = a[i];
			a[i] = a[i - 1];//元素后移一位
			int j=i-2;
			for (;j>0&& a[0] < a[j]; j--)//前面已经跟i-1比较了，这里就从i-2开始向前比较
			{
				a[j + 1] = a[j];
			}
			a[j + 1] = a[0];
		}
	}
}
int main()
{
	int num[] = {0,4,5,3,44,7,9,6,8 };
	int n = sizeof(num) / sizeof(int);
	InsertSort(num, n);
	for (int i = 1; i < n; i++)
	{
		cout << num[i] << " ";
	}
}