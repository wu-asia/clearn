#include"game.h"

void InitiBoard(char board[ROWS][COLS], int rows, int cols,char set)
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

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_MODE;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
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

//标记功能
void SignMine(char show[ROWS][COLS], int row, int col)
{
	
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("Enter the coordinate which you want to sign:>");
		scanf("%d %d", &x, &y);
		if (show[x][y] == '*')
		{
			show[x][y] = '$';
		}
		else if (show[x][y] == '$')
		{
			show[x][y] = '*';
		}
		else
		{
			printf("Your coordinate has been sweeped\n");
			break;
		}
	}
}

 
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	char flag;
	int win = 0;//find the count of the non-mine
	
	if (flag == 's')
	{
		SignMine(show, row, col);
	}
	else if (flag == 'p')
	{
		while (win < row * col * EASY_MODE)
		{

			printf("Enter your coordinate:>");
			scanf("%d %d", &x, &y);

			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("This coordinate has been sweeped, it can't be sweeped again!\n");
				}
				else
				{
					if (mine[x][y] == '0')//If it is not a mine
					{
						win++;
						printf("number:%d\n", get_mine_count(mine, x, y));
						show[x][y] = get_mine_count(mine, x, y) + '0';

						DisplayBoard(show, row, col);
					}
					else
					{
						printf("You are died\n");
						DisplayBoard(mine, row, col);
						break;
					}
				}

			}
			else
			{
				printf("Your coodinate is worng\n");
			}
		}
		if (win == row * col * EASY_MODE)
		{
			printf("congratulation, you are win\n");
			DisplayBoard(show, row, col);
		}

	}
}


//点开一片的功能
//当排查x,y坐标的时候
//1.该坐标不是雷
//2.该坐标周围没有雷
//3.该坐标没有被排查过
