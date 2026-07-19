//#include<stdio.h>
//
//int main()
//{
//	/*{
//		int i, j, sum;
//		for (i = 3; i >= 1; i--)
//		{
//			sum = 0;
//			for (j = 1; j <= i; j++) sum += i * j;
//		}
//		printf("%d\n", sum);
//	}*/
//	char s[] = "123";
//	char* p;
//	p = s;
//	printf("%c%c%c\n", *p++, *p++, *p++);
//	return 0;
//}
//#include <string.h>
//#include<stdio.h>
//#include<stdlib.h>
//int find_replace(char s1[], char s2[], char s3[])
//{
//	int i, j, k, t = 0; char temp[80];
//	if (s1[0] == '\0' || s2[0] == '\0')return t;
//	for (i = 0; s1[i] != '\0'; i++)
//	{
//		j = i; k = 0;
//		while (s1[j] == s2[k] && s2[k] != '\0')
//		{
//			j++; k++;
//		}
//		if (s2[k] == '\0')
//		{
//			strcpy(temp, &s1[j]); strcpy(&s1[i],s3);
//			i = i + strlen(s3);
//			strcat(s1, temp);
//			t = 1;
//		}
//	}
//}
//void main() 
//{
//	/*char line[80] = "This is a test program and a test data.";
//	char substr1[10] = "test", substr2[10] = "actual";
//	int k;
//	k = find_replace(line, substr1, substr2);
//	if (k)puts(line);
//	else printf("not found\n");*/
//	int a, b;
//	printf("%d\n", (a = 5, b = 2, a > b ? a++ : b++, a + b));
//}
//
#include<stdio.h>

int main()
{
	int a = 3, b = 4, c = 5, t = 99;
	if (b < a && a < c)t = a; a = c; c = t;
	if (a < c && b < c)t = b; b = a; a = t;
	printf("%d %d %d\n", a, b, c);
	return 0;
}