// 选择排序.cpp: 定义控制台应用程序的入口点。
//
/*简单选择排序的基本思想是：每一趟从待排序的记录中选出关键字最小的记录，按顺序存放在已排序
的记录序列的最后，直到全部排完为止。
简单选择排序也称为直接选择排序
【算法分析】
（1）时间复杂度
最好情况 O(n) 最坏情况：O(n^2) 平均情况:O(n^2)
（2）空间复杂度
同冒泡排序一样，只有在两个记录交换时需要一个辅助空间，所以空间复杂度为O(1)。
【算法特点】
（1）由于算法以“交换记录”来实现“字前最小记录到位”，就有可能改变关键字相同记录的前后顺序
，使得原来稳定的排序方法产生“不稳定”现象
（2）可用于链式存储结构
（3）移动记录次数较少，当每一记录占用的空间较多时，此方法比直接插入排序快*/
#include "stdafx.h"
#include<iostream>
using namespace std;

void SelectSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			int temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}
}
int main()
{
	int num[] = { 1,2,4,5,7,5,4,32,2,8,86,65 };
	int n = sizeof(num) / sizeof(int);
	SelectSort(num, n);
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}

