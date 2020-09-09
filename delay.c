//LCD_1_Delay50u(); //retardo de 50uS
//LCD_1_Delay50uTimes(); //retardo n multiplos de 50uS; n<=255

#include "delay.h"

void delay1ms(void){
   LCD_Delay50uTimes(20); //20 para 24 MHz
}

void delayms(unsigned int miliseg){
  unsigned int counter;
  for(counter=0; counter<miliseg; counter++)
      delay1ms();
}

void delayseg(unsigned char seg){
  unsigned int counter;
  for(counter=0; counter<seg; counter++)
      delayms(1000);
}