#include <stdio.h>
#include <stdlib.h>
/*Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/

void main(){
    int array[5] = {1,2,3,4,5};
    int i;
    
    for(i = 4; i >= 0 ; i--){
        printf ("indice: %i, valor: %i\n", i, array[i]);
    }
    system("pause");
}