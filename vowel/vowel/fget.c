//#include <stdio.h>
//
//int main() {
//    char buffer[100];
//    printf("请输入字符串（可包含空格）：");
//  fgets()
//    // 从标准输入读取，最多读取99个字符（留1位给\0）
//    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
//        printf("你输入的字符串是：%s", buffer);
//    }
//    else {
//        printf("读取失败或遇到文件末尾。\n");
//    }
//
//    return 0;
//}


#include <stdio.h>
#include <ctype.h>  
void uptolow(char str[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}
int main() 
{
    char str[101];  
    int counts[5] = { 0 }; 

    
    fgets(str, sizeof(str), stdin);

    
    uptolow(str, strlen(str));
          

    for (int i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'a': counts[0]++;
            break;
        case 'e': counts[1]++;
            break;
        case 'i': counts[2]++;
            break;
        case 'o': counts[3]++;
            break;
        case 'u': counts[4]++;
            break;
        }
    }
  

    
    printf("a~%d\n", counts[0]);
    printf("e~%d\n", counts[1]);
    printf("i~%d\n", counts[2]);
    printf("o~%d\n", counts[3]);
    printf("u~%d\n", counts[4]);
    
    return 0;
}