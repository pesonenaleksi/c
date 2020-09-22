#include <stdio.h>
#include <inttypes.h>

// Prototyyppi tähän
float lampotila(uint16_t rekisteri, float kerroin);

int main() {
    uint16_t rekisteri = 0b0011001000000000;
    double kerroin = 0.03125;
    printf("Kerroin tarkistus %d", kerroin);
    uint8_t tulos = lampotila(rekisteri, kerroin);
    printf("Kuumuutta on %d astetta", tulos);

    return 0;
}

// Funktion toteutus tänne..
float lampotila(rekisteri, kerroin) {
    
    rekisteri = rekisteri >> 2;
    uint16_t muunnos = rekisteri * kerroin;
    return muunnos;


}