//#include<stdio.h>
//
//int gcd(int m, int n)
//{
//	if (m % n == 0)
//	{
//		return n;
//	}
//	else
//	{
//		
//		while (n != 0)
//		{
//			int k = m % n;
//			m = n;
//			n = k;
//		}
//		return m;
//	}
//}
//
//int lcm(int m, int n)
//{
//	return (m * n) / gcd(m, n);
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	printf("%d %d\n", gcd(m, n), lcm(m, n));
//
//	return 0;
//}

#include <stdio.h>

int main() {
    double income;
    double tax = 0;

    // 输入总收入
    scanf("%lf", &income);

    // 根据收入范围计算所得税
    switch ((int)(income / 1000)) {
    case 0:
    case 1:
    case 2:
        // 收入在 0~2999 元，税率 0%
        tax = 0;
        break;
    case 3:
    case 4:
        // 收入在 3000~4999 元，税率 3%
        tax = (income - 2999) * 0.03;
        break;
    case 5:
    case 6:
    case 7:
        // 收入在 5000~7999 元，税率 10%
        tax = (income - 4999) * 0.1 + (4999 - 2999) * 0.03;
        break;
    default:
        // 收入在 8000 以上，税率 15%
        tax = (income - 7999) * 0.15 + (7999 - 4999) * 0.1 + (4999 - 2999) * 0.03;
        break;
    }

    // 输出所得税，结果保留两位小数
    printf("%.2lf\n", tax);

    return 0;
}