//game.h
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col)
			{
				printf("|");
			}
		}
		printf("\n");
		for (j = 1; j < col; j++)
		{
			printf("------");
		}
		printf("\n");		
	}
}
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//玩家落子
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请输入坐标:");
	while (1)
	{
		scanf("%d%d", &x, &y);
		char ch = 0;
		while ((ch = getchar()) != '\n' && (ch != EOF))
		{
			;
		}
		if (x > 0 && y > 0 && x <= row&&y <= col)
		{
			if (' ' == board[x-1][y-1])
			{
				board[x-1][y-1] = 'X';
				break;
			}
			else
			{
				printf("坐标输入错误，请重新输入:");
			}
		}
		printf("坐标输入错误，请重新输入:");
	}
}
//电脑落子
int ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//首先判断电脑下一步能否赢
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == 'O'&& ' ' == board[i][2])
		{
			board[i][2] = 'O';
			return 1;
		}
		if (board[i][1] == board[i][2] && board[i][1] == 'O'&& ' ' == board[i][0])
		{
			board[i][0] = 'O';
			return 1;
		}
		if (board[i][0] == board[i][2] && board[i][0] == 'O'&& ' ' == board[i][1])
		{
			board[i][1] = 'O';
			return 1;
		}

	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == 'O'&& ' ' == board[2][i])
		{
			board[2][i] = 'O';
			return 1;
		}
		if (board[1][i] == board[2][i] && board[1][i] == 'O'&& ' ' == board[0][i])
		{
			board[0][i] = 'O';
			return 0;
		}
		if (board[0][i] == board[2][i] && board[0][i] == 'O'&& ' ' == board[1][i])
		{
			board[1][i] = 'O';
			return 1;
		}
		//判断对角线
	}
	if (board[0][0] == board[1][1] && board[1][1] == 'O'&&' ' == board[2][2])
	{
		board[2][2] = 'O';
		return 1;
	}
	if (board[0][0] == board[2][2] && board[2][2] == 'O'&&' ' == board[1][1])
	{
		board[1][1] = 'O';
		return 1;
	}
	if (board[2][2] == board[1][1] && board[1][1] == 'O'&&' ' == board[0][0])
	{
		board[0][0] = 'O';
		return 1;
	}
	if (board[0][2] == board[2][0] && board[2][0] == 'O'&&' ' == board[1][1])
	{
		board[1][1] = 'O';
		return 1;
	}
	if (board[0][2] == board[1][1] && board[1][1] == 'O'&&' ' == board[2][0])
	{
		board[2][0] = 'O';
		return 1;
	}
	if (board[1][1] == board[2][0] && board[2][0] == 'O'&&' ' == board[0][2])
	{
		board[0][2] = 'O';
		return 1;
	}
//判断玩家下一步是否赢，是的话，则堵玩家下一步棋路
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == 'X'&& ' ' == board[i][2])
		{
			board[i][2] = 'O';
			return 1;
		}
		if (board[i][1] == board[i][2] && board[i][1] == 'X'&& ' ' == board[i][0])
		{
			board[i][0] = 'O';
			return 1;
		}
		if (board[i][0] == board[i][2] && board[i][0] == 'X'&& ' ' == board[i][1])
		{
			board[i][1] = 'O';
			return 1;
		}

	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == 'X'&& ' ' == board[2][i])
		{
			board[2][i] = 'O';
			return 1;
		}
		if (board[1][i] == board[2][i] && board[1][i] == 'X'&& ' ' == board[0][i])
		{
			board[0][i] = 'O';
			return 0;
		}
		if (board[0][i] == board[2][i] && board[0][i] == 'X'&& ' ' == board[1][i])
		{
			board[1][i] = 'O';
			return 1;
		}

	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == 'X'&&' ' == board[2][2])
	{
		board[2][2] = 'O';
		return 1;
	}
	if (board[0][0] == board[2][2] && board[2][2] == 'X'&&' ' == board[1][1])
	{
		board[1][1] = 'O';
		return 1;
	}
	if (board[2][2] == board[1][1] && board[1][1] == 'X'&&' ' == board[0][0])
	{
		board[0][0] = 'O';
		return 1;
	}
	if (board[0][2] == board[2][0] && board[2][0] == 'X'&&' ' == board[1][1])
	{
		board[1][1] = 'O';
		return 1;
	}
	if (board[0][2] == board[1][1] && board[1][1] == 'X'&&' ' == board[2][0])
	{
		board[2][0] = 'O';
		return 1;
	}
	if (board[1][1] == board[2][0] && board[2][0] == 'X'&&' ' == board[0][2])
	{
		board[0][2] = 'O';
		return 1;
	}
//若上述都未执行，则判断棋盘中间位置是否有落子，是的话，则落子四角之一，否的话，则落子中间位置
	if (' ' == board[1][1])
	{
		board[1][1] = 'O';
		return 1;
	}
	else
	{
		if (' ' == board[0][0])
		{
			board[0][0] = 'O';
			return 1;
		}
		if (' ' == board[0][2])
		{
			board[0][2] = 'O';
			return 0;
		}
		if (' ' == board[2][0])
		{
			board[2][0] = 'O';
			return 1;
		}
		if (' ' == board[2][2])
		{
			board[2][2] = 'O';
			return 1;
		}
	}
	//若上述语句都未执行，则随机落子
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (' ' == board[x][y])
		{
			board[x][y] = 'O';
			break;
		}
	}
}
//void CompuerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int x = rand() % 3;
//		int y = rand() % 3;
//		if (' ' == board[x][y])
//		{
//			board[x][y] = 'O';
//			break;
//		}
//	}
//}
//判断棋盘是否满了
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{		
				return 0;
			}
		}
	}
	return 1;
}
//判断输，赢，平局
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	if (1 == IsFull(board, ROW, COL))
	{
		return 'd';
	}
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{

		return board[1][1];
	}
	return ' ';
}//游戏函数
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = '0';
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	do
	{
		printf("玩家走\n");
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		if (IsWin(board, ROW, COL) != ' ')
		{
			break;
		}
		printf("电脑走\n");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);

	} while (ret == ' ');
	if ('d' == IsWin(board, ROW, COL))
	{
		printf("平局\n");
	}
	if ('O' == IsWin(board, ROW, COL))
	{
		printf("电脑赢了!\n");
	}
	if ('X' == IsWin(board, ROW, COL))
	{
		printf("恭喜你!你赢了!\n");
	}
}