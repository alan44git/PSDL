#include <xc.h>
#include<pic18f4550.h>
void delay(int time){
    for(int i = 0; i < time; i++){
        for( int j = 0; j < 5000; j++){
            
        }
    }
}

void main(void) {
    TRISB = 0x00;
    LATB = 0xAA;
    
    while(1){
        LATB = ~LATB;
        delay(20);
    }
    return;
}
