#include<stdio.h>


int w = 3;
fun(int k)
{
	if (k == 0)return w;

	return (fun(k - 1) * k);
}

int main()
{
	int w = 10;
	printf("%d", fun(5) * w);

	return 0;
}

