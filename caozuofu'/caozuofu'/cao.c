#include<stdio.h>
#include<stdlib.h>

int main()
{
	////按位与操作符
	//int a = 3;
	//int b = -5;
	//int c = a & b;
	//printf("c = %d\n", c);
	////按位或操作符
	//int d = 3;
	//int e = -5;
	//int f = d | e;
	//printf("f = %d\n", f);
	////按位异或操作符
	//int g = 3;
	//int h = -5;
	//int i = g ^ h;
	//printf("i = %d\n", i); 

	//int a = 3;
	//int b = 5;
	//printf("交换前：a=%d b=%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//printf("交换后：a=%d b=%d\n", a, b);
	////会有溢出的问题

	/*int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);*/

	//计算数字补码中的一的个数

	int a = 1;
	int b = 7;
	printf("%d\n", b & a);
	int count = 0;
	while (a != 0)
	{
		count = count + (b & a);
		b = b >> 1;
	}

	printf("%d\n", count);
	return 0;
} 


