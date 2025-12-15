#include"game.h"

void menu()
{
	printf("1 play\n");
	printf("2 exit\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查的雷的信息
	//初始化数组的内容为指定的内容
	//mine 数组在没有不知雷的时候，都是'0'
	IntiBoard(mine, ROWS, COLS,'0');
	//show 数组在没有排查雷的时候，都是'*'
	IntiBoard(show, ROWS, COLS,'*');
	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
	//DisplayBoard(show, ROW, COL);
}
int main()
{
	//设置随机数的生成
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷\n");
			game();//
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}