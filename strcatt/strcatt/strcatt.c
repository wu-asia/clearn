//#include <stdio.h>
//
//// 自定义字符串连接函数
//void stringcat(char* dest, const char* src) {
//    // 1. 找到dest的末尾（即'\0'的位置）
//    while (*dest != '\0') 
//    {
//        dest++;
//    }
//
//    // 2. 将src的内容逐个复制到dest末尾
//    while (*src != '\0') {
//        *dest = *src;
//        dest++;
//        src++;
//    }
//
//    // 3. 添加字符串结束符
//    *dest = '\0';
//}
//
//int main() {
//    char str1[100];  // 确保足够大的空间存放连接后的字符串
//    char str2[50];
//
//    // 输入字符串
//    printf("请输入第一个字符串: ");
//    fgets(str1, sizeof(str1), stdin);
//
//    // 去除fgets可能读取的换行符
//    for (int i = 0; str1[i] != '\0'; i++) 
//    {
//        if (str1[i] == '\n')
//        { 
// 
//            str1[i] = '\0';
//            break;
//        }
//    }
//
//    printf("请输入第二个字符串: ");
//    fgets(str2, sizeof(str2), stdin);
//
//    // 同样处理str2的换行符
//    for (int i = 0; str2[i] != '\0'; i++) 
//    {
//        if (str2[i] == '\n') 
//        {
//            str2[i] = '\0';
//            break;
//        }
//    }
//
//    // 调用自定义连接函数
//    stringcat(str1, str2);
//
//    // 输出结果
//    printf("连接后的字符串: %s\n", str1);
//
//    return 0;
//}