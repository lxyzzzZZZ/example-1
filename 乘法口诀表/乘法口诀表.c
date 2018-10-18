//自定义乘法表
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void multiplication (int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t ", j, i, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	multiplication(n);
	system("pause");
	return 0;
}