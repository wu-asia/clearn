/*------------------------------------------------------
【程序改错】
--------------------------------------------------------

功能：读入一个整数k(2≤k≤10000)，打印它的所有质因子（即
      所有为素数的因子）。
例如：若输入整数：2310，则应输出：2、3、5、7、11。
      请改正程序中的语法错误，使程序能得出正确的结果。

------------------------------------------------------*/

#include "conio.h"
#include <stdio.h>

isPrime(int n)
{
    int i, m;
    m = 1;
    for (i = 2; i < n; i++)
        if (n % i)
        {
            m = 0;
            break;
        }
    return  m;
}

int main()
{

    int j, k;
    printf("\nPlease enter an integer number between 2 and 10000: ");
    scanf("%d", &k);
    printf("\n\nThe prime factor(s) of %d is( are ):", k);
    for (j = 2; j <= k; j++)
        if ((!(k % j)) && (isPrime(j)))  printf("\n %4d", j);
    printf("\n");
    return 0;
}