//交换俩数组内容
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr1[i] = arr1[i] + arr2[i];
		arr2[i] = arr1[i] - arr2[i];
		arr1[i] = arr1[i] - arr2[i];
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}