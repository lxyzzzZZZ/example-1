#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char pssword[20] = {0};
	printf("请输入密码:\n");
	while (count < 3)
	{
		scanf("%s", &pssword);
		if (0 == strcmp(pssword, "159753"))
		{
			break;
		}
		else
		{
			printf("密码错误!!!请重新输入：\n");
		}
		count++;

	}
	if (count < 3)
	{
		printf("登陆成功\n");
	}
	else
	{
		printf("退出程序\n");
	}
	system("pause");
	return 0;
}