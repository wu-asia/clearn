//////#include <iostream>
//////#include <cmath>
//////using namespace std;
//////
//////int main() {
//////    cout << "0~100000之间的水仙花数有：" << endl;
//////
//////    for (int num = 0; num <= 100000; ++num) {
//////        // 1. 计算数字的位数
//////        int temp = num;
//////        int n = 0;
//////        while (temp != 0) {
//////            temp /= 10;
//////            n++;
//////        }
//////        // 特殊处理 0，它是 1 位数
//////        if (num == 0) n = 1;
//////
//////        // 2. 计算各位数字的 n 次方之和
//////        temp = num;
//////        int sum = 0;
//////        while (temp != 0) {
//////            int digit = temp % 10;
//////            sum += pow(digit, n);
//////            temp /= 10;
//////        }
//////
//////        // 3. 判断是否为水仙花数
//////        if (sum == num) {
//////            cout << num << " ";
//////        }
//////    }
//////    cout << endl;
//////    return 0;
//////}
////
////#include <iostream>
////
////using namespace std;
////
////
////
////int main() {
////
////    int money = 20;
////
////    int price = 1;
////
////    int empty_bottles = 0;
////
////    int total = 0;
////
////
////
////    // 初始购买
////
////    total = money / price;
////
////    empty_bottles = total;
////
////
////
////    // 循环兑换
////
////    while (empty_bottles >= 2) {
////
////        int exchange = empty_bottles / 2;
////
////        int remain = empty_bottles % 2;
////
////        total += exchange;
////
////        empty_bottles = exchange + remain;
////
////    }
////
////
////
////    cout << "总共可以喝 " << total << " 瓶汽水" << endl;
////
////    return 0;
////
////}
//
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a;
//    cout << "请输入数字a (0-9): ";
//    cin >> a;
//
//    long long sum = 0;  // 用 long long 防止溢出
//    long long term = 0; // 当前项
//
//    for (int i = 1; i <= 5; ++i) {
//        term = term * 10 + a; // 生成当前项：a, aa, aaa...
//        sum += term;
//    }
//
//    cout << "前5项之和为: " << sum << endl;
//    return 0;
//}