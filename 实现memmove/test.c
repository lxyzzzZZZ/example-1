#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void* Memmove(void* dst, const void* src, size_t count)
{
	void* ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count))
	{
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}
int main()
{
	char str1[100] = "hello world";
	char str2[100] = { 0 };
	printf("%s\n", Memmove(str2, str1, 11));
	system("pause");
	return 0;
}