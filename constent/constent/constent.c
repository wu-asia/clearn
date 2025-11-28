#include<stdio.h>

int main()
{
	//栈区：局部变量，形式参数，返回值（函数体中的一些变量）
	//堆区：动态内存变量
	//静态区：静态变量，全局变量
	//数组是一个相同元素的集合，
	// 数组：输入和创建的
	//
	int arr[10];
	char ch[5];
	double date[15 + 5];
	int i = 0;
	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	//郝鹏友 郝健 
	/*for (i = 0; i < len; i++)
	{
		printf("%d\n", arr1[i]);
	}*/
	for (i = 0; i < len; i++)
	{
		printf("arr[%d]：%p\n", i, &arr[i]);
	}
	return 0;
}