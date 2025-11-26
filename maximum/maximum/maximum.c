#include<stdio.h>

//求十个整数中的最大值
int main()

{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	/*for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}*/
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}