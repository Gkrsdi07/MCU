/* The connections
* I2C1_SCL - PB08
* I2C1_SDA - PB09
**/

#include "stm32f4xx.h"
#include<stdio.h>
#define SLAVE_ADDR 0x68 						/* 1101 000. DS1307 */

void delay(uint32_t  x);
void I2C1_init(void);
void I2C1_burstRead(char saddr, char maddr, int n, char* data);
void I2C1_burstWrite(char saddr, char maddr, int n, char* data);
int BCDtoDecimal(int );


					  /*	00 01  02  03 04  05  06 */
char timeDateToSet[15] = {0x20, 0x14, 0x15, 0x06, 0x29, 0x04, 0x23, 0};
						//55:19:16 6(SATURDAY), 29(date), 04(APRIL) 2023/

char timeDateReadback[15];
 char set_time[15];
 unsigned char numaric_value[20];
 int rtc_data[15];

 char buffer[15];



 //------------------------------------LCD Fun-----------------------
#define RS 0x20							//PA5 mask for Register select
//R/W CONNECT TO GROUND
#define EN 0x80							//PA7 mask for register select
void LCD_nibble_write(char data, unsigned char control);
void LCD_command(unsigned char command);
void LCD_data(char data);
void LCD_init(void);
void PORTS_init(void);
void LCD_string(char []);
  //---------------------------------
  void Get_Time();

  //------------------------------Time-structure---------------------
  typedef struct {
  	uint8_t seconds;
  	uint8_t minutes;
  	uint8_t hour;
  	uint8_t dayofweek;
  	uint8_t dayofmonth;
  	uint8_t month;
  	uint8_t year;
  } TIME;

  TIME time;


  int main(void)
   {

       I2C1_init();
       LCD_init();
       delay(10);

   //    LCD_data('m');
       LCD_string("TIME:");
       LCD_command(0xC0);
       LCD_string("DATE:");
       I2C1_burstWrite(SLAVE_ADDR, 0x00, 7, timeDateToSet);

       while (1)
       {
       	LCD_command(0x86);

       	Get_Time();		//reading RTC data

       	sprintf (buffer, "%02d:%02d:%02d", time.hour, time.minutes, time.seconds);
       	//delay(1);
       	LCD_string(buffer);
       	//delay(1);

       	sprintf (buffer, "%02d-%02d-20%02d", time.dayofmonth, time.month, time.year);
       	//delay(1);
       	LCD_command(0xC6);
       	LCD_string(buffer);
       	//delay(1);
       	//LCD_command(0x08);				//turn off the screen
       	//delay(200);
       	LCD_command(0x0C);				//turn on the screen and cursor off

       }

   }


  void I2C1_init(void)
  {

  	RCC->AHB1ENR |= 2; 							/* Enable GPIOB clock */
  	RCC->APB1ENR |= 1<<21; 					/* Enable I2C1 clock */

  	/* configure PB8, PB9 pins for I2C1 */

  	GPIOB->MODER &= ~0xF0000; 				/* PB8, PB9 use alternate function */
  	GPIOB->MODER |= 0xA0000;
  	GPIOB->AFR[1] &= ~0xFF; 				/* PB8, PB9 I2C1 SCL, SDA */
  	GPIOB->AFR[1] |= 0x44;
  	GPIOB->OTYPER |= 0x300; 				/* output open-drain */
  	GPIOB->PUPDR &=~0xF0000; 				/* with pull-ups */
  	GPIOB->PUPDR |= 0x50000;

  	I2C1->CR1 = 0x8000; 						/* software reset I2C1 */
  	I2C1->CR1 &= ~0x8000;						/* out of reset */
  	I2C1->CR2 = 0x10; 						/* peripheral clock is 16 MHz*/

  	I2C1->CCR = 80; 							/* standard mode, 100kHz clock */ //0x50
  	I2C1->TRISE =17; 							/* maximum rise time */  //0x11
  	I2C1->CR1 |= 0x1; 						/* enable I2C1module */
  }

  void I2C1_burstWrite(char saddr, char maddr, int n, char* data)
  {
      int i;
      volatile int tmp;

      while (I2C1->SR2 & 2);                  /* wait until bus not busy */
      I2C1->CR1 &= ~0x800;                    /* disable POS */
      I2C1->CR1 |= 0x100;                     /* generate start */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1;                  /* transmit slave address */
      while (!(I2C1->SR1 & 0x2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      while (!(I2C1->SR1 & 0x80));            /* wait until data register empty */
      I2C1->DR = maddr;                       /* send memory address */

      /* write all the data */
      for (i = 0; i < n; i++)
      {
          while (!(I2C1->SR1 & 0x80));        /* wait until data register empty */
          I2C1->DR = *data++;                // transmit memory address */
      }

      while (!(I2C1->SR1 & 4));               /* wait until transfer finished */
      I2C1->CR1 |= 0x200;                     /* generate stop */
  }

  void I2C1_burstRead(char saddr, char maddr, int n, char* data)
  {
      volatile int tmp;

      while (I2C1->SR2 & 2);                  /* wait until bus not busy */
      I2C1->CR1 &= ~0x800;                    /* disable POS */
      I2C1->CR1 |= 0x100;                     /* generate start */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1;                  /* transmit slave address + Write */
      while (!(I2C1->SR1 & 2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      while (!(I2C1->SR1 & 0x80));            /* wait until transmitter empty */
      I2C1->DR = maddr;                       /* send memory address */
      while (!(I2C1->SR1 & 0x80));            /* wait until transmitter empty */

      I2C1->CR1 |= 0x100;                     /* generate restart */
      while (!(I2C1->SR1 & 1));               /* wait until start flag is set */
      I2C1->DR = saddr << 1 | 1;              /* transmit slave address + Read */
      while (!(I2C1->SR1 & 2));               /* wait until addr flag is set */
      tmp = I2C1->SR2;                        /* clear addr flag */
      I2C1->CR1 |=  0x0400;                   /* Enable Acknowledge */

      while(n > 0)
      {
          /* One byte left */
          if(n == 1)
          {
              I2C1->CR1 &= ~(0x400);          /* Disable Acknowledge */
              I2C1->CR1 |= 0x200;             /* Generate Stop */
              while (!(I2C1->SR1 & 0x40));    /* Wait for RXNE flag set */
              *data++ =I2C1->DR;             		// Read data from DR */
              break;
          }
          else
          {
              while (!(I2C1->SR1 & 0x40));    /* Wait until RXNE flag is set */
              *data++ =I2C1->DR;           			// Read data from DR */
              n--;
          }
      }
  }

  void Get_Time()
  {
  	//uint8_t get_time[7];
  	I2C1_burstRead(SLAVE_ADDR, 0x00, 7, timeDateReadback);

  	time.seconds = BCDtoDecimal(timeDateReadback[0]);		////conversion back
  	time.minutes = BCDtoDecimal(timeDateReadback[1]);
  	time.hour = 	BCDtoDecimal(timeDateReadback[2]);
  	time.dayofweek = BCDtoDecimal(timeDateReadback[3]);
  	time.dayofmonth = BCDtoDecimal(timeDateReadback[4]);
  	time.month = BCDtoDecimal(timeDateReadback[5]);
  	time.year = BCDtoDecimal(timeDateReadback[6]);
  }

  void delay(uint32_t  x)
  {
  	for(int i=0;i<x;i++)
  	{
  		for(int j=0;j<3000;j++);
  	}
  }

  int BCDtoDecimal(int BCD)
  {
  	return(((BCD>>4)*10) + (BCD & 0xf));
  }



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
  		GPIOA->MODER &=~((3<<10) | (3<<14)); //0xCC00                //clear all pin PA5 PA6 PA7
  		GPIOA->MODER |=0x4400; 				//set all pin 5,6,7 as o/p mode
  	//	GPIOA->BSRR = 0xC00000;	//(3<<22)			//turn off EN and RW pin
  		GPIOC->MODER &=~0xFF00;				// CLEAR all pin 4-7 of port C
  		GPIOC->MODER |= 0x5500;				// set all pin 4-7 as o/p mode


  }

  void LCD_nibble_write(char data, unsigned char control)
  {
  	/*populate data bits */
  	GPIOC->BSRR = 0xF00000; 					/* reset the PC4-PC7 data bits */
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
