#include<stdio.h>


void bubble_sort(int arr[],int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len-1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i = 0;
	int j = 0;
	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	int arr1[] = { 1,2,4,3,5,6,3 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	bubble_sort(arr1, len);

	for (i = 0; i < len; i++)
	{
		printf("%d\n", arr1[i]);
	}
	//printf("🐏");
	printf("Hello World!\n");
	//三维数组是相同的道理
	printf("Just so so\n");
	int arr2[10] = { 0 };
	printf("%p\n", arr2);
	printf("%p\n", &arr2[0]);
	printf("%p\n", &arr2);
	f1
	//户籍地缴，
	return 0;
}