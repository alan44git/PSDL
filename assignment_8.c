#include <xc.h>
#include <pic18f4550.h>
#define RELAY_PIN LATAbits.LATA4

void __interrupt() extint_isr(void){
    if(INT1F){
        INT1F = 0;
        INT1IE = 0;
        RELAY_PIN = ~RELAY_PIN;
        for(int i = 0; i<10000;i++);
        INT1E = 1;
    }
}

void main(void) {
    ADCON1 = 0x0F;
    TRISAbits.TRISA4 = 0; // RA4 as output(relay control pin)
    TRISBbits.TRISB1 = 1; // RB1 as input(external interrupt)
    RELAY_PIN = 1;
    INT1IE = 1;
    INTEDG1 = 0;
    GIE = 1;
    while(1);
    return;
}
