 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc , char *argv[]){
srand(time(NULL));


int matrizA[3][3];
int matrizB[3][3];
int matrizC[3][3];

for ( int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
        matrizA[i][j] = rand () % 100;
        matrizB[i][j] = rand () % 100;

        matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        printf("%d\t" , matrizC[i][j]);
    }    
    printf("\n");

}


}