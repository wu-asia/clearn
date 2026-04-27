#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
	FILE* fp = fopen(argv[1], "r+");
	
	if (fp == NULL)
	{
		printf("can't open the file\n");
		exit(1);
	}
	int num = 3;
	int sum = 0;
	fscanf(fp, "%d", &sum);
	sum += num;
	rewind(fp);
	printf("\nsum = %d\n", sum);
	fprintf(fp, "\nsum = %d\n", sum);
	fclose(fp);
	if (0 != fclose(fp))
	{
		printf("can't close the file\n");
		exit(1);
	}
	return 0;
}