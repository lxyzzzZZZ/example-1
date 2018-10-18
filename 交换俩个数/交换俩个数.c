//½»»»Á©¸öÊý
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void swap(int* p1, int* p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	swap(&num1, &num2);
	printf("%d %d\n", num1, num2);
	system("pause");
	return 0;
}