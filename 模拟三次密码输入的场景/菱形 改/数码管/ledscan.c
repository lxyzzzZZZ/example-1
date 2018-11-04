#include "LedScan.h"
#include "app.h"
#include "delay.h"

#define LedNum  4
#define ScanTime   10
#define DataPort   P1
#define ComPort		P0
uchar data LedDispBuff[LedNum];
uchar data ComPortBuf;
uchar data ScanBitCnt;
uchar data ScanTimeCnt;
uchar code SegCode[]={ 0xc0,0xf9,0xa4,0xb0,
       				   0x99,0x92,0x82,0xf8,
					   0x80,0x90,0xff,0x88,
					   0x83,0xc6,0xa1,0x86,
       				   0x8e,0x8c,0xc1,0x89,
					   0xc7,0xbf,0x91,0x92,
					   0xf7,0x8b,0xc2,0xa3
					   };
void Led_Init(void)
{
	LedDispBuff[0] = 0;
	LedDispBuff[1] = 0;
	LedDispBuff[2] = 0;
	LedDispBuff[3] = 0;
	ComPortBuf = 0xff;
	ScanBitCnt = 0;
}

void Mn_Led(void)
{
	ComPortBuf = 0xfe;
	for(ScanBitCnt = 0;ScanBitCnt <=3;ScanBitCnt++)
	{
		DataPort = SegCode[LedDispBuff[ScanBitCnt]];
		ComPort = ComPortBuf;
		Delay_Ms(1000);
		ComPortBuf <<= 1;
		ComPortBuf++;
	}
}
void Mn_Led2(void)
{
	ComPortBuf = 0xfe;
	for(ScanBitCnt = 0;ScanBitCnt <=3;ScanBitCnt++)
	{
		DataPort = SegCode[LedDispBuff[ScanBitCnt]];
		ComPort = ComPortBuf;
		Delay_Ms(100);
		ComPortBuf <<= 1;
		ComPortBuf++;
	}
}
//void Mn_Led(void)
//{
//	ComPortBuf = 0x0f;
//	for(ScanBitCnt = 0;ScanBitCnt < 4;ScanBitCnt++)
//	{
//		DataPort = SegCode[LedDispBuff[ScanBitCnt]];
//		ComPort = BItCode[ScanBitCnt];
//		Delay_Ms(1);
//	 }
//}












