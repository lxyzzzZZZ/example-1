#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* My_Memcpy(char* str1, char* str2, size_t n)
{
	char* ret = str1;
	while (n--)
	{
		*str1++ = *str2++;
	}
	return ret;
}
int main()
{
	char str1[100] = "abcdefg";
	char str2[100] = { 0 };
	My_Memcpy(str2, str1, 3);
	printf("%s\n", str2);
	system("pause");
	return 0;
}