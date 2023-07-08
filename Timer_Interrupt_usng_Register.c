/*
Toggle Onboard LED using Timer Interrupt Register Coding PortA PIN5
APPLICATION : Blink LED on-OFF

GPIO: PA5


algorithm->
STEP1 :  Enable GPIOA
STEP2 :  Enable Alternate Pin TIM10
STEP3 :


Created on: 20 April 2023
Author : Ghanshyam Kumar
*/

#include "main.h"


void timer_delay(){
	RCC->APB1ENR |= 0x1;
	TIM2->PSC = 1600-1;
	TIM2->ARR = 10000-1;
	TIM2->CNT = 0;
	TIM2->CR1 = 1;
}


int main(){
	/*ENABLE GPIO*/
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x400;
	timer_delay();

	while(1){
		while(!(TIM2->SR & 1));
		GPIOA->ODR ^= 0x20;
		TIM2->SR = 0;
	}
}



/*
#include "main.h"
//GPT with me
void timer_delay(uint32_t timer_frequency){
    uint16_t prescaler_value, period_value;
   //calculate_timer_values(timer_frequency, &prescaler_value, &period_value);

    RCC->APB2ENR |= 0x20000;
    GPIOB->MODER |= 0x20000;
    GPIOB->AFR[1] |= 0x3;
    TIM10->PSC = 15999-1;
    TIM10->ARR = 1000-1;
    TIM10->CNT = 0x0;
    TIM10->CR1 |= 0x1;
}

int main(){
    /*ENABLE GPIO
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER |= GPIO_MODER_MODER5_0;
    timer_delay(1000); // 1 kHz timer

    while(1){
        while(!(TIM10->SR & TIM_SR_UIF));
        GPIOA->ODR ^= GPIO_ODR_ODR_5;
        TIM10->SR &= ~TIM_SR_UIF;
    }
}
*/

/*
 #include "main.h"
//GPT
void timer_delay(uint32_t timer_frequency){
    uint16_t prescaler_value, period_value;
    calculate_timer_values(timer_frequency, &prescaler_value, &period_value);

    RCC->APB2ENR |= RCC_APB2ENR_TIM10EN;
    GPIOB->MODER |= GPIO_MODER_MODER8_1;
    GPIOB->AFR[1] |= GPIO_AFRH_AFSEL8_2 | GPIO_AFRH_AFSEL8_1 | GPIO_AFRH_AFSEL8_0;
    TIM10->PSC = prescaler_value;
    TIM10->ARR = period_value;
    TIM10->CNT = 0;
    TIM10->CR1 |= TIM_CR1_CEN;
}

int main(){
    //ENABLE GPIO
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER |= GPIO_MODER_MODER5_0;
    timer_delay(1000); // 1 kHz timer

    while(1){
        while(!(TIM10->SR & TIM_SR_UIF));
        GPIOA->ODR ^= GPIO_ODR_ODR_5;
        TIM10->SR &= ~TIM_SR_UIF;
    }
}

 */
