////#include <stdio.h>
////
////int main() {
////    int i, count = 0;
////    int ge, shi; // 分别存储个位和十位
////
////    for (i = 1; i <= 100; i++) {
////        ge = i % 10;       // 取个位
////        shi = i / 10 % 10; // 取十位
////
////        if (ge == 9) {
////            count++;
////        }
////        if (shi == 9) {
////            count++;
////        }
////    }
////
////    printf("数字9出现的次数为: %d\n", count);
////    return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    // 1. 使用 malloc 分配内存（不初始化）
//    int* arr_malloc = (int*)malloc(5 * sizeof(int));
//    if (arr_malloc == NULL) {
//        perror("malloc failed");
//        return 1;
//    }
//    printf("1. malloc 分配的内存（未初始化）:\n");
//    for (int i = 0; i < 5; i++) {
//        printf(" %d", arr_malloc[i]); // 输出随机值
//    }
//    printf("\n");
//
//    // 2. 使用 calloc 分配并清零内存
//    int* arr_calloc = (int*)calloc(5, sizeof(int));
//    if (arr_calloc == NULL) {
//        perror("calloc failed");
//        free(arr_malloc);
//        return 1;
//    }
//    printf("2. calloc 分配的内存（已清零）:\n");
//    for (int i = 0; i < 5; i++) {
//        printf(" %d", arr_calloc[i]); // 输出全0
//    }
//    printf("\n");
//
//    // 3. 使用 realloc 调整内存大小
//    int* arr_realloc = (int*)realloc(arr_malloc, 10 * sizeof(int));
//    if (arr_realloc == NULL) {
//        perror("realloc failed");
//        free(arr_malloc);
//        free(arr_calloc);
//        return 1;
//    }
//    printf("3. realloc 调整后，前5个元素保留:\n");
//    for (int i = 0; i < 10; i++) {
//        printf(" %d", arr_realloc[i]); // 前5个是旧值，后5个是随机值
//    }
//    printf("\n");
//
//    // 4. 释放所有内存
//    free(arr_realloc); // 释放 realloc 返回的新指针
//    free(arr_calloc);  // 释放 calloc 分配的内存
//
//    // 安全实践：释放后置空
//    arr_realloc = NULL;
//    arr_calloc = NULL;
//
//    printf("4. 所有动态内存已释放\n");
//    return 0;
//}