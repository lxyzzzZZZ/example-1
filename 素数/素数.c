//����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_prime(int num)
{
	int i = 0;
	for ( i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			break;
		}
	}
	if (i>sqrt(num))
	{
		return -1;
	}
	return 0;
}
int main()
{
	int num = 0;
	int a = 0;
	scanf("%d", &num);
	a=is_prime(num);
	if (-1 == a)
	{
		printf("%d������\n", num);
	}
	else
	{
		printf("%d��������\n", num);
	}
	system("pause");
	return 0;
}