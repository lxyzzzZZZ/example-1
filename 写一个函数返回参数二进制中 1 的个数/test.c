//写一个函数返回参数二进制中 1 的个数 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if (1 == value % 2)
		{
			count++;
		}
		value = value/2;
	}
	return count;
}
int main()
{
	unsigned int num = 15;
	int ret = 0;
	scanf("%d", &num);
	ret = count_one_bits(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}