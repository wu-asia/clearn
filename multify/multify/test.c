#include<stdio.h>

#pragma comment(lib,"mul.lib")

int main()
{
	int a = 2;
	int b = 4;
	int result = mul(a, b);
	printf("%d\n", result);
	return 0;
}