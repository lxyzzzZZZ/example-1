#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int My_Strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	while (*str2 != '0')
	{
		ret = (unsigned char*)str1 - (unsigned char*)str2;
		str1++;
		str2++;
	}
		if (ret > 0)
		{
			return 1;
		}
		else if (ret < 0)
		{
			return -1;
		}
		return ret;
}
int main()
{
	char* str1 = "ashdg";
	char* str2 = "abskd";
	printf("%d\n", My_Strcmp(str1, str2));
	system("pause");
	return 0;
}