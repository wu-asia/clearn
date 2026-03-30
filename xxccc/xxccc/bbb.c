//#include <stdio.h>
//
//int main() {
//    int i;
//    double sum = 0.0; // 用 double 类型保证精度
//
//    for (i = 1; i <= 100; i++) {
//        if (i % 2 == 1) {
//            sum += 1.0 / i; // 奇数项为正
//        }
//        else {
//            sum -= 1.0 / i; // 偶数项为负
//        }
//    }
//
//    printf("结果为: %.6f\n", sum); // 打印结果，保留6位小数
//    return 0;
//}