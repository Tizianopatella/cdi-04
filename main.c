#include <studio.h>
#include "pico/stdlib.h"

int main() {
    stdio_int_all();
    gpio_int(13);
    gpio_int(25);
    gpio_set_dir(13,true);
    gpio_set_dir(25,false);
    while(1);{
     
       char val=gpio_get(13);
       char led=gpio_get(25);
       if(val == 1 && led==0) {
                 gpio_put(25,true);
                 
       }
       if(val == 1 && led==1){
            gpio_put(25,false);
       }
       sleep_ms(500);
       }
    
    }
