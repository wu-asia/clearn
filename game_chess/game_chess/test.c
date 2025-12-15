#include<stdio.h>
#include"game.h"

void menu()
{
	printf("0 exit\n");
	printf("1 play\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("* win\n");
	}
	else if (ret == '#')
	{
		printf("# win\n");
	}
	else
	{
		printf("平局\n");
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);

	return 0;
}