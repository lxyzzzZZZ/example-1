//猜数字游戏
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Game()
{
	int num = 0 ;
	int ret = rand() % 101;
	while (1)
	{
		printf("请输入一个数:\n");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
		else if (num > ret)
		{
			printf("真遗憾，猜大了\n");
		}
		else if (num < ret)
		{
			printf("真遗憾，猜小了\n");
		}
		else
		{
			printf("输入错误！！！");
		}
	}
}
int main()
{
	int n = 0;
	srand((unsigned int)time(NULL));
	do
	{
		int n = 0;
		printf("********************************\n");
		printf("********|  1.开始游戏  |********\n");
		printf("********************************\n");
		printf("********|  0.退出游戏  |********\n");
		printf("********************************\n");
		printf("请选择:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏！！！\n");
			break;
		default:
			printf("选择错误！！！\n");
			break;
		}
	} while (n);
	system("pause");
	return 0;
}