#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int fun(int num)
//{
//	int count = 0;
//	int ret = 0;
//	int n = num;
//	int max = 0x7ffffffff;
//	int min = -max - 1;
//	if (num > max || num<min)
//	{
//		return 0;
//	}
//	while (num > 9||num < -9)
//	{
//			num = num / 10;
//			count++;
//
//	}
//	while (count != -1)
//	{
//			ret = ret + (n % 10) * (pow(10, count));
//			count--;
//			n /= 10;
//	}
//
//
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = fun(num);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//
//}


////判断数字是否为回文数
//int is_pal(int n)
//{
//	int div = 1;
//	//使div与n在同一个数量级
//	while ((n / div) >= 10)
//	{
//		div *= 10;
//
//	}
//	//判断数字是否为回文数
//	while (n > 0)
//	{
//		//判断当前最高位与最低为是否相同
//		if (n / div != (n % 10))
//		{
//			return 0;
//		}
//		//去掉最高位
//		n %= div;
//		//去掉最低位
//		n /= 10;
//		div /= 100;
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", is_pal(num));
//	system("pause");
//	return 0;
//}


//int find(int a[], int n)
//{
//	int i = 0;
//	int res = 0;
//	for (i = 0; i <= n; i++)
//	{
//		res ^= i;
//	}
//	for (i = 0; i < n; i++)
//	{
//		res ^= a[i];
//	}
//	return res;
//}
//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
//	printf("%d\n", find(a, sizeof(a) / sizeof(a[0])));
//	system("pause");
//	return 0;
//}
//int fun(char arr[], int len)
//{
//	int right = len - 1;
//	int left = 0;
//	while (left > right)
//	{
//		if (arr[left] != arr[right])
//		{
//			return -1;
//		}
//		left++;
//		right--;
//	}
//	return 1;
//}
//int main()
//{
//	char arr[10] = "abcdcba";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = fun(arr, len);
//	printf("%d %d\n", ret,len);
//	system("pause");
//	return 0;
//}
//
//
//
//
//int fun(int arr1[], int arr2[],int len1,int len2)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len1 - 1; i++)
//	{
//		for (j = 0; j < len2 - 1; j++)
//		{
//			if (arr1[i] != arr2[j])
//			{
//				return arr1[i];
//			}
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[] = { 2, 3, 6, 5, 8, 9, 4, 7 };
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	int ret = fun(arr1, arr2, len1, len2);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//

//判断是否为2的幂
//二进制表示中只有一位为1，其他位为0

int is_pow(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			if (count)
			{
				return 0;
			}
			else
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d",&num);
	printf("%d\n", is_pow(num));
	system("pause");
	return 0;

}
//double fun(double num)
//{
//	while (num >= 1)
//	{
//		num = num / 2.0;
//	}
//	if (num == 1)
//	{
//		return 1;
//	}
//	return -1;
//
//}
//int main()
//{
//	double num = 0;
//	scanf("%lf", &num);
//	printf("%lf\n", fun(num));
//	system("pause");
//	return 0;
//}
