/*
 * gpio.c
 *
 *  Created on: 13 Jun 2025
 *      Author: Thang
 */
#include "debug.h"
#include "user.h"
#include  "gpio.h"

//void GPIO_Toggle_INIT(void)
//{
//  //GPIO_InitTypeDef  GPIO_InitStructure={0};
//
//  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
////  GPIO_InitStructure.GPIO_Pin = LED1|GPIO_Pin_1;
////  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
////  GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
////  GPIO_Init(GPIOA, &GPIO_InitStructure);
////
////  GPIO_InitStructure.GPIO_Pin = BUTTON1;
////  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
//// // GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
////  GPIO_Init(GPIOA, &GPIO_InitStructure);
//
//
//
//}
void pinMode(u8 pin, u8 mode) {
    PORT_enable(pin);
    if (mode == INPUT) {
        PIN_input(pin);
    } else if (mode == INPUT_PULLUP) {
        PIN_input_PU(pin);
    } else if (mode == OUTPUT) {
        PIN_output(pin);
    }
}

void digitalWrite(u8 pin, u8 val) {

    if (val == 1) {
        PIN_high(pin);

    } else {
        PIN_low(pin);
    }
}
u8 digitalRead(u8 pin)
{
return PIN_read(pin);
}
