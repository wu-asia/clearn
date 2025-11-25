//#include<stdio.h>
//
//int gcd(int n, int m)
//{
//
//	while (m != 0)
//	{
//		int c = n % m;
//		n = m;
//		m = c;
//	}
//	return n;
//}
//
//int Gcd(int n, int m)
//{
//	if (m == 0)
//	{
//		return n;
//	}
//	else if (m != 0)
//	{
//		return Gcd(m, n % m);
//	}
//	
//}
//int main()
//{
//	//printf("hehe");
//	printf("%d\n", gcd(12, 15));
//	printf("%d\n", Gcd(12, 15));
//	return 0;
//}


//青蛙一次跳一级或二级台阶，求跳上N级台阶共多少方法

#include<stdio.h>

void frog(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 1;
	}
}