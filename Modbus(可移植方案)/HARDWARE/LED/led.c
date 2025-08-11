#include "led.h"

void LED_Init(void)
{

    GPIO_InitTypeDef GPIO_InitStucture;;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitStucture.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStucture.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStucture.GPIO_Speed = GPIO_Speed_50MHz;

    GPIO_Init(GPIOC, &GPIO_InitStucture);
	
	GPIO_SetBits(GPIOC,GPIO_Pin_13);
}

