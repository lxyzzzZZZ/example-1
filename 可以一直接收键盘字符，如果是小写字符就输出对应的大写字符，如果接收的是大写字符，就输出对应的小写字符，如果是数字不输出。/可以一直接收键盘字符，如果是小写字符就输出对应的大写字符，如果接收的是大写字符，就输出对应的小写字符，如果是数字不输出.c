//可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch + ('A'-'a'));
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch - ('A'-'a'));
		}
	}
	system("pause");
	return 0;
}