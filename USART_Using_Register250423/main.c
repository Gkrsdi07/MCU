/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 ******************************************************************************
 ******************************************************************************
 FileName:






#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

/*Steps to Follow the USART - Initialization
 *
 * Step1: Enable clock access to GPIOA
 *
 * Ex: uint32_t *portAEnable = (uint32_t *)0x40023830
 *   * uint32_t *APB1ENR = (uint32_t *)0x40023840
 *
 * Step2: SET PA2 MODE to Alternative Mode
 *   uint32_t *GPIOA_MODER = (uint32_t *)0x40020000
 *
 * Step3: SET PA2 Alternative Function type to UART-Tx(AF07)
 *
 * Step4: Configure UART MODULE
 *
 * Step5: Configure UART  Baud-rate
 * uint is standard


#define GPIOAEN (1U<<0)
#define USART2EN (1U<<17)

int __io_putchar(unsigned char ch){
	Usart2_transmit(ch);
	return ch;
}

uint32_t *portAEnable = (uint32_t *)0x40023830;
uint32_t *APB1ENR = (uint32_t *)0x40023840;


//uint32_t *GPIOA_MODER = (uint32_t *)0x40020000;

//uint32_t portaAHB1ENR = (uint32_t) 0x40023830;
//	uint32_t *portAPB1ENR = (uint32_t) 0x40023840;
	uint32_t *MODER = (uint32_t) 0x40020800;
	uint32_t *AFRL = (uint32_t) 0x40020020;
	uint32_t *USART2_BRR = (uint32_t) 0x40004408;
	uint32_t *USART2_CR1 = (uint32_t) 0x4000440c;
uint32_t USART2_SR = (uint32_t) 0x40004400;
	uint32_t *USART2_DR = (uint32_t) 0x40004404;


Usart2_init(){
	*portAEnable = GPIOAEN;

	*GPIOA_MODER &= ~(1<<4);
	*GPIOA_MODER |= (1<<5);

	*APB1ENR = USART2EN;

	*GPIO_AFEL |= (1<<8);
	*GPIO_AFEL |= (1<<9);
	*GPIO_AFEL |= (1<<10);
	*GPIO_AFEL &= ~(1<<11);

	*USART2_BRR |= 0x083;

	*USART2_CR1 |= 0x0008;
	*USART2_CR1 |= 0x2000;
}



Usart2_transmit(){
	while(!(*USART2_SR & 0x80));

	*USART2_DR = (ch & 0xFF);

}

void delay(int T){
	while(T--){
		for(int i=0;i<10000;i++);
	}
}

//unsigned char ch = 'G';

int main(void)
{
	Usart2_init();
	Usart2_transmit();

	while(1){

		//Usart2_transmit
		Usart2_tranimit('G');
		delay(500);
	}


    /* Loop forever

	for(;;);
}



///For Character Tx:-
#include <stdint.h>

#if !defined(_SOFT_FP) && defined(_ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
//#define GPIOAEN (1u)
void delay(int T)
{
	int i;
	while(T--)
	{
	for(i=0;i<4000;i++);
	}
}

int main(void)
{
	uint32_t *portaAHB1ENR =(uint32_t *)0x40023830;//Enabled Port
	uint32_t *portaAPB1ENR =(uint32_t *)0x40023840;//Enable Bus for USART2
	uint32_t *portaMODER =(uint32_t *)0x40020000;//Enable GPIOA Moder
	uint32_t *portaAFRL =(uint32_t *)0x40020020;//Enable GPIOA Alternate function register Low
	uint32_t *USART2CR1 =(uint32_t *)0x4000440c;//Enable USART2 Control Register
	uint32_t *USART2BRR =(uint32_t *)0x40004408;//Enable USART2 Baud Rate Register
	uint32_t *USART2SR =(uint32_t *)0x40004400;//Enable Status register
	uint32_t *USART2DR =(uint32_t *)0x40004404;//Enable Data Register



	*portaAHB1ENR |= 0x01;//AHB1 and GPIOA Enabled
	*portaAPB1ENR |= 0x20000;//APB1 and USART2 Enabled
	*portaMODER |= 0xA0;//MODER set to Alternate function
	*portaAFRL |= 0x7700;//USART2tx And USART2rx Enabled
	*USART2CR1 |= 0x2000;//USART ENABLED
	*USART2CR1 |= 0xc;//RE TE Enabled
	*USART2BRR |= 0x683;//BAUD Rate Set to 9600
	while(1)
	{
	unsigned char dat ='G';
	while(!(*USART2SR & 0x80));//TXE pin enabled
	*USART2DR = (dat & 0xff);//Data transmitted Through DATA REGISTER
	delay(200);
	}


    /* Loop forever
	for(;;);
}
*/


/**
 **************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 **************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 **************************


#include <stdint.h>

#if !defined(_SOFT_FP) && defined(_ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


/* Steps to follow the USART:
 * Step1: Enable Clock Access to GPIO
 *
 * uint32_t *PortAEnable = (uint32_t *)0x40023830;
 * uint32_t *APB1ENR = (uint32_t *)0x40023840;
 *
 * Step2: SET PA2 MODE to Alternative Mode
 *
 * uint32_t *GPIOA_MODER = (uint32_t *)ox4002000;
 * uint32_t *GPIOA_MODER = (uint32_t *)ox4002000;
 *
 * Step3: Set Alternative Mode Function Type to USART-Tx (AF07)
 *
 *
 * Step4: Configure UART Module
 *
 *
 * Step5: Configure UART BaudRate
 *
 *


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
int main(void)
{

	USART2_init();
	while(1)
	{
		//USART2_transmit('B');
		printf("hello world\r\n");
		delay(500);
	}
}
*/


#include <stdint.h>
#include "USART2.h"



#if !defined(_SOFT_FP) && defined(_ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif




int main(){
	USART2_init();
		while(1)
		{
			//USART2_transmit('B');
			printf("Phytec India\r\n");
			delay(500);
		}
}
