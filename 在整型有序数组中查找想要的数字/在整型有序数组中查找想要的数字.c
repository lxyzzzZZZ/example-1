//在整型有序数组中查找想要的数字
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = 0;
	printf("请输入你想要查找的数:\n");
	scanf("%d", &num);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = ((right - left) / 2) + left;
	while (left <= right)
	{
		int mid = ((right - left) / 2) + left;
		if (arr[mid] == num)
		{
			printf("找到了!!!，%d\n", mid);
			break;
		}
		else if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
	}
	if (left > right)
	{
		printf("找不到!!!\n");
	}
	system("pause");
	return 0;
}
