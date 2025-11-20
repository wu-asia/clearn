#include<stdio.h>
#include<math.h>

void swap(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

int isprime(int num)
{
	int i = 2;
	int count = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			count++;
		}

	}
	return count;
}

int add(int a, int b)
{
	return (a + b);//
}
int main()
{
	/*int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	printf(" ");*/
	/*printf("%d\n", 2);
		for (int i = 3; i < 1000; i+=2)
		{
			if (!(isprime(i)))
			{
				printf("%d\n", i);
			}
		}*/

	/*for (int j = 0; j < 5; j++)
	{
		int x = j;
		long long n = pow(2, x);
		long long ret = pow(2, n) + 1;
		printf("ret%d:%lld\n", j, ret);
		long long i = 2LL;
		for (i = 2; i < ret - 1; i++)
		{
			if (ret % i == 0)
			{
				printf("res%d's factor:%lld ", j, i);
			}
			else
			{
				printf("res%d is prime\n", j);
			}
		}
	}*/

	//能被四整除，并且不能被一百整除
	//或者能被四百整除
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
		{
			printf("闰年：%d\n", year);
		}
	}
	return 0;
}

//费马数：2^n^n


