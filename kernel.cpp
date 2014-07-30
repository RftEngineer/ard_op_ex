#include "kernel.h"


void OSinit()
{
	Serial.begin(9600);
	int i = 0;
	checkSystem();

}

void OSrun()
{
	int j = 0;
}

void checkSystem()
{
	Serial.println("System Checking..");
	digitalWrite(13,LOW);
	digitalWrite(13,HIGH);

}