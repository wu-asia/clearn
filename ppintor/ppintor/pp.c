//#include<stdio.h>
////#include<stdlib.h>
//int max(int a[], int n)
//{
//	int mx = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > mx)
//		{
//			mx = a[i];
//		}
//	}
//	
//	return mx;
//}
//int main()
//{
//	int a[100], i, n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("%d", max(a, n));
//
//	
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int fun(int x, int y, int cp, int dp)
//{
//	cp = x + y;
//	dp = x - y;
//}
//int main()
//{
//	/*int a[] = { 1,2,3,4,5,6,7,8,9,0 },*p;
//	p = a;
//	printf("%d\n", *p + 9);*/
//	int a, b, c, d;
//	a = 30;
//	b = 50;
//	c = 30;
//	d = 50;
//	fun(a, b,  c,  d);
//	printf("%d,%d", c, d);
//	return 0;
//
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void fun(int* a, int* b)
//{
//	int* k;
//	k = a;
//	a = b;
//	b = k;
//}
//
//int main()
//{
//	/*int a = 3, b = 6, * x = &a, * y = &b;
//	fun(x, y);
//	printf("%d %d", a, b);*/
//
//	int a, k = 4, m = 6, * p1 = &k, * p2 = &m;
//	a = p1 == &m;
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//
//int len(char* str)
//{
//	int i = 0;
//	while (1)
//	{
//		
//		if (str[i] == '\n' || str[i] == '\0')
//		{
//			break;
//		}
//		else
//		{
//			i++;
//		}
//		
//	}
//	return i;
//}
//int main()
//{
//	char str[100];
//	fgets(str, 99, stdin);
//	//printf("%d\n", len(str));
//	printf("The length of this string is %d", len(str));
//
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>

int Palindrome(char* str,int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');
		}
	}
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		if (str[left] == str[right])
		{
			left++;
			right--;
		}
		else
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	char str[100];
	fgets(str, 99, stdin);
	int len = strlen(str);
	char str1[100];
	strcpy(str1, str);
	//printf("%s\n", str);
	for (int i = 0; i < len; i++)
	{
		if (str1[i] == '\n')
		{
			str1[i] = '\0';
			break;
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
			break;
		}
	}
	//printf("%s\n", str);
	if (Palindrome(str,len) == 1)
	{
		printf("%s is a Palindrome", str1);
	}
	else
	{
		printf("%s is a Palindrome", str1);
	}
	return 0;
}