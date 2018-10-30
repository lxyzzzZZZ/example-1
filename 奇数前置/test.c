//将数组的奇数前置

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Odd_preposition(int arr[], int n)
{
	int left = 0;//数组首位下标
	int right = n - 1;//数组尾位下标
	while (left < right)
	{
		//判断是否为奇数
		if (0 == arr[left] % 2)
		{
			//从数组最后开始依次向前找奇数
			while (left < right)
			{
				if (1 == arr[right] % 2)
				{
					//交换数值
					int tmp = arr[left];
					arr[left] = arr[right];
					arr[right] = tmp;
					break;
				}
				right--;
			}
		}
		left++;
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };
	int len = 0;
	//数组长度
	len = sizeof(arr) / sizeof(arr[0]);
	Odd_preposition(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}