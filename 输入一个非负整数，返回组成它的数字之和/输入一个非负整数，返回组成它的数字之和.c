//�õݹ�ʵ������һ���Ǹ����������������������֮��
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int DigitSum(n)
{
	while (n > 0)
	{
		int sum=n % 10;
		return sum + DigitSum(n / 10);
	}
	return 0;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}