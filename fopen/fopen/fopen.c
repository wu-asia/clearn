#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("can't open the file\n");
		exit(1);
	}
	fclose(fp);
	if (0 != fclose(fp))
	{
		printf("can't close the file\n");
		exit(1);
	}
}