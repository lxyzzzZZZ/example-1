//game.h
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ӡ����
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
//��ʼ������
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
//�������
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����������:");
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
				printf("���������������������:");
			}
		}
		printf("���������������������:");
	}
}
//��������
int ComputerMove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�����жϵ�����һ���ܷ�Ӯ
	//�ж���
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
	//�ж���
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
		//�ж϶Խ���
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
//�ж������һ���Ƿ�Ӯ���ǵĻ�����������һ����·
	//�ж���
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
	//�ж���
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
	//�ж϶Խ���
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
//��������δִ�У����ж������м�λ���Ƿ������ӣ��ǵĻ����������Ľ�֮һ����Ļ����������м�λ��
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
	//��������䶼δִ�У����������
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
//�ж������Ƿ�����
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
//�ж��䣬Ӯ��ƽ��
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
}//��Ϸ����
void game()
{
	char board[ROW][COL] = { 0 };
	char ret = '0';
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	do
	{
		printf("�����\n");
		PlayMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		if (IsWin(board, ROW, COL) != ' ')
		{
			break;
		}
		printf("������\n");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);

	} while (ret == ' ');
	if ('d' == IsWin(board, ROW, COL))
	{
		printf("ƽ��\n");
	}
	if ('O' == IsWin(board, ROW, COL))
	{
		printf("����Ӯ��!\n");
	}
	if ('X' == IsWin(board, ROW, COL))
	{
		printf("��ϲ��!��Ӯ��!\n");
	}
}