#include<stdio.h>
int gys(int n, int m)
{
	int k = n % m;
	while (k != 0)
	{
		n = m;
		m = k;
	}
	return m;
}
int main()
{
	int a = 3;
	int b = 4;
	printf("%d\n", gys(a, b));
	
	return 0;
}

//3%4=1
//4%1=0