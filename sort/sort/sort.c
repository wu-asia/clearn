//#include<stdio.h>
//
//void bubble_sort(int arr[],int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				
//			}
//		}
//	}
//}
//void fun(int arr[], int left,int right)
//{
//	int i = left;
//	int j = right;
//	int len = right - left + 1;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 3,2,1,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//}
//
