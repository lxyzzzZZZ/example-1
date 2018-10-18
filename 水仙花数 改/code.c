//求出0～999之间的所有“水仙花数”并输出
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp/10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}