#include "app.h"
#include "init.h"

void main(void)
{
	Mn_Init();
	Mn_Led();
	while(1)
	{
//		Mn_Led();
		Mn_App();
	}
}