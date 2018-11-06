// µœ÷strcat
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* Strcat(char* str1, char* str2)
{
	char* ret = str1;
	while (*ret != '\0')
	{
		ret++;
	}
	while ((*ret++ = *str2++) != '\0')
	{
		;
	}
	return str1;
}
int main()
{
	char str1[100] = "hello ";
	char str2[] = "world";
	Strcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}