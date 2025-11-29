#include"game.h"

void menu()
{
	printf("************************************************\n");
	printf("*************** 1 play   0 exit   **************\n");
	printf("*************** s single d double **************\n");
	printf("***********e end(while the game begins)*********\n");
}
char board[ROW][COL] = { 0 };
char ret = 0;
void gameD()
{
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayAMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		PlayBMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("*方胜利\n");
	}
	else if (ret == '#')
	{
		printf("#方胜利\n");
	}
	else
	{
		printf("平局\n");
	}
}

void gameS()
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
		ret = IsWin(board, ROW, COL);
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
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
}
int main()
{

	int input = 0;
	char income = '0';
	do
	{

		menu();
		printf("请输入数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			do
			{
				menu();
				printf("请选择单人或双人:>\n");
				scanf("%c", &income);
				switch (income)
				{

				case 'd':
						gameD();
						break;
				case 's':
					gameS();
					break;
				case 'e':
					input = 0;
					goto end;
					break;
				default:
					printf("请重新输入！\n");
					break;
				}
			} while (input == 1);
			break;
		end: case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}

	} while (input);
	return 0;
}