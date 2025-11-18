#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<time.h>

int main()
{
	char str1[] = "welcome to bit!!!!";
	char str2[] = "##################";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right)
	{
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s", str2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", str1);

	
	return 0;
}