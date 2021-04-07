#include "msp.h"
#include "delay.h"
#include "LCD.h"

int main(void) {
    P5->SEL1 &= ~(BIT0 | BIT1 | BIT2);
    P5->SEL0 &= ~(BIT0 | BIT1 | BIT2);
    P5->DIR |= BIT0 | BIT1 | BIT2;

    P4->SEL1 &= ~0xff;
    P4->SEL0 &= ~0xff;
    P4->DIR  |= 0xff;

    setup_DCO(FREQ_6MHZ);

    while(1)
    {
        // Run Program
    }
}
