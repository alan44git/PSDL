#include <xc.h>
#include <stdio.h>
#include <pic18f458.h>

void main(void) {
    int a[4] = {1,2,3,4};
    int sum = 0;
    for(int i=0;i<4;i++){
        sum = sum + a[i];
    }
    TRISA = 0;
    LATA = sum;
    while(1);
}
