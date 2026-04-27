//#include<stdio.h>
//#include<string.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char email[] = "zpw@bitejiuyeke.com";
//	char substr[] = "bitejiuyeke";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//
//	}
//	return 0;
//}
//int main()
//{
//	//非常重要的一个阶段
//	//联系学生，非常的可惜，都是非常的重要，你现在到底有那些问题
//	//每一位同学都，几千名同学，相信学长学姐的建议，在公众号上面，
//	//你们的这些建议都非常重要，应该要划分这种时间，哪里做的还是不足。
//	//一天都，我真的是非常痛心，给别人做一些项目，非常自信的，国外留学生，
//	//帝国理工学院，在比特学习的技术，杭锅，去。
//	//知道我们每一个工学都要变的十分优秀
//	//我们这里有一个邮箱，我们的邮箱，给出我们的substr
//	//优良而参数，第一个是char*,char*。在长的字符串里找，返回的是char*
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	int ret = strncmp(arr1, arr2, 2);
//	printf("%d\n", ret);
//	if (ret == 0)
//		printf("=\n");
//	else if (ret < 0)
//		printf("<\n");
//	else
//		printf(">\n");
//}
//
//#include<stdio.h>
//#include<string.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = s1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char email[] = "wuasia2007@hotmail.com";
//	char substr[] = "hotmail";
//	char* ret = my_strstr(email, substr);
//	printf("%s\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	const char* sep = "@.";
//	char email[] = "zhangpengwei@bitejiuueke.com.com@woc";
//	char cp[60] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(email, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret = strtok(cp, sep);
//	printf("%s\n", ret);
//	while (ret != NULL)
//	{
//		ret = strtok(NULL, sep);
//		printf("%s\n", ret);
//	}*/
//	
//	/*ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, ret);
//	printf("%s\n", ret);*/
//	
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>
#include<Windows.h>
#include<math.h>
#include<ctype.h>

int main()
{
	//unsigned int a = 0x1234;
	////0x00001234
	////00 00 12 34
	//unsigned char b = *(unsigned char*)&a;
	//return 0;

	float f = 3.141592658;
	printf("%f\n", f);
}
//int main()
//{
//	unsigned char a = 200;
//	//00000000 00000000 00000000 11001000
//	//11001000
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100
//	//01100100
//	unsigned char c = 0;
//	c = a + b;
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100
//	//00101100
//	printf("%d %d", a + b, c);
//	//300
//	//44
//}
//int main()
//{
//	unsigned char a = 200;
//	//00000000 00000000 00000000 11001000
//	//截断
//	//11001000
//
//	unsigned char b = 100;
//	//00000000 00000000 00000001 00101100
//	//00101100
//
//	//00101100
//	//11001000
//	//11110100
//	//244
//
//	//11111111 11111111 11111111 11001000
//	//00000000 00000000 00000000 00101100
//	//11111111 11111111 11111111 11101100
//	//截断
//	//11101100
//	//11111111 11111111 11111111 11101100
//	//4294967276
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	//244
//	//4294967276
//}

/*KiKi学习了循环，BoBolink老师给他除了一系列打印图案的联系，
该任务是打印用“*”组成的带空格的之家三角形团。
输如描述：多组输入，一个整数（2~20），
表示直角三角形执教变得长度，即“*”的数量，
也表示输出行数。
输出描述：
针对每行输入，输出用“*”组成的对应长度的直角三角形，
每个“*”后面有一个空格
*/
//
//int main()
//{
//	int row = 5;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row; j++)
//		{
//			if (j >= row - i - 1)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}
// 
// 

//#include<stdio.h>
//
//    int main()
//    {
//        int n = 0;
//        while (scanf("%d", &n) == 1)
//        {
//            int i = 0;
//            int j = 0;
//            for (i = 1; i <= n; i++)
//            {
//                for (j = 1; j <= n; j++)
//                {
//                    if (j <= n - i)
//                    {
//                        printf(" ");
//                    }
//                    else
//                    {
//                        printf("* ");
//                    }
//
//                }
//                printf("\n");
//            }
//
//        }
//
//        return 0;
//    }
   
//int change(long long num)
//{
//	if (num <= 9 && num >= 0 && num % 2 == 0)
//	{
//		return 0;
//	}
//	else if (num <= 9 && num >= 0 && num % 2 == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return change(num % 10) * 10 + change(num / 10);
//	}
//}

//int change(int num)
//{
//	int sum = 0;
//	int i = 0;
//	
//	while (num)
//	{
//		int bit = num % 10;
//		if (bit % 2 == 0)
//			bit = 0;
//		else
//			bit = 1;
//		sum += bit * pow(10, i);
//		i++;
//		num /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 131;
//	int ret = change(num);
//	printf("%d\n", ret);
//}
/*小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数字，
想把每一位的数组边长0或1，如果某以为是技术，就把他变成1，如果是偶数，
那么就把它变成0，请你回答他最后得到的数是多少
输入描述：
输入包含一个整数（0<=n<=10^9)
输出描述：
输入一个整数，即为小乐乐修改后得到的数字
*/
//int main()
//{
//	/*int num = 5;
//	printf("%d\n", num & (num - 1));*/
//	return 0;
//}
//
//int main()
//{
//	/*int arr[] = { 1,3,4,5 };
//	int arr1[] = { 1,2,3 };
//	int ret = memcmp(arr1, arr, 12);
//	printf("%d\n", ret);*/
//	/*char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);*/
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//		
//	}
//	else
//	{
//		
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//		
//	}
//	return ret;
//}
//
//void test1()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//my_memmove(arr + 2, arr, 16);
//	my_memmove(arr, arr + 2, 16);
//}
////从后向前如何拷贝？呢从后向前靠，无非是其实位置跳过二十个字节后就是
////依然是放在这是我么强制转换，十九减减，那这里你们错了，个我一个错误的
//int main()
//{
//	test1();
//	return 0;
//}
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while
//}
//
//void* my_memcpy(void* dest, void* soc, size_t num)
//{
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)soc;
//		((char*)dest)++;
//		((char*)soc)++;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr, 20);
//}
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1 = str1;
//	char* s2 = str2;
//	char* p = str1;
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str[] = "nihao@hello.com";
//	char substr[] = "hello";
//	char* ret = my_strstr(str, substr);
//	printf("%s\n", ret);
//	return 0;
//}
//void* my_memcpy(void* dest, const void* soc, size_t num)
//{
//	assert(dest && soc);
//	void* ret = dest;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)soc;
//		((char*)dest)++;
//		((char*)soc)++;
//	}
//	return ret;
//}
//void* my_memcpy(void* dest, const void* soc, size_t num)
//{
//	assert(dest && soc);
//	void* ret = dest;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)soc;
//		dest = (char*)dest + 1;
//		soc = (char*)soc + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 24);/**/
//
//	return 0;
//}
//
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));*/
//	FILE* pf = fopen("he.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}