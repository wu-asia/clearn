#include<stdlib.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	FILE* fp;
	if ((fp = fopen("abc.txt", "r")) == NULL)
	{
		printf("can't open the file\n");
		exit(1);
	}
	return 0;
}