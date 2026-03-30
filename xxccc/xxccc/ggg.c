//////#include <stdio.h>
//////
//////int main() {
//////    int i, j, k;
//////    int n = 7; // 菱形的半高，上半部分共7行
//////
//////    // 打印上半部分（包括中间行）
//////    for (i = 1; i <= n; i++) {
//////        // 打印空格
//////        for (j = 0; j < n - i; j++) {
//////            printf(" ");
//////        }
//////        // 打印星号
//////        for (k = 0; k < 2 * i - 1; k++) {
//////            printf("*");
//////        }
//////        printf("\n");
//////    }
//////
//////    // 打印下半部分
//////    for (i = n - 1; i >= 1; i--) {
//////        // 打印空格
//////        for (j = 0; j < n - i; j++) {
//////            printf(" ");
//////        }
//////        // 打印星号
//////        for (k = 0; k < 2 * i - 1; k++) {
//////            printf("*");
//////        }
//////        printf("\n");
//////    }
//////
//////    return 0;
//////}
////
////#include <stdio.h>
////
////int main() {
////    printf("1-100之间所有3的倍数的数字有：\n");
////    for (int i = 3; i <= 100; i += 3) {
////        printf("%d ", i);
////    }
////    printf("\n");
////    return 0;
////}
//
//#include <stdio.h>
//
//int main() {
//    int a, b, c, temp;
//    printf("请输入三个整数：");
//    scanf("%d %d %d", &a, &b, &c);
//
//    // 保证 a 是最大的
//    if (a < b) {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a < c) {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    // 保证 b 是中间的，c 是最小的
//    if (b < c) {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//
//    printf("从大到小输出：%d %d %d\n", a, b, c);
//    return 0;
//}