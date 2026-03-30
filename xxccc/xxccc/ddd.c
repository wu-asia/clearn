//#include <stdio.h>
//#include <math.h> // 为了使用 sqrt() 函数
//
//int main() {
//    int n, i, flag;
//    int start = 100, end = 200;
//
//    printf("%d到%d之间的素数有：\n", start, end);
//
//    for (n = start; n <= end; n++) {
//        // 小于等于1的数不是素数
//        if (n <= 1) {
//            continue;
//        }
//
//        flag = 1; // 假设n是素数
//
//        // 检查从2到sqrt(n)是否能整除n
//        for (i = 2; i <= sqrt(n); i++) {
//            if (n % i == 0) {
//                flag = 0; // 如果能整除，则n不是素数
//                break;
//            }
//        }
//
//        if (flag == 1) {
//            printf("%d ", n);
//        }
//    }
//    printf("\n");
//    return 0;
//}