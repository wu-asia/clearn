#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[],int ele,int len)//arr退化成了指针变量
{
	int left = 0;
	int right = len - 1;
	/*int index = 0;*/
	while (left <= right)
	{
		int mid = (right - left) / 2 + left;
		if (ele > arr[mid])
		{
			left = mid + 1;

		}
		else if (ele < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}

void add(int* p)
{
	return (*p)++;
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	//printf("hehe");
	printf("%d", binary_search(arr, k, len));
	int  a = 0;
	add(&a);
	printf("%d\n", a);
	add(&a);
	printf("%d\n", a);
	add(&a);
	printf("%d\n", a);
	return 0;
}
//
//永远都不要再函数最后面计算参数的变量
//bool类型的变量，数组都是，注意，如果不是素数，那就是真假，为真，一波暗示着分，；布尔类型，她也没有什么意思啊