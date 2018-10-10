#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//µÝ¹é
int	Factorial_1(int n)
{
	if (1 == n)
	{
		return 1;
	}
	else
	{
		return n*Factorial_1(n - 1);
	}
}
//·ÇµÝ¹é
int Factorial_2(int n)
{
	int product = 1;
	for (int i = n; i > 0; i--)
	{
		product *= i;
	}
	return product;
}
int main()
{
	int n = 0;
	int ret_1 = 0;
	int ret_2 = 0;
	scanf("%d", &n);
	ret_1 = Factorial_1(n);
	ret_2 = Factorial_2(n);
	printf("%d %d\n", ret_1,ret_2);
	system("pause");
	return 0;
}