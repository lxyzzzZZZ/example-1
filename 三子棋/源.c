#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��Ϸ����ѡ��
void menu()
{
	printf("************************\n");
	printf("****   1.��ʼ��Ϸ   ****\n");
	printf("****   0.�˳���Ϸ   ****\n");
	printf("************************\n");
}
//������
int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		menu();
		printf("��ѡ��:>");
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
					  printf("��Ϸ�˳�!\n");
					  break;
			}
			default:
			{
					   printf("�����������������!\n");
					   break;
			}
		}
	} while (input);
	system("pause");
	return 0;
}

