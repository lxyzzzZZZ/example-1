#ifndef _LEDSCAN_H_
#define _LEDSCAN_H_
#include <reg52.h>
#define uchar unsigned char
#define uint unsigned int 
extern uchar data LedDispBuff[];
extern uchar data ScanBitCnt;
extern uchar data ScanTimeCnt;
extern uchar data ComPortBuf;
void Led_Init(void);
void Mn_Led(void);
void Mn_Led2(void);
#endif