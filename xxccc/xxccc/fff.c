//////#include <stdio.h>
//////
//////int main() {
//////    int a, b, temp;
//////
//////    printf("请输入两个整数: ");
//////    scanf("%d %d", &a, &b);
//////
//////    // 辗转相除法
//////    while (b != 0) {
//////        temp = a % b;
//////        a = b;
//////        b = temp;
//////    }
//////
//////    printf("最大公约数是: %d\n", a);
//////    return 0;
//////}
//////
//////#include <stdio.h>
//////
//////// 写法一：计数器法（直观易懂）
//////size_t my_strlen_count(const char* str) {
//////    // 检查空指针
//////    if (str == NULL) {
//////        return 0;
//////    }
//////    size_t count = 0;
//////    // 遍历字符串直到遇到结束符 '\0'
//////    while (*str != '\0') {
//////        count++;
//////        str++;
//////    }
//////    return count;
//////}
//////
//////// 写法二：指针差法（更高效，利用指针运算）
//////size_t my_strlen_ptr(const char* str) {
//////    if (str == NULL) {
//////        return 0;
//////    }
//////    // 保存字符串起始地址
//////    const char* start = str;
//////    // 移动指针到字符串末尾
//////    while (*str != '\0') {
//////        str++;
//////    }
//////    // 两个指针相减得到字符个数
//////    return str - start;
//////}
//////
//////// 测试代码
//////int main() {
//////    const char* test1 = "Hello, World!";
//////    
//////    printf("测试字符串 \"%s\":\n", test1);
//////    printf("my_strlen_count: %zu\n", my_strlen_count(test1));
//////  
//////
//////
//////    return 0;
//////}
////
////#include <stdio.h>
////#include <assert.h> // 用于断言
////
////// 模拟实现 strcpy
////// 参数:
//////   dest: 目标字符串的地址（必须足够大以容纳源字符串）
//////   src:  源字符串的地址
////// 返回值:
//////   返回目标字符串的起始地址
////char* my_strcpy(char* dest, const char* src) {
////    // 1. 断言检查，确保传入的指针不为空
////    assert(dest != NULL);
////    assert(src != NULL);
////
////    // 2. 保存目标字符串的起始地址，用于返回
////    char* start = dest;
////
////    // 3. 逐字节拷贝，直到遇到 '\0'
////    while ((*dest++ = *src++)) {
////        // 空循环体，拷贝操作在条件判断中完成
////        // 等价于:
////        // *dest = *src;
////        // dest++;
////        // src++;
////    }
////
////    // 4. 返回目标字符串的起始地址
////    return start;
////}
////
////// 测试代码
////int main() {
////    char str1[20] = "Hello";
////    char str2[20] = { 0 };
////
////    printf("拷贝前: str1 = \"%s\", str2 = \"%s\"\n", str1, str2);
////
////    my_strcpy(str2, str1);
////
////    printf("拷贝后: str1 = \"%s\", str2 = \"%s\"\n", str1, str2);
////
////    // 测试空字符串
////    char empty_dest[10] = "Original";
////    my_strcpy(empty_dest, "");
////    printf("拷贝空字符串后: empty_dest = \"%s\"\n", empty_dest);
////
////    return 0;
////}
//
//
//#include <stdio.h>
//#include <assert.h>
//
//// 模拟实现 strcat
//// 参数:
////   dest: 目标字符串缓冲区，必须足够大以容纳拼接后的结果
////   src:  要追加到目标字符串末尾的源字符串
//// 返回值:
////   返回目标字符串的起始地址
//char* my_strcat(char* dest, const char* src) {
//    // 1. 断言检查，确保传入的指针不为空
//    assert(dest != NULL);
//    assert(src != NULL);
//
//    // 2. 保存目标字符串的起始地址，用于返回
//    char* start = dest;
//
//    // 3. 移动指针到 dest 字符串的末尾（找到 '\0'）
//    while (*dest != '\0') {
//        dest++;
//    }
//
//    // 4. 从 dest 的末尾开始，将 src 的内容逐个拷贝过去
//    while ((*dest++ = *src++)) {
//        // 空循环体，拷贝操作在条件判断中完成
//        // 当拷贝到 '\0' 时，循环终止
//    }
//
//    // 5. 返回目标字符串的起始地址
//    return start;
//}
//
//// 测试代码
//int main() {
//    char str1[30] = "Hello, ";
//    char str2[] = "World!";
//
//    printf("拼接前: str1 = \"%s\"\n", str1);
//
//    my_strcat(str1, str2);
//
//    printf("拼接后: str1 = \"%s\"\n", str1); // 输出 "Hello, World!"
//
//    // 测试追加空字符串
//    char str3[30] = "Test";
//    my_strcat(str3, "");
//    printf("追加空字符串后: str3 = \"%s\"\n", str3); // 输出 "Test"
//
//    return 0;
//}