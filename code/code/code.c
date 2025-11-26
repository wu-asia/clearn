#include<stdio.h>

void hanoi(int n, char F, char A, char T)
{
	if (n == 1)
	{
		printf("Move disk 1 from %c to %c\n", F, T);
	}
	else
	{
		hanoi(n - 1, F, T, A);
		printf("Move disk %d from %c to %c\n", n, F, T);
		hanoi(n - 1, A, F, T);
	}
}

int frog(int n)//函数frog是表示青蛙跳n级台阶所用的方案
//frog(n)表示青蛙条到第N阶台阶时所用的方案是
//它等于frog(n-1)[从第n-1级台阶跳上来]+frog(n-2)[从第n-2级台阶上来]
{
	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n == 2)
	{
		return 2;
	}
	else
	{
		return frog(n - 1) + frog(n - 2);
	}
}

int gld(int a, int b)
{
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;

	}
	return b;
}

int Gld(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return Gld(b, a % b);
	}
}
int main()
{
	/*hanoi(3, 'a', 'b', 'c');
	printf("%d\n", frog(4));
	printf("%d\n", gld(12, 15));
	printf("%d\n", Gld(5, 15));*/
	/*int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20)break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);*/

	int arr[100];
	int i = 0;
	for ( i = 1; i <= 100; i++)
	{
		arr[i - 1] = i;
	}

	/*for (i = 0; i < 100; i++)
	{
		printf("%d\n", arr[i]);
	}*/
	int count = 0;
	/*for (i = 1; i <= 100; i++)
	{
		if ((arr[i] % 10 == 9 || arr[i] / 10 == 9) && (arr[i] % 10 == 9 && arr[i] / 10 == 9))
		{
			count++;
		}
		if (arr[i] % 10 == 9 && arr[i] / 10 == 9)
		{
			count += 2;
		}
	}*/

	/*for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 && i / 10 == 9)
		{
			count += 2;
		}
		else if (i % 10 == 9 || i / 10 == 9)
		{
			count++;
		}
	}*/

	/*for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}*/
	int t = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + t * (1.0 / i);
		t = -t;
	}
	//hehe
	printf("%lf\n", sum);
	return 0;
}