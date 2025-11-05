//#include <stdio.h>
//
//int main() {
//    // 分别假设 A、B、C、D 做了好事，用 1 表示做了好事，0 表示没做
//    int doer;
//    for (doer = 0; doer < 4; doer++) {
//        // 定义四个变量来表示每个人说的话是真是假，1 为真，0 为假
//        int statement_A, statement_B, statement_C, statement_D;
//
//        // 根据假设判断每个人说的话的真假
//        // A说：不是我。如果doer不是A（即doer != 0），则A说的是真话
//        statement_A = (doer != 0);
//        // B说：是C。如果doer是C（即doer == 2），则B说的是真话
//        statement_B = (doer == 2);
//        // C说：是D。如果doer是D（即doer == 3），则C说的是真话
//        statement_C = (doer == 3);
//        // D说：C胡说。如果C说的是假的（即doer != 3），则D说的是真话
//        statement_D = (doer != 3);
//
//        // 统计说真话的人数
//        int true_count = statement_A + statement_B + statement_C + statement_D;
//
//        // 如果说真话的人数是 3，说明当前假设的做好事的人是正确的
//        if (true_count == 3) {
//            switch (doer) {
//            case 0:
//                printf("做了好事的人是 A\n");
//                break;
//            case 1:
//                printf("做了好事的人是 B\n");
//                break;
//            case 2:
//                printf("做了好事的人是 C\n");
//                break;
//            case 3:
//                printf("做了好事的人是 D\n");
//                break;
//            }
//            break;
//        }
//    }
//
//    return 0;
//}