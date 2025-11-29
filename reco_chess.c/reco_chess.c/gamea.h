#pragma once
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

