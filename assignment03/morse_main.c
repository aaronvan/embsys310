/* Morse Code Fun */

#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x48000000

#define RCC_AHB2ENR (*((unsigned int *)(RCC_BASE + 0x4c)))
#define GPIOA_MODER (*((unsigned int *)(GPIOA_BASE + 0x0)))
#define GPIOA_ODR   (*((unsigned int *)(GPIOA_BASE + 0x14)))

void Dot(void) {
    GPIOA_ODR ^= 0x20;
    int counter = 0;
    while (counter < 250000) {
        counter++;
    }
    GPIOA_ODR ^= 0x20;
 }

void Dash(void) {
    GPIOA_ODR ^= 0x20;
    int counter = 0;
    while (counter < 500000) {
        counter++;
    }
    GPIOA_ODR ^= 0x20;
 }

void Delay(void) {
    int counter = 0;
    while (counter < 1000000) {
        counter++;
    }
}

void Short_Delay(void) {
    int counter = 0;
    while (counter < 100000) {
        counter++;
    }
}

int main(void) {
    // bit[1] --> 1 enables the peripheral clock
    RCC_AHB2ENR |= 0x1;
    // set register mode to output
    GPIOA_MODER = 0xabfff7ff;
    
    // flash A
    Dot();
    Short_Delay();
    Dash();
    Delay();
    
    // flash A
    Dot();
    Short_Delay();
    Dash();
    Delay();
    
    // flash R
    Dot();
    Short_Delay();
    Dash();
    Short_Delay();
    Dot();
    Delay();
    
    // flash O
    Dash();
    Short_Delay();
    Dash();
    Short_Delay();
    Dash();
    Delay();
    
    // flash N
    Dash();
    Short_Delay();
    Dot();
    Short_Delay();
    Delay();
    
    return 0;
}
