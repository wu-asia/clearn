#include<stdio.h>
#include"add.h"
#include"sub.h"

//#pragma comment(lib,"subtract.lib")
#pragma comment(lib,"subtract.lib")
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//printf("sum:%d\n", add(a, b));
	printf("ret:%d\n", sub(a, b));
	return 0;
}
