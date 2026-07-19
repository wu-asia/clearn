#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<ctype.h>


int main()
{
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{

	}
	for (i = 0; i < 10; i++)
	{
	}*/
	int a = (int)3.14;
	printf("%d\n", a);
	srand((unsigned int)time(NULL));
	int b = rand();
	return 0;
}