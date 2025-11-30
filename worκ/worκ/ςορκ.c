#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fun(int n)
{
	if (n == 5)
	{
		return 2;
	}
	else
		return 2 + fun(n + 1);
}

void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);

}
//逆序字符串（递归实现）

void reverse(char *str)
{
	char temp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = temp;
}

void bireverse(char* str, int left, int right)
{
	char temp = *str;
	*str = *(str + right);
	*(str + right) = temp;
	if (left < right)
	{
		bireverse(str + 1, left + 1, right - 1);
	}

}
int main()
{
	//int ret = fun(2);
	//printf("%d\n", ret);

	char str[] = "abcdef";//sizeof(str)为[a,b,c,d,e,f,\0]七个元素
	//reverse(str);
	int left = 0;
	int right = strlen(str) - 1;
	bireverse(str, left, right);
	//用上的strlen(ok)
	//信服
	printf("%s\n", str);
	//print(1234);
	return 0;
}