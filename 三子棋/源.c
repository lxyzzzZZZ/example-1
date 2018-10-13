#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//游戏进入选项
void menu()
{
	printf("************************\n");
	printf("****   1.开始游戏   ****\n");
	printf("****   0.退出游戏   ****\n");
	printf("************************\n");
}
//主函数
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
			{
					  game();
					  break;
			}
			case 0:
			{
					  printf("游戏退出!\n");
					  break;
			}
			default:
			{
					   printf("输入错误，请重新输入!\n");
					   break;
			}
		}
	} while (input);
	system("pause");
	return 0;
}

