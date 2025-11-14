#include<stdio.h>
#include<string.h>
int main()
{
	/*int ch = getchar();
	printf("%d", ch);
	putchar(ch);
	return 0;*/

	//int ch;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//	//换行，打印一个“a”，了解以上的代码
	//}
	char ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);

	}

	return 0;
}