#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int estimate(char arr[], char arr2[], int len)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		char tmp = arr[0];
		if (memcmp(arr, arr2,len) == 0)
		{
			return i;
		}
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
	return -1;
}
int main()
{
	char arr[4] = "ABCD";
	int len = sizeof(arr) / sizeof(arr[0]);
	char arr2[4] = { 0 };
	printf("������Ҫ�жϵ��ַ���:\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%c", &arr2[i]);
	}
	int ret = 0;
	ret = estimate(arr, arr2, len);
	if (ret >= 0)
	{
		printf("����%d���ַ����õ�\n", ret);
	}
	else
	{
		printf("��������һ���ַ���ABCD��ת֮����ַ���\n");
	}
	system("pause");
	return 0;
}