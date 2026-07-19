/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求大于lim（lim小于100的整数）并且小于100的所
      有素数并放在aa数组中，该函数返回所求出素数的
      个数。

------------------------------------------------*/

#include<stdio.h>
#include<conio.h>
#define MAX 100
void  wwjt();

int fun(int lim, int aa[MAX])
{
    /**********Program**********/
    int count = 0;
    int m = 1;
    int i = 0;
    int j = 0;
    for (i = lim; i < 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                m = 0;
                break;
            }
        }
        if (m == 1)
        {
            aa[count] = i;
            count++;
        }
    }




    /**********  End  **********/
}
int main()
{
    int limit, i, sum;
    int aa[MAX];
    printf("Please input ainteger:");
    scanf("%d", &limit);
    sum = fun(limit, aa);
    printf("haohao");
    for (i = 0; i < sum; i++) {
        if (i % 10 == 0 && i != 0) printf("\n");
        printf("%5d", aa[i]);
    }
    wwjt();
    return 0;
}
void wwjt()
{
    int i, j, array[100], sum, lim;
    FILE* rf, * wf;
    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (j = 0; j <= 5; j++)
    {
        fscanf(rf, "%d", &lim);
        sum = fun(lim, array);
        for (i = 0; i < sum; i++)
            fprintf(wf, "%7d", array[i]);
        fprintf(wf, "\n");
    }
    fclose(rf);
    fclose(wf);
}