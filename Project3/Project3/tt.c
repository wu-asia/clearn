//#include<stdio.h>
//
//int main()
//{
//	char a = -1;
//	//10000000 00000000 00000000 00000001
//	//11111111 11111111 11111111 11111110
//	//11111111 11111111 11111111 11111111 补码
//	//截断
//	//11111111
//	//整形提升
//	//11111111 11111111 11111111 11111111 补码
//
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d \n", a, b, c);
//
//}
//
//#include<stdio.h>
//
//int main()
//{
//	char a = -128;
//	//10000000 00000000 00000000 10000000
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000 补码
//	//截断
//	//10000000
//	//整形提升
//	//11111111 11111111 11111111 10000000
//	printf("%u\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//}

//#include<stdio.h>
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
//int main()
//{
//	int(*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	int input = 0;
//	do
//	{
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input < 5)
//		{
//			int n = 0;
//			int m = 0;
//			scanf("%d %d", &n, &m);
//			int ret = (pf[input])(n, m);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误，重新输入\n");
//		}
//	} while (input);
//		return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
////void qort(void* base, size_t num, size_t width, int(_cdecl* compare)(const void* elem1, const void* elem2));
//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < len; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return(*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//把数组进行排序
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, len);
//	qsort(arr, len, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//
//};
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Swap(char* Buf1, char* Buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		/*char tmp = *Buf1;
//		*Buf1 = *Buf2;
//		*Buf2 = tmp;
//		Buf1++;
//		Buf2++;*/
//		char tmp = *(Buf1 + i);
//		*(Buf1 + i) = *(Buf2 + i);
//		*(Buf2 + i) = tmp;
//	}
//}
//void bubble_sort(void* p, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)p + width * j, (char*)p + (j + 1) * width) > 0)
//			{
//				Swap((char*)p + width * j, (char*)p + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//int cmp_by_size(const void* e1, const void* e2)
//{
//	return (*(int*)e1) - (*(int*)e2);
//}
//int main()
//{
//	int arr[] = { 1,2,6,5,7,9,3,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_by_size);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}