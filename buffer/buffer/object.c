////#include<stdio.h>
////
////int main()
////{
////	int a[5] = { 1,2,3,4,5 };
////	int* ptr = (int*)(&a + 1);
////	printf("%d %d", *(a + 1), *(ptr - 1));
////	return 0;
////}
////
////#include<stdio.h>
////struct Test
////{
////	int Num;
////	char* pcName;
////	short sDate;
////	char cha[2];
////	short sBa[4];
////}*p=(struct Test*)0x100000;
//////假设p的值为0x100000。如下表达式的值分别是多少?
//////已知，结构体Test类型的变量大小是20个字节
////int main()
////{
////	//printf("%p\n", p);
////	printf("%p\n", p + 0x1);//0x100001
////	printf("%p\n", (unsigned long)p + 0x1);//0x100000
////	
////	printf("%p\n", (unsigned int*)p + 0x1);//0x00010001
////	//0x10000
////	//0000 0000 0000 0001 0000 0000 0000 0000
////	//0x1
////	//0000 0000 0000 0000 0000 0000 0000 0001
////	//0000 0000 0000 0001 0000 0000 0000 0001
////	//0x00010001
////	return 0;
////}
//
////#include<stdio.h>
////
////int main()
////{
////	int a[4] = { 1,2,3,4 };
////	int* ptr1 = (int*)(&a + 1);//4
////	//0x0004
////	int* ptr2 = (int*)((int)a + 1);//2
////	
////	//将a强制类型转换了，
////	printf("%x\n%x", ptr1[-1], *ptr2);//
////	//0x4
////	//
////}
////
////#include<stdio.h>
////
////int main()
////{
////	int a[3][2] = { (0,1),(2,3),(4,5) };
////	int* p;
////	p = a[0];
////	printf("%d", p[0]);
////	return 0;
////}
////#include<stdio.h>
////int main()
////{
////	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* ptr1 = (int*)(&aa + 1);
////	int* ptr2 = (int*)(*(aa + 1));
////	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
////	return 0;
////}
//////二维数组是连续的
//////ptr1减去一，打印十，数组名是sizeof，aa[1]第二行的地址，这边是没有用的。
//////把ptr2 ,答案是十和五。
//
////
////int main()
////{
////	char* a[] = { "work","at","alibaba" };
////	char** pa = a;
////	pa++;
////	printf("%s\n", *pa);
////}
//
////int main()
////{
////	char* c[] = { "ENTER","NEW","POINT","FIRST" };
////	char** cp[] = { c + 3,c + 2,c + 1,c };
////	char*** cpp = cp;
////
////	printf("%s\n", **++cpp);
////	printf("%s\n", *-- * ++cpp + 3);
////	printf("%s\n", *cpp[-2] + 3);
////	printf("%s\n", cpp[-1][-1] + 1);
////	return 0;
////}
////#include<stdio.h>
////#include<string.h>
////#include<assert.h>
////char* my_strcat(char* dest, const char* soc)
////{
////
////	while (*++dest);
////	while (*dest++ = *soc++);
////	return 
////}
//////字符串追加
////int main()
////{
////	char arr1[20] = "hello ";
////	my_strcat(arr1, "world");
////	printf("%s\n", arr1);
////	return 0;
////}
////char* my_strcpy(char* dest, const char* soc)
////{
////	char* ret = dest;
////	assert(soc);
////	assert(dest);
////	while (*dest++ = *soc++ , *soc != '\0');
////
////	return ret;
////}
////int main()
////{
////	char arr1[] = "abcdef";
////	char arr2[20] = { 0 };
////	my_strcpy(arr2, arr1);
////	printf("%s\n", arr2);
////
////	return 0;
////}
////int main()
////{
////	int a = 0;
////	int b;
////	int d = 2;
////	int c;
////	printf("%d\n", (b = a));
////	printf("%d\n", (c = d));
////}
//
////int main()
////{
////	char name[20] = { 0 };
////	strcpy(name, "zhangsan");
////}
////unsigned int my_strlen(const char* str)
////{
////	assert(str != NULL);
////	int count = 0;
////	while (*str++)
////	{
////		count++;
////	}
////	return count;
////}
////int main()
////{
////	char arr[] = "abcdef";
////	int ret = my_strlen(arr);
////	printf("%d\n", ret);
////	return 0;
////
////}