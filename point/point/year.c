#include<stdio.h>

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d%d", &y, &m) == 2)
	{
		if (m != 2)
		{
			printf("day:%d\n", day[m - 1]);
		}
		else
		{
			printf("day:%d\n", day[m - 1] + ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)));
		}
	}
	return 0;
}