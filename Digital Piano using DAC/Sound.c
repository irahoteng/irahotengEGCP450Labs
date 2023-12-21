/*
 * Sound.c
 *
 *  Created on: Oct 23, 2023
 *      Author: niidr
 */

#include <stdint.h>
#include "SysTickInts.h"
#include "Piano.h"
#include "msp432p401r.h"
#include "DAC.h"

const uint32_t wave[32] = {// The following is a collection of 32 samples
 8,9,11,12,13,14,14,15,15,
 15,14, 14,13,12,11,9,8,7,5,4,3,2,
 2,1,1,1,2,2,3,4,5,7
};
extern uint32_t index;
extern uint32_t index;
uint32_t index = 0; //we want to initialize at 0
//SysTick Interrupts are initialized
//DAC_Init will make use of DAC  in our Sound_Init

void Sound_Init(void){
    //begin initializing here
    DAC_Init();
    SysTick_Init(1);
};
void Sound_Music(void){
    DAC_Out(wave[index]);
    index++;
    if(index > 31){
        index = 0;
    }
}
void Sound_Off(void){
    SysTick -> LOAD = (0); //Sound is turned off
}
