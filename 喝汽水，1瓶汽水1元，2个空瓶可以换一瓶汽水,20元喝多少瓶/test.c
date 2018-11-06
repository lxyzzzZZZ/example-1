//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
double Soda_Water(double n)
{
	if (n > 1)
	{
		return n / 2.0 + Soda_Water(n / 2);
	}
	else
	{
		return 0;
	}
}
int main()
{
	double money = 0;
	printf("请输入金额:\n");
	scanf("%lf", &money);
	int ret = 0;
	ret =(int)( money+Soda_Water(money));
	printf("可以得到%d瓶汽水\n", ret);
	system("pause");
	return 0;
}

//int Soda_Water(int n)
//{
//	int sum = n;
//	int i = n;
//	int count = 0;
//	while (i > 1)
//	{
//		if (1 == i % 2)
//		{
//			sum =sum + i / 2 + 1;
//			count++;
//		}
//		else
//		{
//			sum += i / 2;
//		}
//		i /= 2;
//
//	}
//	if (count % 2 == 0)
//	{
//		return n + sum / 2+1;
//	}
//	else
//	{
//		return n + sum / 2;
//	}
//
//}
//int main()
//{
//	int money = 0;
//	printf("请输入金额:\n");
//	scanf("%d", &money);
//	int ret = 0;
//	ret = Soda_Water(money);
//	printf("可以得到%d瓶汽水\n", ret);
//	system("pause");
//	return 0;
//}