/*
 * Slave.c
 *
 * Created: 3/19/2021 4:11:45 PM
 * Author : Mohamed
 */ 
#include "CPU_CONFIGURATION.h"
#include "LED.h"
#include "SPI.h"

int main(void)
{
	LED0_Init();
	LED1_Init();
	LED2_Init();
	SPI_Init();
	
	
    /* Replace with your application code */
      while (1)
      {
	      switch (SPI_Receive())
	      {
		      case '1':
		      LED0_ON();
		      break;
		      
		      case '2':
		      LED1_ON();
		      break;
		      
		      case '3':
		      LED2_ON();
		      break;
		      
		      case '4':
		      LED0_OFF();
		      break;
		      
		      case '5':
		      LED1_OFF();
		      break;
		      
		      case '6':
		      LED2_OFF();
		      break;
	      } //End of switch
      } //End of while
} //End of main

