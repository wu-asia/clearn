#include<stdio.h>

void stringcat(char* str1, char* str2)
{
	while (*str1 != '\0')
	{
		str1++;  //str1的地址向后移动一位，直至移动到'\0'
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}
int main()
{
	char str1[100];
	char str2[100];
	printf("Please input a string:");
	fgets(str1, sizeof(str1), stdin);
	for (int i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == '\n')
		{
			str1[i] = '\0';
			break;
		}
	}

	printf("Please input another string:");
	fgets(str2, sizeof(str2), stdin);

	for (int i = 0; str2[i] != '\0'; i++)
	{
		if (str2[i] == '\n')
		{
			str2[i] = '\0';
			break;
		}
	}
	stringcat(str1, str2);
	printf("%s", str1);
	return 0;
}