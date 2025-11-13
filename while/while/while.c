//#include<stdio.h>
//
//int main()
//{
	/*while (1)
	{
		printf("hello");
	}*/
	/*int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i);
		i++;
	}*/
	/*int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}*/
	//	int i = 1;
	//	while (i <= 10)
	//	{
	//		i++;
	//		if (5 == i)
	//			continue;
	//		printf("%d", i);
	//	}
	//	return 0;
	//}

//#include<stdio.h>
//
//void sort (int *arr[], int n)
//{
//	for (int i = n - 1; i >= 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (*arr[j] < *arr[j + 1])
//			{
//				int *temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
// 
//int main()
//{
//	int a[100], i, n;
//	int* p[100];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		p[i] = &a[i];
//	}
//	sort (p, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", *p[i]);
//		if (i != n - 1)
//		{
//			printf(" ");
//
//		}
//	}
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	int arr[10];
	int n;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		
		if (arr[i] == n)
		{
			printf("%d", i + 1);
			break;
		}
		count++;
	}
	
	if (count >= 10)
	{
		printf("not found");
	}
	/*printf("%d", count);*/
	/*if (count == 10 && arr[count - 1] != arr[9])
	{
		printf("not found");
	}*/
	/*printf("%d", count);
	if (count > 10)
	{
		printf("not found");
	}*/

	return 0;
}