//使用递归实现n^k
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int power(int n, int k)
{
	int i = k;
	if (k <= 0)
	{
		if (0 == i)
		{
			return 1;
		}
			if (i < 0)
			{
				return n*power(n, i + 1);
			}
		}
		if (1 == k)
		{
			return n;
		}
		if (k >= 1)
		{
			if (1 == i)
			{
				return n;
			}
			if (i > 1)
			{
				return n*power(n, i - 1);
			}
		}
	}

int main()
{
		int n = 0;
		int k = 0;
		double ret = 0;
		scanf("%d%d", &n, &k);
		if (k <= 0)
		{
			ret = 1.0 / power(n, k);
		}
		if (k >= 1)
		{
			ret = power(n, k);
		}
		printf("%lf\n", ret);
		system("pause");
		return 0;
}