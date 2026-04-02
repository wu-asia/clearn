//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Swap(char* Buf1, char* Buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(Buf1 + i);
//		*(Buf1 + i) = *(Buf2 + i);
//		*(Buf2 + i) = tmp;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void*, const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->age,((struct Stu*)e2)->age);
//}
//
//void test1()
//{
//	struct Stu s[] = { {"zhangsan",12},{"lisi",20},{"wangwu",8} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test1();
//	return 0;
//}