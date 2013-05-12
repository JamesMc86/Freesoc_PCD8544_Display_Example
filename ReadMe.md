FreeSoC Serial LCD Library
==========================

This code is designed as a starting point for using Serial LCD screens (Nokia 3310, 5110) such as https://www.sparkfun.com/products/10168 with your FreeSoC explorer.

Contents
---------

* Schematic File

	This uses an SPI master block to do the heavy lifting of the serial comms. This is connected to the clock, data and enable lines of the display. Two registers are added to control the reset line and the data/command line.
	
* nokialcd Library

	nokialcd.h and nokialcd.c are designed to be reusable across projects. They contain basic write functions as well as the ability to write strings (up to 5 lines on the display) and bitmaps to full displays.
	
* main.c

	This shows an example use where the screen will flip between the FreeSoC logo and some text using the two main methods of writing.
	
Credits
-------

This library was developed by James McNally (c) 2013. I am happy to put this under the BeerWare license. You are free to use this for whatever you want. If we meet someday and you think it is worth it, you can buy me a beer!

The ASCII table was taken from http://playground.arduino.cc/Code/PCD8544

The images were created using great instructions at https://www.sparkfun.com/tutorials/300