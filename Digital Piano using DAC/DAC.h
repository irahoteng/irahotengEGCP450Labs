/*
 * DAC.h
 *
 *  Created on: Oct 18, 2023
 *      Author: niidr

*/
#ifndef DAC_H_
#define DAC_H_
void DAC_Init(void); //This will initalize  DAC GPIOS for the ports I will be using
void DAC_Out(uint32_t data); // new data will be sent to DAC

//void DAC_init();
//void DAC_Out(uint32_t data);

#endif /* DAC_H_ */
