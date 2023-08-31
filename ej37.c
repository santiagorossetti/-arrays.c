#include <stdio.h>
#include <stdlib.h>

int main (int argc , char *argv[]){

int array[3][3];
int indice = 1;

for ( int i = 0 ; i < 3 ; i++){
    for (int j = 0 ; j < 3 ; j++){
        array[i][j] = atoi(argv[indice]);
        indice++;
        printf("%d\t", array[i][j]); 
        
    }
        printf("\n");
}
    return 0;   
}
