#include <24FJ64GA002.h>

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOWINDIS                 //Watch Dog Timer in Window mode
#FUSES NOJTAG                   //JTAG disabled
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled

#device ICSP=1
#use delay(internal=8000000)

#define LED PIN_B0
#define DELAY 100

