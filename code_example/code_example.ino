#include <stdio.h>
#include <stdlib.h>

int freeRam(void)
{
  extern unsigned int __heap_start;
  extern void *__brkval;

  int free_memory;
  int stack_here;

  if (__brkval == 0)
    free_memory = (int) &stack_here - (int) &__heap_start;
  else
    free_memory = (int) &stack_here - (int) __brkval; 

  return (free_memory);
}

void setup()
{
  int i = 0;
  i = freeRam();  
}

void loop()
{
  
}
