//��ȡһ�������������������е�ż��λ������λ���ֱ�������������С� 
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
	printf("ż�����У�");
	for (i = count; i >= 0; i -= 2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("�������У�");
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