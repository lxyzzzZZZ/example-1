//game.h
#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
//������
void SetMine(char arr[ROWS][COLS], int row, int col, int count);
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//չ��
void Openup_Mine(char mine[ROWS][COLS], int x, int y, int* p, char show[ROWS][COLS]);
//������Χ����
int GetMineCount(char mine[ROWS][COLS], int x, int y);
#endif //__GAME_H__














