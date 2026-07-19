/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：找出一个大于给定整数且紧随这个整数的素数，并
      作为函数值返回。

------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  wwjt();

int fun(int n)
{
    /**********Program**********/






    /**********  End  **********/

}

int main()
{
    int  m;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("\nThe result is %d\n", fun(m));
    wwjt();
    return 0;
}

void wwjt()
{
    FILE* IN, * OUT;
    int s;
    int t;
    int o;

    IN = fopen("in.dat", "r");
    if (IN == NULL)
    {
        printf("Read FILE Error");
    }
    OUT = fopen("out.dat", "w");
    if (OUT == NULL)
    {
        printf("Write FILE Error");
    }
    for (s = 1; s <= 5; s++)
    {
        fscanf(IN, "%d", &t);
        o = fun(t);
        fprintf(OUT, "%d\n", o);
    }
    fclose(IN);
    fclose(OUT);
}