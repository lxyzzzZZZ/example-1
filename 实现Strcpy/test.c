#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	return ret;
}
int main()
{
	char str[100] = "abcdef";
	char ret[100] = { 0 };
	my_strcpy(ret, str);
	printf("%s\n", ret);
	system("pause");
	return 0;
}