#include<stdio.h>
long long factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		long long res = 1;
		for (int i = 1; i <= n; i++)
		{
			res *= i;
		}
		return res;
	}
}

int arcfactorial(double res)
{
	if (res == 1)
	{
		return 1;
	}

	for (int i = 1; i < 21; i++)
	{
		if (res < factorial(i + 1) && res >= factorial(i))
		{
			return i;
			break;
		}
	}
	
}
int main()
{

	/*printf("%d\n", arcfactorial(720.5));*/
	/*printf("%lld", factorial(0));*/
	double e = 0.0;
	/*printf("Please enter a 'n':");
	int n;
	scanf_s("%d", &n);*/
	printf("Enter a least number:");
	double least;
	scanf_s("%lf", &least);
	int n;
	for (int i = 1; i < 21; i++)
	{
		if (least > 1 / factorial(i))
		{
			n = i;
		}
	}
	
	for (int i = 0; i <= n; i++)
	{
		e += (1.0 / factorial(i));

	}
	printf("%.12lf\n", e);/**/
	return 0;
}