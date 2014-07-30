
#ifndef KERNEL_H_
#define KERNEL_H_


#include <Arduino.h>

#define CPUtype AT328
//Based on Arduino UNO SMD R3 


void OSinit();
void OSrun();

void checkSystem();


#endif