#pragma once
#include<stdio.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

void IntiBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayAMove(char board[ROW][COL], int row, int col);

void PlayBMove(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);

//玩家移动
void PlayerMove(char arr[ROW][COL], int row, int col);
//电脑移动
void ComputerMove(char arr[ROW][COL], int row, int col);
