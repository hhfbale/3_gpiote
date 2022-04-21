#include "gpio.h"
#include "gpiote.h"
#include "ppi.h"

int main(){
    GPIO0->PIN_CNF[28] = 1;
    GPIO0->PIN_CNF[11] = 1;
    GPIO0->PIN_CNF[31] = 1;
    GPIO1->PIN_CNF[5] = 1;  
    GPIO0->PIN_CNF[30] = 1;
    init_PPI();
    gpiote_init();
    
    while(1){
    }
    
    return 0;
}