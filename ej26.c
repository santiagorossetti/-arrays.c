#include <stdio.h>

int main () {

    char *jugador[] = {
        "L. Messi",
        "L. Messi",
        "E. Fernandez",
    };

    char *dia[] = {
        "22/11",
        "26/11",
        "26/11",
    };

    int minutos[] = {
        10,
        64,
        87,
    };

    for (int i = 0 ; i < 3 ; i++){

        printf ("%s - Gol de %s a los %d minutos\n" , dia[i] , jugador[i] , minutos[i]);

    }

}