#include "app.h"
#include "delay.h"

void LedDisp(uchar i,uchar j,uchar m,uchar n)
{
	LedDispBuff[0] = i;
	LedDispBuff[1] = j;
	LedDispBuff[2] = m;
	LedDispBuff[3] = n;
}
void Mn_App(void)
{ 
	Delay_Ms(1000);
	LedDisp(0,1,2,3);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(4,5,6,7);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(8,9,10,11);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(12,13,14,15);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(16,17,18,19);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(20,21,22,23);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(24,25,26,27);
	Mn_Led();
	Delay_Ms(1000);
	LedDisp(6,6,6,6);
	Mn_Led2();
	Delay_Ms(5000);		
}
