#include"game.h"

void IntiBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j != col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i != row - 1)
			{
				printf("---");

				if (j != col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	while(1)
	{
		printf("请输入坐标:>");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("坐标已被占用，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	while (1)
	{
		
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	//row
	int i = 0;
	for (i = 0; i < col; i++)
	{
		if (board[i][1] == board[i][2] && board[i][2] == board[i][0] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//column
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[1][j] == board[2][j] && board[2][j] == board[0][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] & board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] & board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (IsFull(board,row,col))
	{
		//printf("%d\n", IsFull);
		return 'Q';
	}
	return 'C';
}