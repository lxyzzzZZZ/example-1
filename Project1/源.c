//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；b2,a3
//B选手说：我第二，E第四；b2,e4
//C选手说：我第一，D第二；c1,d2
//D选手说：C最后，我第三；c5,d3
//E选手说：我第四，A第一；e4,a1
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A < 6; A++)
	{
		for (B = 1; B < 6; B++)
		{
			for (C = 1; C < 6; C++)
			{
				for (D = 1; D < 6; D++)
				{
					for (E= 1; E < 6; E++)
					{
						if (1 == (2 == B) + (3 == A) &&
							1 == (2 == B) + (4 == E) &&
							1 == (1 == C) + (2 == D) &&
							1 == (5 == C) + (3 == D) &&
							1 == (4 == E) + (1 == A) )
						{
							if (A != B&&A != C&&A != D&&A != E&&C != B&&D != B&&E != B&&C != D&&C != E&&E != D)
							{							
								printf("A:%d B:%d C:%d D:%d E:%d\n", A, B, C, D, E);
							}

						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}