#include <18F4550.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES WDT128                	//Watch Dog Timer uses 1:128 Postscale
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOPBADEN              	//PORTB pins are configured as digital I/O on RESET
#FUSES NOLPT1OSC             	//Timer1 configured for higher power operation
#FUSES NOMCLR                	//Master Clear pin used for I/O
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOXINST               	//Extended set extension and Indexed Addressing mode disabled (Legacy mode)

#use delay(internal=8000000)

#define LED PIN_B0
#define DELAY 100


