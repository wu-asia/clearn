//#include<stdio.h>
//
//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100
//	//0x00 00 00 14
//	//00000000000000000000000000010100
//	//00000000000000000000000000010100
//	int b = -10;
//	//10000000000000000000000000001010--原码
//
//	//11111111111111111111111111110101--反码
//	//11111111111111111111111111110110--补码
//	//0xfffffff6
//
//	return 0;
//}

//#include<stdio.h>
//
//int check_sys()
//{
//	int a = 1;
//	return *((char*)&a);
//	
//}
//int main()
//{
//	if (check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	printf("%zu\n", sizeof(char));
//	return 0;
//}

//#include<stdio.h>>
//
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	//%u - 打印无符号的整数
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001  原码
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111  补码
//	//截断
//	//11111111
//	//整型提升
//	//11111111 11111111 11111111 11111111  补码
//	//10000000 00000000 00000000 00000000
//	//10000000 00000000 00000000 00000001  原码
//	//-1
//
//	signed char b = -1;
//	unsigned char c = -1;
//	//10000000 00000000 00000000 00000001  原码
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111  补码
//	//截断
//	//11111111
//	//整型提升
//	//00000000 00000000 00000000 11111111 补码
//	//225
//
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000  原码
//	//11111111 11111111 11111111 01111111  反码
//	//11111111 11111111 11111111 10000000  补码
//	//截断
//	//10000000
//	//整型提升
//	//11111111 11111111 11111111 10000000
//	//%u 直接打印，上面的别作为原码
//	printf("%u\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char a = 128;
//	//00000000 00000000 00000000 10000000  补码
//	//截断
//	//10000000
//	//整型提升（以截断后的第一位数字进行补齐位置）
//	//11111111 11111111 11111111 10000000
//	printf("%u\n", a);//4,294,967,168
//	//11111111 11111111 11111111 10000000  补码
//	//10000000 00000000 00000000 01111111 
//	//10000000 00000000 00000000 10000000  原码
//	//-128
//	printf("%d\n", a);//-128
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = -20;
//	//10000000 00000000 00000000 00010100  原码
//	//11111111 11111111 11111111 11101011  反码
//	//11111111 11111111 11111111 11101100  补码
//	unsigned int j = 10;
//	//00000000 00000000 00000000 00001010  补码
//	// 00001010
//	// 整型提升
//	//00000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11101100
//	//11111111 11111111 11111111 11110110  补码
//	//10000000 00000000 00000000 00001001
//	//10000000 00000000 00000000 00001010  原码
//	//-10
//	printf("%d\n", i + j);
//	return 0;
//}
//
//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	//-1
//	//10000000 00000000 00000000 00000001 
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111
//	//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	//a[i] --> char -128~127
//	//-1 -2 -3 -4 -5 -6 
//	//-1 -2 -3 -4 -5 ... -128 127 126 125 ... 3 2 1 0 -1 ...
//	//128+127=225
//	return 0;
//}
//
//#include<stdio.h>
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	//11111111
//	//100000000
//	//00000000
//	return 0;
////}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	//int len = strlen("abcdef");
//	if (strlen("abc") - strlen("abcdef") >= 0)
//		printf(">");
//	else
//		printf("<");
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//
////int main()
////{
////	float f = 5.5;
////	//5.5
////	//101.1
////	//(-1)^0*(1.011)^
////	printf("%zu %zu\n", sizeof(float), sizeof(double));
////	printf("%lf\n", pow(2, 11));
////	//S E        M
////	//0 10000001 01100000000000000000000
////	//0100 0000 1011 0000 0000 0000 0000 0000
////	//0x40 b0 00 00
////
////	return 0;
////}
//
//int main()
//{
//
//	return 0;
//}

//奇数在数组前半部分，偶数在数组后半部分

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 3,2,1,6,8,7,4,10,9,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int* left = arr;
//	int* right = arr + len - 1;
//	while (left < right)
//	{
//		if ((*left % 2 == 0) && (*right % 2 == 1))
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//		else if ((*left % 2 == 1))
//		{
//			left++;
//		}
//		else if ((*right % 2 == 0))
//		{
//			right--;
//		}
//		else
//		{
//			right--;
//			left++;
//		}
//	}
//
//	while (left < right)
//	{
//		while ((left < right) && *left % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = *left;
//			left++;
//			right--;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000];
//    int arr2[1000];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int j = 0;
//    int k = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] <= arr2[k])
//        {
//            printf("%d ", arr1[j]);
//            j++;
//        }
//        else
//        {
//            printf("%d ", arr2[k]);
//            k++;
//        }
//    }
//    while (j < n)
//    {
//        printf("%d ", arr1[j]);
//        j++;
//    }
//    while (k < m)
//    {
//        printf("%d ", arr2[k]);
//        k++;
//    }
//    return 0;
//
//}

//#include<stdio.h>
//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[1000];
//	int i = 0;
//	for (i = 0; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = n + m;
//	bubble_sort(arr, len);
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//
//	const char* p = "abcdef";
//	printf("%s\n", *p);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcedf";
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//C语言是实现简单的数据结构
//指针+结构体+动态内存管理
//

//再次讨论数组名
//#include<stdio.h>
//#include<stdlib.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	int sz = sizeof(arr);
//	printf("%d\n", sz);
/*}
int main()
{
	char* arr[5] = { 0 };
	char* (*pc)[5] = &arr;
}*/

//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*p)
//	}
//	return 0;
//}
//
//#include<stdio.h>
//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//
//	return 0;
//}

//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//&数组名 - 取出的数组的地址
//
//	int (*p)[5] = &arr;//数组指针
//
//	//&函数名 - 去除的就是函数的地址呢？
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//对于函数来说，&函数名和函数名都是函数的地址
//
//	int (*pf)(int, int) = &Add;
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	//函数，要我们事业打开一点
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int* arr[4];
//	char* ch[5];
//
//	int arr2[5];
//	int(*pa)[5] = & arr2;
//
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//int main()
//{
//	//函数指针 - 也是一种指针，是指向函数的指针
//	int (*p)(const char*) = test;
//	(*p)("abc");
//	test("abc");
//	p("abc");
//	return 0;
//}
//
//int main()
//{
//	//( *( void (*)() )0 )();
//	void(* signal( int, void(*)(int) ) )(int);
//	//是一个函数指针的类型，是一个int,flaot和double类型
//	//是不好理解的，函数指针是一种指针，没有什么意义。
//	return 0;
//}

//函数指针的用途
//写一个计算器
//加法、减法、乘法、除法

//void menu()
//{
//	printf("1.addition\n");
//	printf("2.subtraction\n");
//	printf("3.multiplication\n");
//	printf("4.division\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个数字：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择");
//		scanf("%d", &input);
//		
//		
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	}while (input);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int(*pf)(int, int) = Add;
	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };
	return 0;
}
