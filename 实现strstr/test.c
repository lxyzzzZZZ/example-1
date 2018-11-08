#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
char* My_Strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;
	if (*str2 == NULL)
	{
		return NULL;
	}
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 != '\0' && *substr != '0' && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
		{
			return cp;
		}
		cp++;
	}
}
int main()
{
	char* str1 = "abcdefg";
	char* str2 = "bc";
	char* ret = 0;
	ret = My_Strstr(str1, str2);
	printf("%s\n",ret);
	system("pause");
	return 0;
}