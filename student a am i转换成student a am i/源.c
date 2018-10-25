//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[4][7] = { "student", "a", "am", "i" };
	int i = 0;
	int j = 0;
	for (i = 3; i >= 0; i--)
	{
		for (j = 0; j < 7; j++)
		{
			if (NULL == arr[i][j])
			{
				break;
			}
			printf("%c", arr[i][j]);
		}
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}