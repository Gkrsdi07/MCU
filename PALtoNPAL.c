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
 */

void change_accesslevel_unpri(){
	__asm volatile("MRS R0, CONTROL");   // copy CONTROL vlue to Ro
	__asm volatile("ORR R0, R0, #0x01"); //ORR add +1 to R0
	__asm volatile("MSR CONTROL, R0");    // Then R0 become 1(change PAL to NPAL)
}


#include <stdint.h>
#include<stdio.h>

void generate_interrupt(){
	uint32_t *pSTIR = (uint32_t*)0xE000EF00;
	uint32_t *pISER0 = (uint32_t*)0xE000E100;

	*pISER0 |= (1<<3);
	*pSTIR = (3 & 0x1FF);
}

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{

	printf("In thread mode: before interrupts\n");

	 change_accesslevel_unpri();

	generate_interrupt();

	printf("In thread mode: After interrupts \n");
    /* Loop forever */
	for(;;);
}

void RTC_WKUP_IRQHandler(void){
	printf("In Handler Mode: ISR\n");
}


void HardFault(void){
	printf("Hard Fault Detected \n");
}
