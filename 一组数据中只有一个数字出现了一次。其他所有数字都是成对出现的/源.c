//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Scanf(int arr[10],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int find(int m, int n)
{
	if (m == (m&n) && n == (m&n))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	Scanf(arr, 10);
	for (i = 0; i < 10; i++)
	{
		int count = 0;
		for (j = 0; j < 10; j++)
		{
			int ret = find(arr[i], arr[j]);
			if (1 == ret)
			{
				count++;
			}
		}
		if (1 == count)
		{
			printf("%d ", arr[i]);
		}
	}
	system("pause");
	return 0;
}