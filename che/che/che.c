#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
//初始化棋盘
void IntiBoard(char arr[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char arr[ROW][COL], int row, int col);
//玩家移动
void PlayerMove(char arr[ROW][COL], int row, int col);
//电脑移动
void ComputerMove(char arr[ROW][COL], int row, int col);
//判断输赢
char IsWin(char arr[ROW][COL], int row, int col);
//判断是否满格
int IsFull(char arr[ROW][COL], int row, int col);



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
//平局 ?- 'Q'
//继续 ?- 'C'

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
		printf("%c\n", ret);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		//电脑下完棋后，也要判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
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