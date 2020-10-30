/* Blinking LED1 */

#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int *)(RCC_BASE + 0x4c)))
#define GPIOA_MODER (*((unsigned int *)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int *)(GPIOA_BASE + 0x14)))

void main(void) {
    // bit[1] --> 1 enables the peripheral clock
    RCC_AHB2ENR |= 0x1;
    
    // set register mode to output
    GPIOA_MODER = 0xabfff7ff;
    
    while (1) {
        int counter = 0;
        while (counter < 500000) {
            counter++;
        }
        GPIOA_ODR ^= 0x20;
    }
}