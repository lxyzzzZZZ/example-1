#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void Left_string(char arr[], int k,int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = arr[0];
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
}
int main()
{
	char arr[4] = "ABCD";
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf("%d", &k);
	Left_string(arr, k, len);
	system("pause");
	return 0;
}