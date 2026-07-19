//////#include<stdio.h>
//////
//////int main()
//////{
//////	int a = 10;
//////	int* pa = &a;
//////	//本质上：指针就是地址
//////	//口语上说的指针，其实是指针变量，每一个内存单元的地址。
//////	//虚拟内存，先不要理解的太复杂。
//////	//指针变量 里面存放的是地址，
//////	//反复地揣摩，每个字节。
//////	//一个内存单元，一个字节，为了方便，如果一个char
//////	//1024Byte
//////	//地址是如何产生的，要抓住重点，三十二个
//////	char* pc = NULL;
//////	short* ps = NULL;
//////	int* pi = NULL;
//////	double* pd = NULL;
//////	printf("%zu\n", sizeof(pc));
//////	printf("%zu\n", sizeof(ps));
//////	printf("%zu\n", sizeof(pi));
//////	printf("%zu\n", sizeof(pd));
//////	//结论：指针类型决定了指针在解引用是访问几个字节。当然有意义。
//////	return 0;
//////}
////
////#include<stdio.h>
////int* test()
////{
////	int a = 10;
////	return &a;
////}
////int main()
////{
////	/*int a = 10;
////	int* p;
////	p = &a;*/
////	//int arr[10] = { 0 };
////	/*int* p = test();
////	printf("shijian ");
////	printf("shijjian");
////	printf("shijian ");
////	printf("%shijian");
////	printf("%d\n", *p);
////	*/
//////	int a = 10;
//////	int* p = &a;
//////	int* p2 = NULL;
////////
//////	float value[5];
//////	float* vp;
//////	for (vp = &value[0]; vp < &value[5];)
//////	{
//////		*vp++ = 0;
//////	}
////	//int arr[10] = { 0 };
////	//int i = 0;
////	//int sz = sizeof(arr) / sizeof(arr[0]);
////	//for (i = 0; i < sz; i++)
////
////	//{
////	//	arr[i] = 1;
////	//}
////	//int* p = arr;
////	//for (; p < (arr + sz - 1); p++)
////	//{
////	//	*p = 2;
////	//}
////	//for (i = 0; i < sz; i++)
////	//{
////	//	*(p + i) = 3;
////	//}
////
////
////	return 0;
////}
//
//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int stringlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	/*int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n", my_strlen("abcdef"));
//		printf("%d\n", stringlen("abcdef"));*/
//
//	return 0;
//}