#include<stdio.h>
double factorial(double n)
{
	int i = 1;
	int res = 1;
	for (i = 1; i < n; i++)
	{
		res *= i;
	}
	return res;
}
int main()
{
	/*int i = 0;
	int n = 0;
	int res = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		res *= i;
	}
	//printf("%d", res);*/

	//double i = 1.0;
	//double res = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	res += factorial(i);
	//}
	//printf("%lf\n", res);

	/*int i = 1;
	int n = 3;
	int res = 1;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		res *= i;
		sum += res;
	}
	printf("%d\n", sum);*/


	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = len - 1;
	int k = 7;
	int index = 0;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid;
		}
		else if (arr[mid] < k)
		{
			left = mid;
		}
		else if (arr[mid] == k)
		{
			index = mid;
			break;
		}
	}
	printf("%d\n", index);
	return 0;
}