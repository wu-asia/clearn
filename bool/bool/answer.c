//#include <stdio.h>
//long long factorial(int n)
//{
//    long long res;
//    for (int i = 1; i <= n; i++)
//    {
//        res *= i;
//    }
//    return res;
//}
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    int found = 0;
//    for (int n = 10; n <= 100; n++)
//    {
//        if (n % 3 == a && n % 5 == b && n % 7 == c) {
//            printf("%d\n", n);
//            found = 1;
//            break;
//        }
//    }
//
//    if (!found) {
//        printf("No answer\n");
//    }
//
//    return 0;
//}