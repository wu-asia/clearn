////#include<stdio.h>
////int main()
////{
////	int i = 10;
////	i = i-- - --i * (i = -3) * i++ + ++i;
////	printf("%d\n", i);
////	return 0;
////}
////
////#include<stdio.h>
////int fun()
////{
////	static int count = 1;
////	return ++count;
////}
////int main()
////{
////	int answer;
////	answer = fun() - fun() * fun();
////	printf("%d\n", answer);
////	return 0;
////
////
////#include<stdio.h>
////int fun(int n)//定义的是走n阶台阶的走法
////{
////	if (n == 1)
////	{
////		return 1;
////	}
////	else if (n == 2)
////	{
////		return 2;
////	}
////	else
////	{
////		return (fun(n - 1) + fun(n - 2));
////	}
////}
////int main()
////{
////	printf("%d\n", fun(9));
////	return 0;
////}
//
////上台阶的变种，在剑指offer
//
////#include<stdio.h>
////#include<string.h>
////
////int main()
////{
//	/*int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	printf("the character deleted\n");
//	scanf("%d", &del);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	while (i <= n)
//	{
//		if (arr[i] == del)
//		{
//			int j = i;
//			while (j+1<=n)
//			{
//				arr[j] = arr[j + 1];
//				j++;
//			}
//			
//		}
//		i++;
//	}
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	/*char line[80];
//	fgets(line, 80, stdin);
//	char ch = getchar();
//	char* p = line;
//	int i = 0;
//	int j = 0;
//	while (*p != '\0')
//	{
//		if (ch != line[i])
//		{
//			while (line[j + 1] != '\0')
//			{
//				j = i;
//				line[j] = line[j + 1];
//				j++;
//			}
//			line[j + 1] = '\0';
//		}
//		i++;
//	}*/
//
//	/*int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}*/
//
//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//
//int main()
//{
//	char ch = 0;;
//	while (ch = getchar())
//	{
//		if (isalpha(ch))
//			printf("%c is alphabet.\n", ch);
//		else
//			printf("%c is not alphabet.\n", ch);
//		getchar();
//	}
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	char str[4][20] = { "aaa","bbb","ccc","d" }, strp[4];
//	int j;
//	for (j = 0; j < 4; j++)
//		strp[j] = str[j];
//	printf("%s\n", *strp);
//	printf("%s\n", strp[3]);
//	printf("%s\n", str[3]);
//	printf("%s\n", strp);
//	return 0;
//}
//#include<stdio.h>
//#define (a,b) t=a;a=b;b=t;
//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10)sum = sum + i; i++;
//	printf("i=%d,sum=%d", i, sum);
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	char s[] = "123", *p;
//	p = s;
//	printf("%c%c%c\n", *p++, *p++, *p++);
//}
//

