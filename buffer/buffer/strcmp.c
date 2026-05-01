//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);
//}
////
//int main()
//{
//	/*char arr[4] = { 0 };
//	strcpy(arr, "hello bit");
//	printf("%s\n", arr);*/
//	char arr1[20] = "abcdef";
//	char arr2[] = "hello bit";
//	//strcpy(arr1, arr2);
//	strncpy(arr1, arr2, 5);
//}
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 != '\0'||*s2!='\0')
//	{
//		if (*s1 - *s2 != 0)
//		{
//			return*s1 - *s2;
//		}
//		else
//		{
//			s1++;
//			s2++;
//		}
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "abq";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("=\n");
//	else
//		printf(">\n");
//	/*if (arr1 == arr2)
//	{
//		printf("==\n");
//	}
//	else
//	{
//		printf("!=\n");
//	}*/
//	return 0;
//}