#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//µÝ¹é
int	Seeking_every_digit1(int num)
{
	if (num > 9)
	{
		 Seeking_every_digit1(num / 10);
	}
	printf("%d ", num % 10);
}
//·ÇµÝ¹é
void Seeking_every_digit2(int num)
{
	while (num > 0)
	{
		printf("%d ", num % 10);
		num /= 10;
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	Seeking_every_digit1(num);
	printf("\n");
	Seeking_every_digit2(num);
	system("pause");
	return 0;
}