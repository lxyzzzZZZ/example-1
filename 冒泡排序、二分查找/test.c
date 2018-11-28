
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int arr[9] = { 1, 2, 3, 4, 8, 6, 4, 9, 8 };
	int len = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i <= len-1; i++)
	{
		for (int j = len-1; j > i; j--)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int k = 0; k < len; k++)
	{
		printf("%d ", arr[k]);
	}
	printf("\n");
	int num = 9;
	//printf("请输入查找的数:");
	//scanf("%d", num);
	//int left = 0;
	//int right = len - 1;
	//while (left < right)
	//{
	//	int mid = (left + right) / 2;
	//	if (num == arr[mid])
	//	{
	//		printf("%d\n", mid);
	//		break;
	//	}
	//	if (num > arr[mid])
	//	{
	//		mid = left;
	//	}
	//	if (num < arr[mid])
	//	{
	//		mid = right;
	//	}
	//}
	system("pause");
	return 0;

}