/*
 * LCD.c
 *
 *  Created on: Apr 26, 2023
 *      Author: g07
 */

/*
 * LCD.c
 *
 *  Created on: Apr 24, 2023
 *      Author: g07
 */
/*
 * lcd.c
 *
 *  Created on: Apr 12, 2023
 *      Author: chaman
 */


#include <LCD.h>                  // Device header

#define RS 0x20							//PA5 mask for Register select
//R/W CONNECT TO PA6
#define EN 0x80							//PA7 mask for register select


void LCD_string(char str[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		LCD_data(str[i]);
	}

}
/* initialize GPIOA/C then initialize LCD controller */
void LCD_init(void)
{
	PORTS_init();
	delay(20); /* LCD controller reset sequence */
	LCD_nibble_write(0x30, 0);
	delay(5);
	LCD_nibble_write(0x30, 0);
	delay(1);
	LCD_nibble_write(0x30, 0);
	delay(1);
	LCD_nibble_write(0x20, 0); /* use 4-bit data mode */
	delay(1);
	LCD_command(0x28); /* set 4-bit data, 2-line, 5x7 font */
	LCD_command(0x06); /* move cursor right */
	LCD_command(0x01); /* clear screen, move cursor to home */
	LCD_command(0x0F); /* turn on display, cursor blinking */
}

void PORTS_init(void)
{
		RCC->AHB1ENR |= 0x1;                     // Enable AHB1 BUS which is connected to PA5 via GPIO port A
		RCC->AHB1ENR |= 0x4;					// Enanle AHB1 bus conneted to GPIO port C
	//	RCC->AHB1ENR |=0x2;						//Enanle AHB1 bus conneted to GPIO port B
		GPIOA->MODER &=~0xFC00;                 //clear all pin PA5 PA6 PA7
		GPIOA->MODER |=0x5400; 				//set all pin 5,6,7 as o/p mode
		GPIOA->BSRR = 0xC00000;	//(3<<22)			//turn off EN and RW pin
		GPIOC->MODER &=~0xFF00;				// CLEAR all pin 4-7 of port C
		GPIOC->MODER |= 0x5500;				// set all pin 4-7 as o/p mode


}

void LCD_nibble_write(char data, unsigned char control)
{
	/*populate data bits */
	GPIOC->BSRR = 0xF00000; 					/* clear data bits */
	GPIOC->BSRR = data & 0xF0; 					/* set data bits 4-7 */
	/* set R/S bit */
	if (control & RS)
		GPIOA->BSRR = RS;
	else
		GPIOA->BSRR = RS << 16;	//(1<<21)  //
	/* pulse E */
	GPIOA->BSRR = EN;
	delay(0);
	GPIOA->BSRR = EN << 16;
}
void LCD_command(unsigned char command)
{
	LCD_nibble_write(command & 0xF0, 0); 			/* upper nibble first */
	LCD_nibble_write(command << 4, 0); 				/* then lower nibble */
	if (command < 4)
		delay(2); 									/* command 1 and 2 needs up to 1.64ms */
	else
		delay(1); 									/* all others 40 us */

}
void LCD_data(char data)
{
	LCD_nibble_write(data & 0xF0, RS); 				/* upper nibble first */
	LCD_nibble_write(data << 4, RS); 				/* then lower nibble */
	delay(100);
}

void delay(int seconds)
{

	for(;seconds>0;seconds--)
	{
		for(int count1=0;count1<3000;count1++)
		{

		}
	}
}

