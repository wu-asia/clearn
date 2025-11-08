#include<stdio.h>
#include<string.h>
void stringcat(char str1[], char str2[], int len1, int len2)
{
	
		if (str1[len1 - 1] == '\n')
		{
			str1[len1] = '\0';
			len1--;
		}
	

	
}

int main()
{
	char str1[128];
	char str2[128];
	
	fgets(str1, strlen(str1), stdin);
	fgets(str2, strlen(str2), stdin);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	/*stringcat(str1, str2, len1, len2);*/
	if (len1 > 0 && str1[len1 - 1] == '\n')
	{
		str1[len1 - 1] = '\0';
		len1--;
	}
	printf("%s", str1);
	printf("%s", str2);

	return 0;
}