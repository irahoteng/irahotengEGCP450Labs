#include <stdint.h>
#include <stdio.h>
#include "SysTickInts.h"
#include "LCD.h"
#include "msp432p401r.h"
#include  "ADC14.h"
void SysTick_Init(uint32_t ms);

float Slope = 0.12246; //float  gives better precision
float Slope_Precision = 6;
void main() {
    uint32_t ADC;
    ADC0_InitSWTriggerCh0();
    SysTick_Init(75000);
    LCD_Init();
    LCD_OutString("Hello student");

    while (1) {
        ADC = (ADC_In() * (Slope)-(Slope_Precision));
        LCD_OutCmd(0xC0);
        LCD_OutUFix(ADC);
        LCD_OutString(" cm");
        SysTick_Wait10ms(5);

    }


}
