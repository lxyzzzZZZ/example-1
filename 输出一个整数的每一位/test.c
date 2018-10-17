#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void fun(int num)
{
	if (num > 0)
	{
		printf("%d ", num % 10);
		fun(num / 10);
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	fun(num);
	system("pause");
	return 0;
}