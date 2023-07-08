/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
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
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

//For Common Anode:-

	void CA_Display_0(){

	  	  //Display 0
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_1(){
      //Display 1
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
  	  HAL_Delay(1000);

	}

	void CA_Display_2(){
	  	  //Display 2
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_3(){
	  	  //Display 3
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_4(){
	  	  //Display 4
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_5(){
	  	  //Display 5
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_6(){
	  	  //Display 6
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_7(){
	  	  //Display 7
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_8(){
	  	  //Display 8
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);
	}

	void CA_Display_9(){
	  	  //Display 9
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  	  HAL_Delay(1000);

	}


	  void CA_Sev_seg0_9(){
		  //Code For Common Anode
		  CA_Display_0();
		  CA_Display_1();
		  CA_Display_2();
		  CA_Display_3();
		  CA_Display_4();
		  CA_Display_5();
		  CA_Display_6();
		  CA_Display_7();
		  CA_Display_8();
		  CA_Display_9();

	  }


	  void CA_Sev_off(){
		  //OFF Display
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);   //g
		  //HAL_Delay(2000);
	  }


	  void CA_Sev_seg9_0(){
		  //Code For Common Anode
		  CA_Display_9();
		  CA_Display_8();
		  CA_Display_7();
		  CA_Display_6();
		  CA_Display_5();
		  CA_Display_4();
		  CA_Display_3();
		  CA_Display_2();
		  CA_Display_1();
		  CA_Display_0();
	  }


//For Common Cathode:-
	void CC_Display_0(){
			  //Display 0
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_1(){
		      //Display 1
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_2(){
			  //Display 2
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_3(){
			  //Display 3
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_4(){
			  //Display 4
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_5(){
			  //Display 5
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_6(){
			  //Display 6
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
			  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
			  HAL_Delay(1000);
	}


	void CC_Display_7(){
		  //Display 7
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
		  HAL_Delay(1000);
	}


	void CC_Display_8(){
		  //Display 8
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
		  HAL_Delay(1000);
	}


	void CC_Display_9(){
		  //Display 9
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
		  HAL_Delay(1000);
	}



	void CC_Sev_seg0_9(){
		  //Code For Common Cathode
		  CC_Display_0();
		  CC_Display_1();
		  CC_Display_2();
		  CC_Display_3();
		  CC_Display_4();
		  CC_Display_5();
		  CC_Display_6();
		  CC_Display_7();
		  CC_Display_8();
		  CC_Display_9();
	}


	void CC_Sev_off(){
		  //OFF Display
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
		  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);   //g
	}


	void CC_Sev_seg9_0(){
		  //Code For Common Cathode
				  CC_Display_9();
				  CC_Display_8();
				  CC_Display_7();
				  CC_Display_6();
				  CC_Display_5();
				  CC_Display_4();
				  CC_Display_3();
				  CC_Display_2();
				  CC_Display_1();
				  CC_Display_0();
	}


/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */


  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */




  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

	  uint8_t count = 0;

/*
 	 //For Common Anode
	  while(count<2){
		  if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13))){
			  count++;
			  if(count==1){
				  CA_Sev_seg0_9();
				  CA_Sev_off();
			  } else if(count==2){
				  CA_Sev_seg9_0();
				  CA_Sev_off();
			  }
		  } else{
			  CA_Sev_off();
		  }
	  }
*/


	   //For common Cathode:-
	  while(count<2){
		  if(!(HAL_GPIO_ReadPin(GPIOC,GPIO_PIN_13))){
			  count++;
			  if(count==1){
				  CC_Sev_seg0_9();
				  CC_Sev_off();
			  } else if(count==2){
				  CC_Sev_seg9_0();
				  CC_Sev_off();
			  }
		  } else{
			  CC_Sev_off();
		  }
	  }


	  /*

	  //Code For Common Anode

	  //Display 0
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

      //Display 1
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 2
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 3
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 4
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 5
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 6
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 7
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 8
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 9
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  */


	  /*


	  //Code For Common Cathode

	  //Display 0
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

      //Display 1
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 2
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 3
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 4
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 5
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 6
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 7
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);     //g
	  HAL_Delay(1000);

	  //Display 8
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	  //Display 9
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);   //a
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);   //b
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);   //c
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);   //d
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);   //e
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);   //f
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);     //g
	  HAL_Delay(1000);

	   */


    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}


/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PC0 PC1 PC2 PC3
                           PC4 PC5 PC6 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2_Pin */
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
