#ifndef __GAME_H__
#define __GAME_H__

#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>

#define ROW 3
#define COL 3

void game();
void menu();
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
int ComputerMove(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);





#endif