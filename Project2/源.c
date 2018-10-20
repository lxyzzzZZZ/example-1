//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[] = { 'A', 'B', 'C', 'D' };
	int i;
	char A = 'a';
	char B = 'C';
	char C = 'D';
	char D = 'C';
	for (i = 0; i < 4; i++)
	{
		if (3 == (arr[i] != 'A') + (arr[i] == B) + (arr[i] == C) + (arr[i] == D))//将每个人说的话作为判断条件
		{
				printf("真相只有一个，凶手是：%c\n", arr[i]);
		}
	}
	system("pause");
	return 0;
}