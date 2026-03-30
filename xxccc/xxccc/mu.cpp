//#include<iostream>
//
//using namespace std;
//int n, k;
//int main()
//{
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//
//	}
//	return 0;
//}

#include <stdio.h>

// 打印一个整数的二进制表示（从最高位到最低位）
void print_binary(int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0 && i != 0) printf(" "); // 每4位加空格，方便阅读
    }
    printf("\n");
}

// 分离并打印奇数位和偶数位
void print_odd_even_bits(int num) {
    // 提取奇数位（第1、3、5...位，从0开始计数）
    int odd_bits = num & 0x55555555;
    // 提取偶数位（第0、2、4...位，从0开始计数）
    int even_bits = num & 0xAAAAAAAA;

    printf("原数的二进制: ");
    print_binary(num);

    printf("奇数位的二进制: ");
    print_binary(odd_bits);

    printf("偶数位的二进制: ");
    print_binary(even_bits);
}

int main() {
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);

    print_odd_even_bits(num);
    return 0;
}