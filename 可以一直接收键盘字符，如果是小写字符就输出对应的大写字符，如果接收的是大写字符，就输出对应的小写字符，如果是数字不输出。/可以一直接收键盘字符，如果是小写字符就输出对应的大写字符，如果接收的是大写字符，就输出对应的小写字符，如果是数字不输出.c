//����һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ����
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