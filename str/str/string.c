#include<stdio.h>
#include<string.h>

void uptolow(char str[],int len)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}
int ishui(char str[],int len)
{
	if (len <= 20)
	{
		int left = 0;
		int right = len-1;
		while (left < right)
		{
			if (str[left] != str[right])
			{
				return 0;
			}
			left++;
			right--;
		}
		return 1;
	}
	
}
int main()
{
	/*char str[5] = "AcBd";
	int len = strlen(str);
	uptolow(str, len);
	printf("%s", str);*/

	char input[20];
	scanf("%s", input);
	
	int len = strlen(input);
	uptolow(input,len);
	if ((ishui(input, len))==1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}