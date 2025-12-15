#include<stdio.h>
#include"game.h"
void menu()
{
	printf("0 exit\n");
	printf("1 play\n");
}

void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	
	InitiBoard(show, ROWS,COLS,'*');
	InitiBoard(mine, ROWS, COLS, '0');
	DisplayBoard(show, ROW, COL);
	
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
	

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please enter number:>");
		scanf("%d", &input);
		
		
		switch (input)
		{
		case 1:
			printf("Mine sweeper\n");
			game();
			break;
		case 0:
			printf("Exit the game\n");
			break;
		default:
			printf("Your input is worng, please enter again!\n");
			break;
		}
	} while (input);
	return 0;
}