#include<stdio.h>
#include<string.h>

void revarr(int arr1[], int arr2[], int arr3[])
{
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] * arr1[i] + arr2[5 - 1 - i] * arr2[5 - 1 - i];
	}
	
}
int main()
{
	int arr1[5];
	int arr2[5];
	int arr3[5];
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
		
	}

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}

	revarr(arr1, arr2, arr3);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr3[i]);
	}

	return 0;
}