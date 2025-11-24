#include<stdio.h>
#include<string.h>

void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);

}
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4

//int len(char s[]) //参数部分写成数组形式
int len(char* s)//参数部分写成指针形式
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}


int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);

	}
	else
	{
		return 0;
	}
}
//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("\0");
//1+1+1+0;

long long Fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (Fibonacci(n - 1) + Fibonacci(n - 2));
	}
}

long long Factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n - 1);
	}
}

long long factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		int i = 0;
		int res = 1;
		for (i = 1; i <= n; i++)
		{
			res *= i;
		}
		return res;
	}

}
void my_print(int n)
{
	if (n > 9)
	{
		my_print(n / 10);
	}

	printf("%d ", n % 10);

}
//print(123) 3
//print(12) 2
// print(1) 1
// print(0)
// 
long long fibonacci(unsigned int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		int a = 0;
		int b = 1;
		int res = 0;
		for (int i = 1; i < n; i++)
		{
			res = a + b;
			a = b;
			b = res;

		}
		return res;
	}
}
//recursion and iteration
//递归和迭代
int main()
{
	/*unsigned int num = 0;
	scanf("%d", &num);
	while (num)
	{
		printf("%d ", num % 10);
		num /= 10;
	}
	print(num);
	int len = strlen("abc");
	printf("%d\n", len);
	char str[] = "abc";
	printf("%d\n", len(str));
	printf("%d\n", my_strlen(str));*/
	
	/*printf("%lld\n", Factorial(3));
	printf("%lld\n", factorial(3));*/
	
	/*my_print(12345);*/
	//printf("%lld\n", Fibonacci(40));
	printf("%lld\n", fibonacci(40));
	return 0;
}

//recursion and iteraion