#include <stdint.h>
#include "msp432p401r.h"
#include "DAC.h"
//#include "Sound.h"

void DAC_Init(){
    P4SEL0 &= ~0x0F;//GPIO  port 4 0x0F we will be using pins 0-3
    P4SEL1 &= ~0x0F;
    P4DIR |= 0x0F;
    P4OUT &= ~0x0F;
}
//P4.0-P4.3 are outputs now
//Output will be 4bit
//Output value is being updated in DAC_out
void DAC_Out(uint32_t data) {
    P4OUT = (data)&0x0F;
}


