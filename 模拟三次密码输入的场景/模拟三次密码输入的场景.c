#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char pssword[20] = {0};
	printf("����������:\n");
	while (count < 3)
	{
		scanf("%s", &pssword);
		if (0 == strcmp(pssword, "159753"))
		{
			break;
		}
		else
		{
			printf("�������!!!���������룺\n");
		}
		count++;

	}
	if (count < 3)
	{
		printf("��½�ɹ�\n");
	}
	else
	{
		printf("�˳�����\n");
	}
	system("pause");
	return 0;
}