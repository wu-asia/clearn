//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void hanoi(int n, char F, char A, char T)//定义一个变量表示圆盘个数，定义from柱，assist柱和to柱
//{
//	if (n == 1)
//	{
//		printf("move disk 1 from %c to %c\n", F, T);
//	}
//	else
//	{
//		hanoi(n - 1, F, T, A);
//		printf("move disk %d from %c to %c\n",n ,F, T);
//		hanoi(n - 1, A, F, T);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入汉诺塔的个数:");
//	scanf("%d", &n);
//
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}