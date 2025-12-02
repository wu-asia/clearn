#include<stdio.h>
#include<string.h>


//int main()
//{
//	//逗号表达式
//	//
//	int arr[] = { 1,2,(3,4),5 };
//	//printf("%d\n", strlen(arr));
//	printf("%d\n", sizeof(arr));//1,2,4,5,\0
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };
//	int arr1[20] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	printf("%d\n", sizeof(int[2]));
//	return 0;
//}
//sizeof是一个操作符
//是用来计算变量(类型)所占的内存空间的大小
//不关注内存中存放的具体内容
//但是字节
//strlen是库函数，是专门求字符串长度的，只能针对字符串
//从参数给定的地址向后一直找\0，统计\0之前出现的字符

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d", sizeof(str), strlen(str));
//	//10 sizeof(str):[h,e,l,l,o, ,b,i,t,\0]
//	// 9 strlen(str):[h,e,l,l,o, ,b,i,t]
//
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	//两个数组的长度不同
//	//acX为[a,b,c,d,e,f,g,\0]
//	//acY为[a,b,c,d,e,f,g]
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换
void swap(int* arr1, int* arr2,int len)
{
	int i = 0;
	for (i = 0;i < len;i++)
	{
		int temp = *arr1;
		*arr1 = *arr2;
		*arr2 = temp;
		arr1++;
		arr2++;
	}
}

void init(int* arr,int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		*arr = 0;
		arr++;
	}
}

void print(int* arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d\n", *arr);
		arr++;
	}
}

void reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	swap(arr1, arr2, len);
	int i = 0;
	//init(arr1, len);
	reverse(arr1, len);
	print(arr1, len);
	/*for (i = 0; i < len; i++)
	{
		printf("%d\n", arr1[i]);
	}*/

	//创建整型数组，完成对数组的操作
	//实现函数init() 初始化数组为全零
	//实现print() 打印数组的每一个元素
	//实现reverse() 函数完成数组元素的逆置。

}