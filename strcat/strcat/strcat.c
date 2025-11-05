#include<stdio.h>
#include<string.h>

char stringcat(char str1[], char str2[],char newstr[],int len1,int len2)
{

	
	for (int i = 0; i < len1; i++)
	{
		newstr[i] = str1[i];
	}
	for (int i = 0, j = len1; i < len2, j < (len1 + len2); i++, j++)
	{
		newstr[j] = str2[i];
	}
	newstr[len1 + len2] = '\0';
	return newstr;
}
int main()
{
	char str1[128] ;
	char str2[128] ;
	scanf("%s %s", str1, str2);
	char newstr[256];
	stringcat(str1, str2, newstr, strlen(str1), strlen(str2));
	printf("%s", newstr);
	return 0;
}