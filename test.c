#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//选择排序
void sort(int* p, int n)
{
	int i = 0;
	int j = 0;
	int min = 0;
	int temp=0;//存放要交换的数组下标

	for (i = 0; i < n-1 ; i++)
	{
		min = *(p + i);
		for (j = i; j < n; j++)
		{
			if (min > *(p + j))
			{
				min = *(p + j);
				temp = j;
			}
		}	
		if(*(p+i)!=min)
		{
			*(p + temp) = *(p + i);
			*(p + i) = min;
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,9,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;

	sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}