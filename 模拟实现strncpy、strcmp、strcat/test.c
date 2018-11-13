
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* my_strncpy(char* arr1, const char* arr2, int n)
{
	char* ret = arr1;
	while (n--)
	{
		*arr1++ = *arr2++;
	}
	return ret;
}
int my_strncmp(const* arr1, const char*arr2, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (*arr1 != *arr2)
		{
			count++;
		}
		arr1++;
		arr2++;
	}
	if (n != count)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
char* my_strncat(char* arr1, const char* arr2, int n)
{
	char* ret = arr1;
	while (*++arr1)
	{
		;
	}
	while (n--)
	{
		*arr1++ = *arr2++;
	}
	return ret;
}
int main()
{
	char arr1[100] = "hello";
	char arr2[100] = "world";
	char* ret3 = my_strncat(arr1, arr2, 5);
	printf("%s\n", ret3);
	int ret2 = my_strncmp(arr1, arr2, 5);
	printf("%d\n", ret2);
	char* ret = my_strncpy(arr2, arr1, 5);
	printf("%s\n", ret);
	system("pause");
	return 0;
}