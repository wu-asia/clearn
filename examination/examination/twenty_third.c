/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：一个3×5的整数矩阵，输出其中最大值max、最小值min和它们各自的下标。

-------------------------------------------------------*/
#include <stdio.h>
void wwjt();

int min, minl, minh, max, maxl, maxh;

void fun(int a[3][5], int row, int col)
{
    int i, j;

    /**********Program**********/



    /**********  End  **********/
}

int main()
{
    int  a[3][5] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
    fun(a, 3, 5);
    printf("最大值=%d，下标：%d行，%d列\n", max, maxl, maxh);
    printf("最小值=%d，下标：%d行，%d列\n", min, minl, minh);
    wwjt();
    return 0;
}




void wwjt()
{

    FILE* IN, * OUT;
    int i, j;
    int a[3][5], row = 3, col = 5;
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
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            fscanf(IN, "%d", &a[i][j]);
    fun(a, row, col);
    fprintf(OUT, "%d\n", max + minl + maxh);
    fprintf(OUT, "%d\n", min + maxl + minh);
    fclose(IN);
    fclose(OUT);
}