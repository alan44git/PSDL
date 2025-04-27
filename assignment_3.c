#include <xc.h>
#include<pic18f458.h>

void main(void) {
    int n1,n2,op,ans;
    TRISA = 1;
    TRISB = 1;
    TRISC = 1;
    TRISD = 0;
    n1 = LATA;
    n2 = LATB;
    op = LATC;
    
    switch(op){
        case 1: 
            ans = n1 * n2;
            break;
        case 2:
            ans = n1 / n2;
            break;
    }
    LATD = ans;
    while(1);
}
