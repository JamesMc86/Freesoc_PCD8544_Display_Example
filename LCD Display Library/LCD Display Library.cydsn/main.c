/* ========================================
 * Demo for nokialcd library on FreeSoC
 * Copyright James McNally, 2013
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.
 * ----------------------------------------------------------------------------
 *
 * ========================================
*/
#include <device.h>
#include <nokialcd.h>
#include <freesoclogo.h>

void main()
{

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
	LcdStart();
	LcdWrite(0,0x0C);
	
    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        /* Place your application code here. */
		LcdWriteScreen(freesoclogo);
		CyDelay(2000);
		LcdBlankScreen();
		CyDelay(500);
		LcdSetLocation(0,0);
		LcdWriteString("Welcome");
		CyDelay(500);
		LcdSetLocation(0,1);
		LcdWriteString("To FreeSoC");
		CyDelay(500);
		LcdSetLocation(0,2);
		LcdWriteString("LCD Demo");
		CyDelay(2000);
    }
}

/* [] END OF FILE */
