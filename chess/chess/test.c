#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*********** 1 play *********\n");
	printf("*********** 0 exit *********\n");
	printf("****************************\n");
}
char board[ROW][COL] = { 0 };
void game()
{
	IntiBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
}
int main()
{
	
	int input;
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
		default:
			printf("输入错误，请重新输入！\n");
		}

	} while (input);
	return 0;
}