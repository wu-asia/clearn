////////#include <stdio.h>
////////
////////int main() {
////////    int i;
////////    double sum = 0.0; // 用 double 类型保证精度
////////
////////    for (i = 1; i <= 100; i++) {
////////        if (i % 2 == 1) {
////////            sum += 1.0 / i; // 奇数项为正
////////        }
////////        else {
////////            sum -= 1.0 / i; // 偶数项为负
////////        }
////////    }
////////
////////    printf("结果为: %.6f\n", sum); // 打印结果，保留6位小数
////////    return 0;
////////}
//////
//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////int main() {
//////    int rows = 3;
//////    int cols = 5;
//////
//////    // 1. 先为行指针数组分配内存（3个 int* 指针）
//////    int** arr = (int**)malloc(rows * sizeof(int*));
//////    if (arr == NULL) {
//////        perror("malloc failed for rows");
//////        return 1;
//////    }
//////
//////    // 2. 为每一行分配 5 个 int 的内存
//////    for (int i = 0; i < rows; i++) {
//////        arr[i] = (int*)malloc(cols * sizeof(int));
//////        if (arr[i] == NULL) {
//////            perror("malloc failed for row");
//////            // 出错时释放已分配的内存
//////            for (int j = 0; j < i; j++) {
//////                free(arr[j]);
//////            }
//////            free(arr);
//////            return 1;
//////        }
//////    }
//////
//////    // 3. 使用二维数组下标形式访问并赋值
//////    for (int i = 0; i < rows; i++) {
//////        for (int j = 0; j < cols; j++) {
//////            arr[i][j] = i * 10 + j;
//////        }
//////    }
//////
//////    // 4. 打印验证
//////    printf("3x5 二维数组内容：\n");
//////    for (int i = 0; i < rows; i++) {
//////        for (int j = 0; j < cols; j++) {
//////            printf("%2d ", arr[i][j]);
//////        }
//////        printf("\n");
//////    }
//////
//////    // 5. 释放内存（先释放每一行，再释放行指针数组）
//////    for (int i = 0; i < rows; i++) {
//////        free(arr[i]);
//////    }
//////    free(arr);
//////    arr = NULL;
//////
//////    return 0;
//////}
////
////
////#include <stdio.h>
////
////int main() {
////    int arr[10];
////    int sum = 0;
////
////    // 读取10个整数
////    for (int i = 0; i < 10; i++) {
////        scanf("%d", &arr[i]);
////        sum += arr[i];
////    }
////
////    // 计算并输出平均值（用浮点除法避免截断）
////    double avg = sum / 10.0;
////    printf("平均值 = %.2f\n", avg);
////
////    return 0;
////}
//
//#include <stdio.h>
//
//#define N 5  // 数组长度，可根据需要修改
//
//int main() {
//    int A[N] = { 1, 2, 3, 4, 5 };
//    int B[N] = { 6, 7, 8, 9, 10 };
//    int temp;
//
//    printf("交换前：\n");
//    printf("A: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", A[i]);
//    }
//    printf("\nB: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", B[i]);
//    }
//
//    // 逐个交换数组元素
//    for (int i = 0; i < N; i++) {
//        temp = A[i];
//        A[i] = B[i];
//        B[i] = temp;
//    }
//
//    printf("\n\n交换后：\n");
//    printf("A: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", A[i]);
//    }
//    printf("\nB: ");
//    for (int i = 0; i < N; i++) {
//        printf("%d ", B[i]);
//    }
//    printf("\n");
//
//    return 0;
//}