#include "app.h"  //流水灯应用函数
#include "delay.h"
#define LED_Port P1
void Mn_App(void)
{
	uchar i;
	uchar LED_flow=0xfe;
	for(i=0;i<8;i++)
	{
		LED_Port=LED_flow;
		Delay_Ms(200);
		LED_flow<<=1;
		LED_flow++;
	}
	LED_flow-=0x80;
	for(i=0;i<7;i++)
	{
		LED_flow>>=1;
		LED_flow+=0x80;
		LED_Port=LED_flow;
		Delay_Ms(200);
	}
}