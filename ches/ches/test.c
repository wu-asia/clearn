#include"game.h"

void menu()
{
	printf("*********************\n");
	printf("****** 1 play *******\n");
	printf("****** 0 exit *******\n");
	printf("*********************\n");

}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			//printf("%c\n", ret);
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			//printf("%c\n", ret);
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
		printf("peace\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("游戏结束!\n");
			
			break;
		case 1:
			printf("三子棋!\n");
			game();
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
		

	} while (input);
	return 0;
}