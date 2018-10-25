//1.±àÐ´º¯Êý£º 
//unsigned int reverse_bit(unsigned int value);
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	int i = 0;
	unsigned int sum = 0;
	for (i = 0; i < 32; i++)
	{
		arr[i] = value % 2;
		value /= 2;
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (1 == arr[i])
		{
			sum += pow(2, 31 - i);
		}
	}
	return sum;
}
int main()
{	
	long long ret = 0;
	unsigned int value = 0;
	scanf("%d", &value);
	ret = reverse_bit(value);
	printf("%lld\n", ret);
	system("pause");
	return 0;
}