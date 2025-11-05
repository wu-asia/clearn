#include<stdio.h>
int gys(int n, int m)
{
	if (m % n == 0)
	{
		return n;
	}
	else
	{
		while (n!= 0)
		{
			int k = m % n;
			m = n;
			n = k;
		}
		return m;
	}
}
int main()
{
	int m, n;
	scanf("%d,%d", &m, &n);
	printf("%d\n", gys(m, n));
	return 0;
}