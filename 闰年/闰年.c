//����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int leap_year(int n)
{
	if ((n % 100 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		return -1;
	}
	return 0;
}
int main()
{
	int year = 0;
	int a;
	scanf("%d", &year);
	a=leap_year(year);
	if (-1 == a)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}