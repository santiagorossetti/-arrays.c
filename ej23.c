 #include <stdio.h>
#include <stdlib.h>


int main (int argc , char *argv[]){

int indice = atoi(argv[1]);

char *meses[] = {
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"    
};

if (indice >= 1 && indice <= 12)
{
    printf("el mes numero %d del año es %s\n" , indice , meses[indice - 1]);

} else {

    printf("Flaco anda a saber cuantos años tenes y todavia no sabes que hay 12 meses en el año, espero que te hayas confundido porque sino serias una decepcion para tus padres\n");

}

}
