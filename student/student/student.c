#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 定义学生信息结构体
struct Student {
    char id[20];    // 学号
    char name[20];  // 姓名
    int score_eng;  // 英语成绩
    int score_c;    // C语言成绩
    int score_math; // 数学成绩
    int sum_score;  // 总分
};
// 学号查重函数：存在返回1，不存在返回0
int check_id_duplicate(const char* new_id) {
    FILE* fp = fopen("infile.txt", "r");
    if (fp == NULL) return 0;

    char temp_buf[1024];
    char existing_id[20];
    while (fgets(temp_buf, sizeof(temp_buf), fp) != NULL) {
        sscanf(temp_buf, "%s", existing_id);
        if (strcmp(existing_id, new_id) == 0) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}
// 学生信息录入函数
void input_info() {
    FILE* fp = fopen("infile.txt", "a+");
    if (fp == NULL) {
        printf("文件打开失败，无法录入信息！\n");
        return;
    }
    char flag = 'y';
    struct Student stu;
    while (flag == 'y' || flag == 'Y') {
        printf("请输入学生学号：");
        scanf("%s", stu.id);

        if (check_id_duplicate(stu.id)) {
            printf("错误：学号%s已存在，请勿重复录入！\n", stu.id);
            getchar();
            printf("是否继续添加学生信息？ y/n：");
            scanf("%c", &flag);
            continue;
        }
        printf("请输入学生姓名：");
        scanf("%s", stu.name);
        printf("请输入学生英语成绩：");
        scanf("%d", &stu.score_eng);
        printf("请输入学生C语言成绩：");
        scanf("%d", &stu.score_c);
        printf("请输入学生数学成绩：");
        scanf("%d", &stu.score_math);
        // 重新计算总分
        stu.sum_score = stu.score_eng + stu.score_c + stu.score_math;
        fprintf(fp, "%s\t%s\t%d\t%d\t%d\t%d\n",
            stu.id, stu.name, stu.score_eng,
            stu.score_c, stu.score_math, stu.sum_score);

        getchar();
        printf("是否继续添加学生信息？ y/n：");
        scanf("%c", &flag);
    }
    printf("信息录入完毕！！！\n");
    fclose(fp);
}
// 学生信息查询函数（精准匹配，修改C语言成绩相关输出）
void find_info() {
    char flag = 'y';
    while (flag == 'y' || flag == 'Y') {
        int n = 0, m = 0;
        char find_choice[5];
        char temp_buf[1024];

        FILE* fp = fopen("infile.txt", "r");
        if (fp == NULL) {
            printf("文件不存在或打开失败，无法查询信息！\n");
            return;
        }
        printf("按学号查找输入1，按姓名查找输入2：");
        scanf("%s", find_choice);
        // 按学号精准查询
        if (strcmp(find_choice, "1") == 0) {
            char find_id[20];
            printf("请输入学生学号：");
            scanf("%s", find_id);
            printf("学号\t姓名\t英语\tC语言\t数学\t总分\n"); // 表头修改
            printf("----------------------------------------\n");
            while (fgets(temp_buf, sizeof(temp_buf), fp) != NULL) {
                char read_id[20];
                sscanf(temp_buf, "%s", read_id);
                if (strcmp(read_id, find_id) == 0) {
                    printf("%s", temp_buf);
                    n++;
                }
            }
            if (n == 0) {
                printf("没有查询到该学号的学生信息！\n");
            }
        }
        // 按姓名精准查询
        else if (strcmp(find_choice, "2") == 0) {
            char find_name[20];
            printf("请输入学生姓名：");
            scanf("%s", find_name);
            printf("学号\t姓名\t英语\tC语言\t数学\t总分\n"); // 表头修改
            printf("----------------------------------------\n");
            while (fgets(temp_buf, sizeof(temp_buf), fp) != NULL) {
                char read_id[20], read_name[20];
                sscanf(temp_buf, "%s\t%s", read_id, read_name);
                if (strcmp(read_name, find_name) == 0) {
                    printf("%s", temp_buf);
                    m++;
                }
            }
            if (m == 0) {
                printf("没有查询到该姓名的学生信息！\n");
            }
        }
        else {
            printf("输入错误，请输入1或2选择查询方式！\n");
        }
        fclose(fp);
        getchar();
        printf("是否继续查询学生信息？ y/n：");
        scanf("%c", &flag);
    }
}
// 主函数
int main() {
    int menu_choice;
    while (1) {
        printf("\n===== 学生信息管理系统 =====\n");
        printf("1. 录入学生信息\n");
        printf("2. 查询学生信息\n");
        printf("3. 退出系统\n");
        printf("请输入功能编号（1-3）：");
        scanf("%d", &menu_choice);

        switch (menu_choice) {
        case 1:
            input_info();
            break;
        case 2:
            find_info();
            break;
        case 3:
            printf("已退出系统，再见！\n");
            return 0;
        default:
            printf("输入错误，请重新选择功能编号！\n");
        }
    }
}