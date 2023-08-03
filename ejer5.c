#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(NULL));
    int a[100];
    int i, min, max;

    for(int i = 0; i < 100; i++) {
        a[i] = rand () % 101;
    }
        min = max = a[0];

    for(i = 1;i < 100; i++) {
        if(a[i] < min) {
            min = a[i];
        } else if(a[i] > max) {
            max = a[i];
        }

    printf("array generado:\n");
    for(i = 1; i < 100; i++) {
        printf("%d ", a[i]);
    }    
    printf("\n");

    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);
        return 0;
}
}