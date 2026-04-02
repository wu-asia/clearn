#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stu
{
	char name[30];
	int age;
};
void Swap(char* Buf1, char* Buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *Buf1;
		*Buf1 = *Buf2;
		*Buf2 = tmp;
		Buf1++;
		Buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void*, const void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_by_size(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test1()
{
	int arr[] = { 1,2,3,7,8,4,6,5,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_by_size);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test2()
{
	struct Stu s[] = { {"zhangsan",12},{"lisi",20},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}


int main()
{
	test2();
	//test1();
	return 0;
}