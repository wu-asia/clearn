//#include<stdio.h>
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>

//int  main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//	return 0;
//}
//
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//}

//求出0 ~ 100000之间的所有”“水仙花数”并输出
//水仙花数是指一个n位数，其个位数的n次方之和正好等于该数本身，如：153 = 1^3 + 5^3 + 3^3

int place(int n)
{
	int count = 0;
	while (n / 10 != 0);
	{
		count++;
	}
	return count;
}

int main()
{
	int i = 10;
	printf("%d\n", place(i));
	return 0;
}