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