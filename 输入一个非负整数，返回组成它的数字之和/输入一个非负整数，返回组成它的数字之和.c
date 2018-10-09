//用递归实现输入一个非负整数，返回组成它的数字之和
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int DigitSum(n)
{
	while (n > 0)
	{
		int sum=n % 10;
		return sum + DigitSum(n / 10);
	}
	return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}