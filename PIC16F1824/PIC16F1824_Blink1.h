#include <16LF1824.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES NOMCLR                	//Master Clear pin used for I/O
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(internal=8000000)

#define LED PIN_C0
#define DELAY 500


