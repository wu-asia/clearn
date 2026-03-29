//#include<stdio.h>
//#include<math.h>
//int place(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		count++;
//		n /= 10;
//	}
//	return count;
//}
//
//double expont(int a, int n)
//{
//	if (n > 0)
//	{
//		int i = 0;
//		long ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= a;
//		}
//		return ret;
//	}
//	else if (n < 0)
//	{
//		int i = 0;
//		long ret = 1;
//		for (i = 1; i <= -n; i++)
//		{
//			ret *= a;
//		}
//		return 1.0/ret;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int equal(int n)
//{
//	int i = 0;
//	int num = n;
//	int sum = 0;
//	while (n != 0)
//	{
//		sum += pow((n % 10), place(num));
//		n /= 10;
//	}
//	if (sum == num)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		if (equal(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}