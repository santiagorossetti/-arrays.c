#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    srand(time(NULL));
    int a[100];
    double sum = 0;

    for (int i = 0;i < 100; i++) {
        a[i] = rand () % 101;
        printf("%d \n", a[i]);
        sum += a[i];
    }

    int promedio = sum / 100;
    printf("El promedio es: %d\n", promedio);
    return 0;
}