//�����������ǰ��

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Odd_preposition(int arr[], int n)
{
	int left = 0;//������λ�±�
	int right = n - 1;//����βλ�±�
	while (left < right)
	{
		//�ж��Ƿ�Ϊ����
		if (0 == arr[left] % 2)
		{
			//���������ʼ������ǰ������
			while (left < right)
			{
				if (1 == arr[right] % 2)
				{
					//������ֵ
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
	//���鳤��
	len = sizeof(arr) / sizeof(arr[0]);
	Odd_preposition(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}