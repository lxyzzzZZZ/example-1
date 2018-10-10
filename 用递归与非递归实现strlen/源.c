//递归和非递归分别实现strlen
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//递归
int Strlen1(char*string)
{
	if ('\0' == *string)
	{
		return 0;
	}
	else
	{
		return Strlen1(++string) + 1;
	}
}
int Strlen2(char *string)
{
	int count = 0;
	while (*string)
	{
		count++;
		*string++;
	}
	return count;
}
//非递归

int main()
{
	char string[] = "acdds";
	printf("%d %d\n", Strlen1(string),Strlen2(string));
	system("pause");
	return 0;
}