//��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[4][7] = { "student", "a", "am", "i" };
	int i = 0;
	int j = 0;
	for (i = 3; i >= 0; i--)
	{
		for (j = 0; j < 7; j++)
		{
			if (NULL == arr[i][j])
			{
				break;
			}
			printf("%c", arr[i][j]);
		}
		printf(" ");
	}
	printf("\n");
	system("pause");
	return 0;
}