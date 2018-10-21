//在屏幕上打印杨辉三角
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
int main()
{
	int i = 0;
	int j = 0;
	int arr[N][N] = { 0 };
	for (i = 0; i < N; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;//使每行的收尾第一个数字都是1
	}
	for (i = 2; i < N; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//除了收尾，所有数都是它的头上俩个数之和
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}