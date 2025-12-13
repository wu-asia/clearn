#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 60
#define HEIGHT 20
#define INIT_LENGTH 3

// 方向枚举
enum DIRECTION { STOP = 0, LEFT, RIGHT, UP, DOWN };

// 蛇的结构体
typedef struct {
    int x;
    int y;
} Segment;

Segment snake[100]; // 蛇身体数组
Segment food;       // 食物位置
int length;         // 蛇当前长度
enum DIRECTION dir; // 当前移动方向
int score;          // 游戏得分
int gameOver;       // 游戏结束标志

// 初始化游戏
void Setup() {
    gameOver = 0;
    dir = STOP;
    length = INIT_LENGTH;
    score = 0;

    // 初始化蛇身（居中水平放置）
    for (int i = 0; i < length; i++) {
        snake[i].x = WIDTH / 2 - i;
        snake[i].y = HEIGHT / 2;
    }

    // 生成随机食物
    srand(time(NULL));
    food.x = rand() % (WIDTH - 2) + 1;
    food.y = rand() % (HEIGHT - 2) + 1;
}

// 绘制游戏界面
void Draw() {
    system("cls"); // 清屏

    // 绘制上边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    // 绘制游戏区域
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // 绘制左边界
            if (x == 0) printf("#");

            // 绘制蛇头
            if (x == snake[0].x && y == snake[0].y)
                printf("O");
            // 绘制蛇身
            else if (x == food.x && y == food.y)
                printf("F"); // 食物
            else {
                int isBody = 0;
                for (int k = 1; k < length; k++) {
                    if (snake[k].x == x && snake[k].y == y) {
                        printf("o"); // 蛇身
                        isBody = 1;
                        break;
                    }
                }
                if (!isBody) printf(" ");
            }

            // 绘制右边界
            if (x == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    // 绘制下边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");

    // 显示分数
    printf("Score: %d\n", score);
}

// 处理键盘输入
void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a': if (dir != RIGHT) dir = LEFT;  break;
        case 'd': if (dir != LEFT)  dir = RIGHT; break;
        case 'w': if (dir != DOWN)  dir = UP;    break;
        case 's': if (dir != UP)    dir = DOWN;  break;
        case 'x': gameOver = 1; break;
        }
    }
}

// 更新游戏状态
void Logic() {
    // 保存蛇尾位置（用于可能的增长）
    Segment prevTail = snake[length - 1];

    // 移动蛇身（从尾部向前更新）
    for (int i = length - 1; i > 0; i--) {
        snake[i] = snake[i - 1];
    }

    // 根据方向移动蛇头
    switch (dir) {
    case LEFT:  snake[0].x--; break;
    case RIGHT: snake[0].x++; break;
    case UP:    snake[0].y--; break;
    case DOWN:  snake[0].y++; break;
    }

    // 检查是否吃到食物
    if (snake[0].x == food.x && snake[0].y == food.y) {
        score += 10;
        length++;
        snake[length - 1] = prevTail; // 增加蛇身长度

        // 生成新食物
        int valid;
        do {
            valid = 1;
            food.x = rand() % (WIDTH - 2) + 1;
            food.y = rand() % (HEIGHT - 2) + 1;

            // 确保食物不会出现在蛇身上
            for (int i = 0; i < length; i++) {
                if (food.x == snake[i].x && food.y == snake[i].y) {
                    valid = 0;
                    break;
                }
            }
        } while (!valid);
    }

    // 检查撞墙
    if (snake[0].x <= 0 || snake[0].x >= WIDTH - 1 ||
        snake[0].y < 0 || snake[0].y >= HEIGHT) {
        gameOver = 1;
    }

    // 检查撞到自己（从第2节开始检查）
    for (int i = 1; i < length; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            gameOver = 1;
            break;
        }
    }
}

int main() {
    Setup();

    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // 控制游戏速度（毫秒）
    }

    printf("\nGame Over! Final Score: %d\n", score);
    return 0;
}