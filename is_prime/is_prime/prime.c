#include<stdio.h>
#include<math.h>
int prime(int num)
{
	int count = 0;
	for (int i = 1; i <= sqrt(num);i += 2)
	{
		if (num % i == 0)
		{
			count++;
			
		}
	}
	if (count == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int n;
	scanf("%d", &n);
	if (prime(n)==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
