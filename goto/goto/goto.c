#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>

int main()
{
	/*again:
	printf("hehe\n");
	printf("haha\n");
	goto again;*/
	//关机程序
	//1.电脑运行起来后，一分钟内关机
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在六十秒后关机，输入我是猪，就取消关机\n");
	scanf("%s", input);
	if (!(strcmp(input, "我是猪")))
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	/*char str[99];
	scanf("%s", str);
	printf("%d\n", strcmp(str, "我是猪"));*/
	return 0;
}
