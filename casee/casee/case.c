//#include<stdio.h>
////写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

#include<stdio.h>

long long  hanoi(int n, char F, char A, char T)
{
	static long long count = 0;
	if (n == 1)
	{
		count++;
		printf("Move disk 1 from %c to %c\n", F, T);
	}
	else
	{
		hanoi(n - 1, F, T, A);
		count++;
		printf("Move disk %d from %c to %c\n", n, F, T);

		hanoi(n - 1, A, F, T);
	}
	return count;
}
int main()
{
	printf("count:%d", hanoi(10, 'A', 'B', 'C'));
	return 0;
}