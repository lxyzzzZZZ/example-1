//��������Ϸ
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
		printf("������һ����:\n");
		scanf("%d", &num);
		if (num == ret)
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
		else if (num > ret)
		{
			printf("���ź����´���\n");
		}
		else if (num < ret)
		{
			printf("���ź�����С��\n");
		}
		else
		{
			printf("������󣡣���");
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
		printf("********|  1.��ʼ��Ϸ  |********\n");
		printf("********************************\n");
		printf("********|  0.�˳���Ϸ  |********\n");
		printf("********************************\n");
		printf("��ѡ��:");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ������\n");
			break;
		default:
			printf("ѡ����󣡣���\n");
			break;
		}
	} while (n);
	system("pause");
	return 0;
}