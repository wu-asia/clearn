/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：请编写fun函数程序，从键盘输入某一年，判断该年是否为
      闰年。

闰年的条件是：（1）能被4整除但不能被100整除。
              （2）能被400整除。符合任何一个条件就是闰年。
                   输入年份为整型

-------------------------------------------------------*/
#include <stdio.h>

void wwjt();

int fun(int year)
{

    /**********Program**********/


    /**********  End  **********/
}

int main()
{
    int year;

    scanf("%d", &year);

    if (fun(year) == 1)
        printf("yes");
    else
        printf("no");

    wwjt();
    return 0;
}

void wwjt()
{

    FILE* IN, * OUT;
    int j;
    int a;
    IN = fopen("in.dat", "r");
    if (IN == NULL)
    {
        printf("Please Verify The Currernt Dir..It May Be Changed");
    }
    OUT = fopen("out.dat", "w");
    if (OUT == NULL)
    {
        printf("Please Verify The Current Dir.. It May Be Changed");
    }
    for (j = 0; j < 3; j++)
    {
        fscanf(IN, "%d", &a);
        fprintf(OUT, "%d\n", fun(a));

    }

    fclose(IN);
    fclose(OUT);
}

