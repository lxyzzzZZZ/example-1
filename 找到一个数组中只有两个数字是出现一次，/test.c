#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Find(int arr[], int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 3, 4, 5, 5, 4, 6, 6,};
	int len = sizeof(arr) / sizeof(arr[0]);
	Find(arr, len);
	system("pause");
	return 0;
}