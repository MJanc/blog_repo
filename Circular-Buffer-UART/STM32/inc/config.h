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

#ifndef CONFIG_H_
#define CONFIG_H_

void GPIO_Config(void);
void UART_Config(void);
void NVIC_Config(void);

#endif /* CONFIG_H_ */
