#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Different_Numbers(int num1, int num2)
{
	int count = 0;
	int tmp = 0;
	tmp = num1^num2;
	while (tmp)
	{
		if (1 == tmp % 2)
		{
			count++;
		}
		tmp /= 2;
	}
	return count;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int ret = 0;
	scanf("%d%d", &num1, &num2);
	ret = Different_Numbers(num1,num2);
	printf("%d\n", ret);
	system("pause");
	return 0;

}