//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int a[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i] + 1);
//	}
//	return 0;
//}

#include<stdio.h>

int Add(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
}