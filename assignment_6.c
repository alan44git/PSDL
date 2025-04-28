#include <xc.h>
#include <pic18f4550.h>
#define Buzzer LATAbits.LATA5
unsigned int count = 0;

void __interrupt() Timer1_STR(){
    if(TMR1IF == 1){
        TMR1L = 0x20;
        TMR1H = 0xD1;
        count++;
        if(count >= 1000){
            Buzzer = ~Buzzer;
            count = 0;
        }
        TMR1IF = 0;
    }
}

void main(void) {
    TRISB = 0; // unecessary
    TRISAbits.TRISA5 = 0;
    GIE = 1;
    PEIE = 1;
    TMR1IE = 1;
    T1CON = 0x80;
    TMR1L = 0x20;
    TMR1H = 0xD1;
    TMR1ON = 1; // unecessary
x    while(1);
    return;
}
