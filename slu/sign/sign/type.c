//#include<stdio.h>
//
//typedef unsigned int unit;
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	unsigned int num1 = 0;
//	unit num2 = 1;
//	//划分区域来使用
//	//占区里是用来储存数据变量的
//
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//

#include<stdio.h>
extern int g_val;
extern int add(int a, int b);
int main()
{
	/*printf("%d\n", g_val);*/
	int a = 10;
	int b = 20;
	int z = add(a, b);
	printf("%d\n", add(a, b));

	return 0;
}