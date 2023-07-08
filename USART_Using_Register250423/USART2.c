/*
 * USART2.c
 *
 *  Created on: Apr 25, 2023
 *      Author: g07
 */

#include <stdint.h>

#define GPIOAEN (1U<<0);   //1U=UNSIGNED INT
#define USART2EN (1U<<17); //enable usart2 clock

uint32_t *AHB1ENR = (uint32_t *)0x40023830;
uint32_t *APB1ENR = (uint32_t *)0x40023840;
uint32_t *portaMODER = (uint32_t *)0x40020000;
uint32_t *poratAFRL = (uint32_t *)0x40020020;

uint32_t *usart2DR = (uint32_t *)0x40004404;
uint32_t *usart2BRR = (uint32_t *)0x40004408;
uint32_t *usart2SR = (uint32_t *)0x40004400;
uint32_t *usart2CR1 = (uint32_t *)0x4000440c;

void delay(int t)
{
	int i;
	while(t--)
	{
	for(i=0;i<4000;i++);
   }
}
 int __io_putchar(unsigned char ch)
 {
	 USART2_transmit(ch);
	 return ch;
 }

void USART2_init(void)
{
			//ENABLE PERIPHERAL CLOCK FOR GPIOA
			//*AHB1ENR|=0x1;
			*AHB1ENR=GPIOAEN;

			//enable usart2
			//*APB1ENR |=0x20000;
			*APB1ENR =USART2EN;

			//make port A AF
			//*portaMODER |=0x20;
			*portaMODER &=~(1<<4);
			*portaMODER |=(1<<5);

			//enable PA3 & PA2 as AF7 for usart2
			//*poratAFRL |=0x700;
			*poratAFRL |=(1<<8);
			*poratAFRL |=(1<<9);
			*poratAFRL |=(1<<10);
			*poratAFRL &=~(1<<11);

			//set baud rate to 9600
			*usart2BRR |=0x0683;

			//control register
			*usart2CR1 |=0x2008;
			//*usart2CR1 |=(1<<3);
			//*usart2CR1 |=(1<<13);

}


void USART2_transmit(unsigned char ch)
{
	while(!(*usart2SR & 0x80));
	*usart2DR =(ch & 0xFF);

}
