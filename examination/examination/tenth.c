/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：用函数求fibonacci数列前n项的和。
说明：fibonacci数列为数列的第一项值为1，第二项值也
      为1，从第三项开始，每一项均为其前面相邻两项
      的和。
例如：当n=28时，运行结果：sum=832039

------------------------------------------------*/

#include <stdio.h>
void  wwjt();

long sum(int n)
{
    /**********Program**********/






    /**********  End  **********/
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("sum=%ld\n", sum(n));
    wwjt();
    return 0;
}

void wwjt()
{
    FILE* IN, * OUT;
    int n;
    int i[2];
    long int o;
    IN = fopen("in371.dat", "r");
    if (IN == NULL)
    {
        printf("Read FILE Error");
    }
    OUT = fopen("out.dat", "w");
    if (OUT == NULL)
    {
        printf("Write FILE Error");
    }

    for (n = 0; n < 2; n++)
    {
        fscanf(IN, "%d", &i[n]);
        o = sum(i[n]);
        fprintf(OUT, "%ld\n", o);
    }

    fclose(IN);
    fclose(OUT);
}