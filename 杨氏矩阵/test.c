//ÑîÊÏ¾ØÕó
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int find(int arr[3][3], int num)
{
	int i = 0;
	int j = 2;
	while (i < 3&&j < 3)
	{
		if (num < arr[i][j])
		{
			j--;
		}
		else if (num>arr[i][j])
		{
			i++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
	int num = 0;
	scanf("%d", &num);
	int ret = find(arr, num);
	if (1 == ret)
	{
		printf("´æÔÚ\n");
	}
	else
	{
		printf("²»´æÔÚ\n");
	}
	system("pause");
	return 0;

}