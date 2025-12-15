#include"game.h"

void menu()
{
	printf("0 exit\n");
	printf("1 play\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitiBoard(mine, ROWS, COLS, '0');
	InitiBoard(show, ROWS, COLS, '*');
	
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Enter a number:>");
		
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
			printf("The entered number is wrong, enter it again\n");
			break;
		}
	} while (input);




	return 0;
}
