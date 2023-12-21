/*
 * Piano.c
 *
 *  Created on: Oct 23, 2023
 *      Author: niidr
 */
#include <stdint.h>
#include "msp432p401r.h"
void Piano_Init(void){
    P5SEL0 &= ~0x07;
    P5SEL1 &= ~0x07;
    P5DIR &= ~0x07;
}
char Piano_In(void){
    char input = P5IN & 0X07;
    return input;
}

