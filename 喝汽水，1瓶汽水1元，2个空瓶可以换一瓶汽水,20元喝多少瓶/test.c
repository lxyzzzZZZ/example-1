//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�


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
	printf("��������:\n");
	scanf("%lf", &money);
	int ret = 0;
	ret =(int)( money+Soda_Water(money));
	printf("���Եõ�%dƿ��ˮ\n", ret);
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
//	printf("��������:\n");
//	scanf("%d", &money);
//	int ret = 0;
//	ret = Soda_Water(money);
//	printf("���Եõ�%dƿ��ˮ\n", ret);
//	system("pause");
//	return 0;
//}