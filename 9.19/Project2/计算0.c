//º∆À„1 / 1 - 1 / 2 + 1 / 3µΩ1 / 100
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float i=0;
	float sum1 = 0;
	float sum2 = 0;
	float num = 0;
	for (i = 1; i < 101; i += 2)
	{
		sum1 = sum1 + (1.0 / i);
	}for (i = 2; i < 101; i += 2)
	{
		sum2 = sum2 - (1.0 / i);
	}
	printf("%f\n", sum1 + sum2);
	system("pause");
	return 0;
}