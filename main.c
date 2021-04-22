/*
 * File:   main.c
 * Author: 20185307
 *
 * Created on 22 de Abril de 2021, 13:41
 */


#include <xc.h>
#include "config.H"
#define DADOS PORTB
#define EN PORTDbits.RD7
#define RS PORTDbits.RD6

void LCD_init(void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    ANSELH = 0;
    TRISB = 0x00;
    
    DADOS = 0x00;
    EN = 1;
    RS = 0;
}

void LCD_on(void)
{
    RS = 0;
    EN = 1;
    DADOS = 0x0F;
    EN = 0;
    __delay_us(40);
    EN = 1;
}

void LCD_printChar(char c)
{
    RS = 1;
    DADOS = c;
    EN = 0;
    __delay_us(40);
    EN = 1;
}



int main(void) {
    /* Replace with your application code */
    while (1) {
    }
}
