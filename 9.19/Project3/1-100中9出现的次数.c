//1-100中9出现的次数
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int one = 0;
	int ten = 0;
	int hundred = 0;
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		hundred = i / 100;
		ten = (i-hundred*100)/ 10;
		one = i - hundred * 100 - ten * 10;
		if (one == 9)
		{
			count++;
		}
		if (ten == 9)
		{
			count++;
		}
		if (hundred == 9)
		{
			count++;
		}
	}
	printf("出现9的次数为：%d\n", count);
	system("pause");
	return 0;
}