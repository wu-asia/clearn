#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i * j);

		}
		printf("\n");
	}


	for (i = 11; i <= 19; i++)
	{
		printf("%d*%d=%d\n", i, i, i * i);
	}
	return 0;
}