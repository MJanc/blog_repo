/*
 * Autor: �ukasz �aguna
 * E-mail: kontakt@embeddeddev.pl
 * www.EmbeddedDev.pl
 *
 * Obs�uga interfejsu UART w mikrokontrolerach w oparciu o przerwania,
 * korzystaj�c z bufora ko�owego (cyklicznego)
 *
 * MCU: STM32F103
 *
 */

#include "stm32f10x.h"
#include "config.h"
#include "../UART/uart.h"


int main(void){

	GPIO_Config();
	UART_Config();
	NVIC_Config();

	while(1){

		uart_put_string("www.EmbeddedDev.pl\n\r");

	}

}
