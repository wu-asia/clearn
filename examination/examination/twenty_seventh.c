/*------------------------------------------------------
【程序改错】
--------------------------------------------------------

功能：求出两个非零正整数的最大公约数，并作为函数值返回。
例如：若给num1和num2分别输入49和21，则输出的最大公约数为7。

------------------------------------------------------*/
#include <stdio.h>
int fun(int a, int b)
{
    int r, t;
    if (a < b)
    {
        t = a;
        b = a;
        a = t;
    }
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a / b;
    }
    return a;
}

int main()
{
    int num1, num2, a;
    scanf("%d%d", &num1, &num2);
    a = fun(num1, num2);
    printf("the maximum common divisor is %d\n\n", a);
    return 0;
}