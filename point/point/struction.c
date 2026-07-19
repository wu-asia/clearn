//////#include<stdio.h>
//////#include<stdlib.h>
//////
//////struct peo
//////{
//////	char name[20];
//////	char tele[12];
//////	char sex[5];
//////	int high;
//////};
//////
//////struct st
//////{
//////	struct peo p;
//////	int num;
//////	float f;
//////};
//////int main()
//////{
//////	struct peo p1 = { "张三","12345141413","男",181 };
//////	struct st p2 = { {"里斯","148190-48315","女",166},10,3.14 };
//////	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//////	printf("%s %s %s %d %d %f\n", p2.p.name, p2.p.tele, p2.p.sex, p2.p.high, p2.num, p2.f);
//////
//////	return 0;
//////}
////
////#include<stdio.h>
////int count_num_1(int n)
////{
////	int count = 0;
////	while (n != 0)
////	{
////		count += (n % 2);
////		n /= 2;
////	}
////	return count;
////}
////int count_num_1_two(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		count += (n & 1);
////		n >>= 1;
////	}
////	return count;
////}
////int count_num_1_three(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		n = n & (n - 1);
////		count++;
////	}
////	return count;
////}
//////int count_num_1_three(int n)
//////{
//////	static int count = 0;
//////	if (n == 0)
//////	{
//////		return count + 1;
//////	}
//////	else
//////	{
//////		return  (count_num_1_three(n / 2));
//////	}
//////}
////int main()
////{
////	int a = -1;
////	printf("%d\n", count_num_1(a));
////	//printf("%d\n", count_num_1_two(a));
////	printf("%d\n", count_num_1_three(a));
////	return 0;
////}
//
//#include<stdio.h>
////int count_num_1(int n)
////{
////	int count = 0;
////	while (n)
////	{
////		n = n & (n - 1);
////		count++;
////	}
////}
//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	int ret = m ^ n;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 4;
//	int b = 7;
//	int c = a ^ b;
//	printf("%d\n", count_diff_bit(1999,2299));
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//#include<stdio.h>
//
//int main()
//{
//	//获取奇数位的数字
//	int i = 0;
//	int num = 10;
//	//00000000000000000000000000001010
//	//00000000000000000000000000004321
//	printf("奇数位:");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	printf("偶数位:");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}