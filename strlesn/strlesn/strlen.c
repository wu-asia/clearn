//#include<stdio.h>
//#include<string.h>
//
//int Palindrome(char* str, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			str[i] = str[i] + ('a' - 'A');
//		}
//	}
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		if (str[left] == str[right])
//		{
//			left++;
//			right--;
//		}
//		else
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	char str[100];
//	fgets(str, 99, stdin);
//	int len = strlen(str);
//	char str1[100];
//	strcpy(str1, str);
//	
//	for (int i = 0; i < len; i++)
//	{
//		if (str1[i] == '\n')
//		{
//			str1[i] = '\0';
//			break;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i] == '\n')
//		{
//			str[i] = '\0';
//			break;
//		}
//	}
//	//printf("%d\n", strlen(str));
//	//printf("%s\n", str);
//	if (Palindrome(str, len) == 1)
//	{
//		printf("%s is a Palindrome", str1);
//	}
//	else
//	{
//		printf("%s is not a Palindrome", str1);
//	}
//	return 0;
//}