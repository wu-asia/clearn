#include<stdio.h>

int main()
{
	int arr[4];
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];

	for (int i = 0; i <= 3; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	for (int i = 0; i <= 3; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("max:%d min:%d", max, min);
	return 0;
}
