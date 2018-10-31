//game.c
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化雷盘
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	memset(arr, set, rows*cols,sizeof(arr[0][0]));
}
//打印雷盘
void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < col-1; i++)
	{
		//打印列号
		printf("%d   ", i);
	}
	printf("\n");
	for (i = 1; i < row-1; i++)
	{
		//打印行号
		printf("%d   ", i);
		for (j = 1; j < col-1; j++)
		{
			printf("%c   ", arr[i][j]);
		}
		printf("\n");
	}
}
//埋雷
void SetMine(char arr[ROWS][COLS], int row, int col,int count)
{
	int x = 0;
	int y = 0;
	while (count > 0)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if ('0' == arr[x][y])
		{
			//将雷设置为符号1
			arr[x][y] = '1';
			count--;
		}
	}
}
//计算周围雷的个数
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}
//若周围没有雷，则展开一片
void Openup_Mine(char mine[ROWS][COLS], int x, int y,int* p , char show[ROWS][COLS])
{
	int i = 0;
	int j = 0;
	int count = 0;
	if ('*' == show[x][y])
	{
		(*p)++;//计算排掉的雷数
		count = GetMineCount(mine, x, y);
		if (0 == count)
		{
			show[x][y] = '0';
			for (i = -1; i < 2;i++)
			{
				for (j = -1; j < 2; j++)
				{
					if (x + i >= 1 && x + i <= ROW&&y + j >= 1 && y + j <= COL && (i != 0 || j != 0))
					{
						//若周围没雷，则遍历周围的最多八个位置，递归求出每个位置周围的雷数
						Openup_Mine(mine, x + i, y + j, p , show);
					}
				}
			}
		}
		else
		{
			//求出周围雷数，赋值于showboard
			show[x][y] = '0' + count;
		}
	}
}
//排雷并判断输赢
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{

	int count = 0;
	int x = 0;
	int y = 0;
	while (count < (ROW*COL - EASY_COUNT))
	{
		printf("请输入坐标:>");
		//玩家输入坐标
		scanf("%d %d", &x, &y);
		char ch = 0;
		while ((ch = getchar()) != '\n' && (ch != EOF))
		{
			;
		}
		//保证玩家输入位置准确
		if (x >= 1 && x <= ROW&&y  >= 1 && y <= COL&&show[x][y] == '*')
		{
			if ('1' == mine[x][y])
			{
				//判断是否为第一步排到雷
				if (0 == count)
				{
					//将雷点改变，确保第一步不会被炸死
					mine[x][y] = '0';
					SetMine(mine, x, y, 1);
					Openup_Mine(mine, x, y, &count, show);
				}
				else
				{
					printf("很遗憾你被炸死了!\n");
				    DisplayBoard(mine, ROWS, COLS);
				    return;
				}				
			}
			else
			{
				Openup_Mine(mine, x, y, &count, show);
				//未排到雷，进行展开函数
			}
			DisplayBoard(show, ROWS, COLS);
		}
		else
		{
			printf("输入错误，请重新输入!\n");
		}
	}
	//赢取游戏条件
	if (count == (ROW*COL - EASY_COUNT))
	{
		printf("恭喜你，排雷成功!\n");
	}
}
//游戏函数
void game()
{
	int count = EASY_COUNT;
	char mineboard[ROWS][COLS] = { 0 };
	char showboard[ROWS][COLS] = { 0 };
	InitBoard(mineboard, ROWS, COLS, '0');
	InitBoard(showboard, ROWS, COLS, '*');
	SetMine(mineboard, ROW, COL, count);
	DisplayBoard(showboard, ROWS, COLS);
	printf("\n");
	DisplayBoard(mineboard, ROWS, COLS);
	FindMine(mineboard, showboard, ROWS, COLS);
}