#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int avg = 0;	
	scanf("%d%d", &num1,&num2);
	//avg = (num1 - num2) / 2 +num2;
	avg = (num1&num2) + ((num1^num2) >> 1);
	printf("%d",avg);
	system("pause");
	return 0;
}