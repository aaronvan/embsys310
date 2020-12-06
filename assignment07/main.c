#include <stdint.h>
#include "delay.h"
#include "system_stm32l4xx.h"
#include "stm32l475xx.h"

#if 0
#define RCC_BASE 0x40021000
#define RCC_AHB2ENR (*((unsigned int*)(RCC_BASE + 0x4C)))

#define GPIOB_BASE 0x48000400
#define GPIOB_MODER (*((unsigned int*)(GPIOB_BASE + 0x00)))
#define GPIOB_ODR (*((unsigned int*)(GPIOB_BASE + 0x14)))

#define GPIOA_BASE 0x48000000
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x00)))
#define GPIOA_ODR (*((unsigned int*)(GPIOA_BASE + 0x14)))

#define ORD14   (1<<14)
#define ORD5    (1<<5)
#endif

volatile int counter=0;

void main(void)
{     
#if 0
    
    RCC_AHB2ENR |= 0x3;
    
 
    GPIOB_MODER &= 0xDFFFFFFF;
    
    
    GPIOA_MODER &= 0xFFFFF7FF;

    while(1)
    {
        GPIOB_ODR |= ORD14;
        delay(100000);

        GPIOB_ODR &= ~ORD14;
        delay(100000);
    }
#endif
    
#if 1
    RCC->AHB2ENR |= RCC_AHB2ENR_GPIOBEN;
    
    GPIOB->MODER &= ~GPIO_MODER_MODE14_1;
    GPIOB->MODER |= GPIO_MODER_MODE14_0;

    
    while(1)
    {
        GPIOB->ODR |= GPIO_ODR_OD14;
        delay(100000);
        
        GPIOB->ODR &= ~GPIO_ODR_OD14;
        delay(100000);
    }    
#endif
}
