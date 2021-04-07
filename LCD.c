#include "delay.h"
#include "LCD.h"
#include "msp.h"

void Clear_LCD();
void Home_LCD();
void Write_char_LCD();
void Initialization();

void Writecom(char A)
{
    P4->OUT = A; // P1 = A
    P5->OUT &= ~BIT0; // Instruction -> Reset
    P5->OUT &= ~BIT1; // RW -> Reset
    delay_us(1000);
    P5->OUT |= BIT2;
    delay_us(1000);
    P5->OUT &= ~BIT2;
    delay_us(1000);
}
