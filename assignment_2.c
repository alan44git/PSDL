#include<xc.h>
#include<stdint.h>
#include<pic18f458.h>

#define SRC_ADDRESS 0x30
#define DEST_ADDRESS 0x40

uint8_t SourceData[5] = {10,20,30,40,50};
uint8_t DestinationData[5];
uint8_t i;

void transferData(void);

void main(void){
    TRISB = 0x00;
    LATB = 0x00;
    transferData();
    while(1);
}

void transferData(void){
    for(i = 0; i < 5; i++){
        LATB = SourceData[i];
        DestinationData[i] = LATB;
    }
}
