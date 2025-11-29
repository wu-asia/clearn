
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("***********0. exit ***********\n");
	printf("***********1. enter***********\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//初始化board函数
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int n = 1;

	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &n);
		if (n == 1)
		{
			printf("三子棋\n");
			game();
			break;
		}
		else if (n == 0)
		{
			printf("游戏结束\n");
			break;
		}

	} while (n);
	return 0;
}