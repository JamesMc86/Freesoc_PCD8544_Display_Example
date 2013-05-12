/* ========================================
 * Library for Talking to the Philips display
 * Controller on Nokia 3310 and 5110 dsiplays.
 * 12th May 2013
 * Copyright James McNally, 2013
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include <nokialcd.h>
#include <project.h>

void LcdWrite(uint8 databit, uint8 data) {
	
		Data_CMD_Sel_Write(databit);
		SPIM_WriteTxData(data);
		
	}
	
void LcdStart() {

	//Start SPI Interface
	SPIM_Start();
	
	//Reset the controller.
	LCD_RST_Write(0);
	LCD_RST_Write(1);
	
	//Put in a standard mode.
	LcdWrite(0,0x20);
	
	LcdBlankScreen();
}

void LcdWriteChar(char character) {
	
	int i;
	
	LcdWrite(1,0x00);
	for (i = 0; i < 5; i++) {
		LcdWrite(1, ASCII[character - 0x20][i]);
	}
	LcdWrite(1,0x00);
}

void LcdWriteString(char* string) {

	int i = 0;
	
	while(string[i] != 0x00) {
		LcdWriteChar(string[i]);
		i++;
	}
}

//Writes full screen. Could add size to do partial
void LcdWriteScreen(uint8* bitmap) {
	
	int i, size = 504;
	
	LcdSetLocation(0,0);
	
	for (i = 0; i < size; i++) {
		//Do we need to check amount of
		//data? I.e. if FIFO is full?
		LcdWrite(1,bitmap[i]);
	}
}

void LcdSetLocation(uint8 x, uint8 y) {
	
	LcdWrite(0,0x80 | x);
	LcdWrite(0,0x40 | y);
	
}

void LcdBlankScreen() {
	
	int i = 0;
	
	LcdSetLocation(0,0);
	//Blank the RAM
	for (i = 0; i<504; i++){
		LcdWrite(1,0x00);
	}
}
	
/* [] END OF FILE */
