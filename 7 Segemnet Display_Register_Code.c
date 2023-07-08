#include "main.h"

void delay(int T){
	int i;
	while(T--){
		for(i=0;i<4000;i++);
	}
}


void initi(){
	RCC->AHB1ENR |= 0x4;      //STEP1 : Enable Port Clock on AHB1
	GPIOC->MODER |= 0x1555;   //To enable mode as Output  1 to pc6, 5 to pc5 & pc4, 5 to pc3 & pc2, 5 to pc1 & pc0

}

/*
//For BSRR Register:-
void CA_Display_0(){
	GPIOC->BSRR |= 0x40;           //Display - 0  a->0
}
void CA_Display_1(){
	GPIOC->BSRR |= 0x79;           //Display - 1   a->1
}
void CA_Display_2(){
	GPIOC->BSRR |= 0x24;             //Display - 2   a->2
}
void CA_Display_3(){
	GPIOC->BSRR |= 0x30;             //Display - 3   a->3
}
void CA_Display_4(){
	GPIOC->BSRR |= 0x19;             //Display - 4   a->4
}
void CA_Display_5(){
	GPIOC->BSRR |= 0x12;             //Display - 5   a->5
}
void CA_Display_6(){
	GPIOC->BSRR |= 0x2;             //Display - 6   a->6
}
void CA_Display_7(){
	GPIOC->BSRR |= 0x78;             //Display - 7   a->7
}
void CA_Display_8(){
	GPIOC->BSRR |= 0x00;             //Display - 8   a->8
}
void CA_Display_9(){
	 GPIOC->BSRR |= 0x10;             //Display - 9   a->9
}
*/

lcd_inital();

//For ODR Register:-
void CA_Display_0(){
	GPIOC->ODR |= 0x40;           //Display - 0  a->0
}
void CA_Display_1(){
	GPIOC->ODR |= 0x79;           //Display - 1   a->1
}
void CA_Display_2(){
	GPIOC->ODR |= 0x24;             //Display - 2   a->2
}
void CA_Display_3(){
	GPIOC->ODR |= 0x30;             //Display - 3   a->3
}
void CA_Display_4(){
	GPIOC->ODR |= 0x19;             //Display - 4   a->4
}
void CA_Display_5(){
	GPIOC->ODR |= 0x12;             //Display - 5   a->5
}
void CA_Display_6(){
	GPIOC->ODR |= 0x2;             //Display - 6   a->6
}
void CA_Display_7(){
	GPIOC->ODR |= 0x78;             //Display - 7   a->7
}
void CA_Display_8(){
	GPIOC->ODR |= 0x00;             //Display - 8   a->8
}
void CA_Display_9(){
	 GPIOC->ODR |= 0x10;             //Display - 9   a->9
	 }


int main(){


	while(1)
	{

		int count = 0;
		while(count<10){
			if(count==0){
				CA_Display_0();
				count++;
			}else if(count==1){
				CA_Display_1();
				count++;
			}else if(count==2){
				CA_Display_2();
				count++;
			}else if(count==3){
				CA_Display_3();
				count++;
			}else if(count==4){
				CA_Display_4();
				count++;
			}else if(count==5){
				CA_Display_5();
				count++;
			}else if(count==6){
				CA_Display_6();
				count++;
			}else if(count==7){
				CA_Display_7();
				count++;
			}else if(count==8){
				CA_Display_8();
				count++;
			}else{
				CA_Display_9();
				count++;
				GPIOC->BSRR &= 0x00;
			}
		}


		/*Common Anode Using BSRR register 7Seg Display:-
		 *
	//Enable using BSRR Register:

	GPIOC->BSRR |= 0x40;           //Display - 0  a->0

    GPIOC->BSRR |= 0x79;           //Display - 1   a->1

    GPIOC->BSRR |= 0x24;             //Display - 2   a->2

    GPIOC->BSRR |= 0x30;             //Display - 3   a->3

    GPIOC->BSRR |= 0x19;             //Display - 4   a->4

    GPIOC->BSRR |= 0x12;             //Display - 5   a->5
    GPIOC->BSRR = ~(0); // Clears all bits of GPIOx_BSRR


    GPIOC->BSRR |= 0x2;             //Display - 6   a->6

    GPIOC->BSRR |= 0x78;             //Display - 7   a->7
    //delay(1000);
    //GPIOC->BSRR = ~(0);

    GPIOC->BSRR |= 0x00;             //Display - 8   a->8

    GPIOC->BSRR |= 0x10;             //Display - 9   a->9
    */
}
}
