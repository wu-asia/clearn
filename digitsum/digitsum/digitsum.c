#include<stdio.h>
int DigitSum(unsigned int n)
{
	if (n <= 9)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + DigitSum(n % 10);
	}
}//错误版本，对于函数DigitSum过度的调用，过于冗长

int other(unsigned int n)
{
	if (n > 9)
	{
		return other(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}

//编写一个函数实现n的k次方，使用递归实现

double Power(int n, int k)
{
	if (k > 0)
	{
		return Power(n, k - 1) * n;
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Power(n, -k);
	}
}
int main()
{
	//printf("%d\n", DigitSum(1729));
	double ret = Power(2, -1);
	printf("%llf\n", ret);
	return 0;
}