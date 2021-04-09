#include "msp.h"
#include "delay.h"
#include "LCD.h"

int main(void) {
    P4->SEL1 &= ~0xff;
    P4->SEL0 &= ~0xff;
    P4->DIR  |= 0xff;

    Initialization();

    Clear_LCD();
    Home_LCD();

    Write_string_LCD("Hello World", 11);
    Second_Line_LCD();
    Write_string_LCD("Assignment 2", 12);

    while(1)
    {
        // Run Program
    }
}
