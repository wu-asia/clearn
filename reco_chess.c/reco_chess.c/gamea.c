#include"gamea.h"

void IntiBoard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void DisplayBoard(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
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


void PlayerMove(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋:>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标范围合法判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，不能下棋\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！");
		}
	}
}

void ComputerMove(char arr[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");

	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}

}

//判断是否平局
int IsFull(char arr[ROW][COL], int row, int col)
{
	//格子满了返回 1
	//格子未满返回 0
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//玩家赢 - '*'
//电脑赢 - '#'
//平局  - 'Q'
//继续  - 'C'

char IsWin(char arr[ROW][COL], int row, int col)
{
	//行
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (arr[j][0] == arr[j][1] && arr[j][1] == arr[j][2] && arr[j][1] != ' ')
		{
			return arr[j][1];
		}

	}
	//列
	int i = 0;
	for (i = 0; i < col; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}

	}
	//对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	//平局
	if (IsFull(arr, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}