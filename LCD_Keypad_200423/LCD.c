/*
 * LCD.c
 *
 *  Created on: Apr 20, 2023
 *      Author: g07
 */
#include "main.h"
#include "LCD.h"

void print(unsigned char dat){

        if((dat & 0x01) == 0x01){
        	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_SET);          //For D0 line
        }else{
        	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10, GPIO_PIN_RESET);         //For D0 line
        }


        if((dat & 0x02) == 0x02){
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3, GPIO_PIN_SET);          //For D1 line
        }else{
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,GPIO_PIN_RESET);         //For D1 line
        }


        if((dat & 0x04) == 0x04){
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5, GPIO_PIN_SET);         //For D2 line
        }else{
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);        //For D2 line
        }


        if((dat & 0x08) == 0x08){
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4, GPIO_PIN_SET);        //For D3 line
        }else{
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,GPIO_PIN_RESET);       //For D3 line
        }


        if((dat & 0x10) == 0x10){
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10, GPIO_PIN_SET);        //For D4 line
        }else{
        	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_10, GPIO_PIN_RESET);     //For D4 line
        }


        if((dat & 0x20) == 0x20){
        	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8, GPIO_PIN_SET);        //For D5 line
        }else{
        	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8, GPIO_PIN_RESET);      //For D5 line
        }


        if((dat & 0x40) == 0x40){
        	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9, GPIO_PIN_SET);         //For D6 line
        }else{
        	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9, GPIO_PIN_RESET);       //For D6 line
        }


        if((dat & 0x80) == 0x80){
        	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7, GPIO_PIN_SET);         //For D7 line
        }else{
        	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_7, GPIO_PIN_RESET);       //For D7 line
        }
}


void lcd_cmd(unsigned char cmd){
    print(cmd);
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_7, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, GPIO_PIN_SET);
    HAL_Delay(2);
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET);
}


void lcd_data(unsigned char mydat){
        print(mydat);
        HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET);
        HAL_Delay(2);
        HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET);
}


void lcd_init()
{
	lcd_cmd(0x38);
	lcd_cmd(0x06);
	lcd_cmd(0x01);
	lcd_cmd(0x0c);
}


void lcd_display(unsigned char * str,unsigned int length)
{
   for(int i=0;i<length;i++)
   {
	   lcd_data(str[i]);
   }
}

