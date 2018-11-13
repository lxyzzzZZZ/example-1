#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void Swap(void* p1, void* p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char temp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = temp;
	}
}
void my_qsort(void* arr, size_t length, size_t width, int(*cmp)(const void *a, const void *b))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length - i - 1; j++)
		{
			if (cmp((char*)arr + j*width, (char*)arr + (j + 1)*width)>0)
			{
				Swap((char*)arr + j*width, (char*)arr + (j + 1)*width, width);
			}
		}
	}
}

int arr1(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 7, 8, 9, 6 };

	my_qsort(arr, 10, sizeof(int), &arr1);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}