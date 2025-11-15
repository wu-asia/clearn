#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*int year = 0;
	int month = 0;
	int date = 0;
	scanf("%4d%2d%2d", &year, &month, &date);
	printf("%4d\n", year);
	printf("%02d\n", month);
	printf("%02d", date);*/
	//printf("printf(\"Hello World\\n\");\n");
	//printf("cout<<\"Hello World\"<<end;"\n);

	//简单说一下，我们来看一下

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		continue;//等于五时，//break;//直接跳出循环
	//	}
	//	printf("%d\n", i);
	//}

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}


	for (int i = 0; i < 1E10; i++)
	{
		printf("%d\n", i);
	}
	//好你好，continue确实是跳过后面的代码，是有所区别的，永久的使用情况
	//循环体的，再来之后再判断，只要一直循环，之哟啊我们的条件来看，for循环中出现break
	return 0;
}
