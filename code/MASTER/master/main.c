/*
 * master.c
 *
 * Created: 3/19/2021 3:54:29 PM
 * Author : Mohamed
 */ 
#include "CPU_CONFIGURATION.h"
#include "SPI.h"
#include "UART.h"




int main(void)
{
	SPI_Init();
	UART_Init();
	SPI_SlaveSelect(0);
	
	
    /* Replace with your application code */
    while (1) 
    {

		switch (UART_Receive())
		{
			case 'a':
			SPI_Transmit('1');
			break;
			
			case 's':
			SPI_Transmit('2');
			break;
			
			case 'd':
			SPI_Transmit('3');
			break;
			
			case 'z':
			SPI_Transmit('4');
			break;
			
			case 'x':
			SPI_Transmit('5');
			break;
			
			case 'c':
			SPI_Transmit('6');
			break;
		}//End of switch
    } //End of while
} //End of main



