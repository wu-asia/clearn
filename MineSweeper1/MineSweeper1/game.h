#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define COLS ROW + 2
#define ROWS COL + 2

#define EASY_COUNT 10

void InitiBoard(char board[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char mine[ROWS][COLS], int row, int col);

int get_mine_count(char mine[ROWS][COLS], int x, int y);

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
