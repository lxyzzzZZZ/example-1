#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int My_Strchr(const char* str, char ch)
{
	int count = 0;
	while (*str)
	{
		if (ch == *str)
		{
			return ++count;
		}
		count++;
		str++;
	}
	return -1;
}
int main()
{
	char str[100] = "abcdefghijklmn";
	char ch = 'c';
	printf("%d\n", My_Strchr(str, ch));
	system("pause");
	return 0;
}