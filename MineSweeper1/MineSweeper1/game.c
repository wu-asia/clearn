#include"game.h"

void InitiBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("--- Mine Sweeper---\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("--- Mine Sweeper---\n");
}

//char SetMine(char mine[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int count = EASY_COUNT;
//	while (count)
//	{
//		x = rand() % 9 + 1;
//		y = rand() % 9 + 1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			printf("%d \n", count);
//			count--;
//		}
//
//	}
//
//}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % ROW + 1;
		y = rand() % ROW + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			
			count--;
		}
		/*else
		{
			printf("helilo\n");
		}*/
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	/*int i = 0;
	int j = 0;
	char sum = '0';
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum += mine[x + i][y + j];
		}
	}
	return (sum - 8 * '0');*/

	return ((mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]) - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("Enter your coordinate:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("Sorry, you are died\n");
			}
			else
			{
				show[x][y] = get_mine_count(mine, x, y) + '0';
				DisplayBoard(show, row, col);
			}
		}
	}
}
