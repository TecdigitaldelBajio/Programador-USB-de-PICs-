#include <PIC16F1824_Blink.h>
#define LEDA PIN_C0
#define LEDB PIN_C2
#define inCoil PIN_C3
#define DELAY 25
void main() {

   //Example blinking LED program
   while(true){
    if (input(inCoil) == 0) {
        output_high(LEDA);//10
        delay_ms(DELAY);
     //   output_low(LEDB);
       // delay_ms(DELAY);
      
      //  output_high(LEDA);//11
      //  delay_ms(DELAYUS);
        output_high(LEDB);        
        delay_ms(DELAY);
        
        output_low(LEDA);//01
        delay_ms(DELAY);
    //    output_high(LEDB);        
      //  delay_ms(DELAY);
        
    //    output_low(LEDA);//00
      //  delay_ms(DELAYUS);
        output_low(LEDB);
        delay_ms(DELAY);
    }  
      /*output_low(LED);
      delay_ms(DELAY);
      output_high(LED);
      delay_ms(DELAY);*/
   }

}
