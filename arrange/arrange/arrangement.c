 #include <stdio.h>

int main()
{
    int n, m;
     //读取学生人数n和课程数m
    scanf("%d %d", &n, &m);

     //存储成绩的二维数组，n个学生，m门课
    int scores[30][5];  // 最大n=30, m=5

     //读取所有学生的成绩
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &scores[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\n", scores[i][j]);
        }
    }


    // 计算并输出每门课的平均成绩
    for (int j = 0; j < m; j++) 
    {  // 遍历每门课
        double sum = 0.0;

        // 计算该门课的总分
        for (int i = 0; i < n; i++)
        {  // 遍历所有学生
            sum += scores[i][j];
        }

        // 计算平均成绩并输出（保留一位小数）
        printf("%.1f\n", sum / n);
    }

    return 0;
}