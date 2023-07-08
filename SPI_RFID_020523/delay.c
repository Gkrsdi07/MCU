/**

 * original author: Husamuldeen <https://github.com/hussamaldean>

   ----------------------------------------------------------------------
   	Copyright (C) husamuldeen, 2020

    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.
     
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
   ----------------------------------------------------------------------
 */

#include "delay.h"
#include "stm32f4xx.h"                  // Device header


volatile uint32_t ms,rms;
void systick_init_ms(uint32_t freq)
	{
	__disable_irq();
	SysTick->LOAD=(freq/1000)-1;
	SysTick->VAL=0;
	SysTick->CTRL=7; //0b00000111;
	__enable_irq();	
}

uint32_t millis(void)
	{
	__disable_irq();
	rms=ms; //store current ms in rms
	__enable_irq();
	return rms;
	}

void SysTick_Handler(void){
//GPIOA->ODR^=GPIO_ODR_OD5;
ms++;
}

void delay(uint32_t ms)
	{
	uint32_t start=millis();

	do{;}while(millis()-start<ms);


	}
