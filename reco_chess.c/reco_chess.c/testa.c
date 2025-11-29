#include"gamea.h"

void menu()
{
	printf("*****************************\n");
	printf("***********0 eixt ***********\n");
	printf("***********1 play ***********\n");
	printf("*****************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		//玩家下完棋后，要判断输赢
		ret = IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		if (ret != 'C')
		{
			break;
		}
		
		ComputerMove(board, ROW, COL);
		//电脑下完棋后，也要判断输赢
		ret =IsWin(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
	}
	if (ret == '*')
	{
		printf("玩家胜利！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利！\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
}
int main()
{
	int input = 0;
	//随机生成起点
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
			printf("请重新输入:>");
			break;
		}

	} while (input);

	return 0;
}