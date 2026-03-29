//#include<stdio.h>
//void graph(int n)
//{
//	int i = 0;
//	int j = 0;
//	int k = n / 2;
//	//printf("%d\n", k);
//	/**/for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j >= (k - i) && j <= (k + i))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	for (i = n - k - 1; i >= 0; i--)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j >= (k - i) && j <= (k + i))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 155;
//	graph(n);
//	return 0;
//}