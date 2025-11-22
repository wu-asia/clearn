#include<stdio.h>

int main()
{
	//链式访问
	printf("%d\n", strlen("abcdef"));
	printf("%d", printf("%d", printf("%d", 43)));//4321
	//真是服了；
	//喜欢这样写，int啊等于十
	//main函数中的参数：int main(int argc, char* argv[], char* envp[])
	return 0;
}