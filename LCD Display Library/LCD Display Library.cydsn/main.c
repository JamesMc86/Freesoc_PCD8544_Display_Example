/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
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
