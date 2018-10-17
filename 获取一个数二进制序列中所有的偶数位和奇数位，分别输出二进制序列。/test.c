//获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print_Binary_Sequence(int num)
{
	int count = 0;
	int i = 0;
	int arr[32] = { 0 };
	while (num)
	{
		arr[i] = num % 2;
		count++;
		i++;
		num /= 2;
	}
	printf("偶数序列：");
	for (i = count; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("奇数序列：");
	for (i = count - 1; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}

}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print_Binary_Sequence(num);
	system("pause");
	return 0;
}