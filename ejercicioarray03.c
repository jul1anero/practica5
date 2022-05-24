#include <stdio.h>
#include <stdlib.h>
/*Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.*/
void main(){
    int array[5] = {};
    int cincoRepe = 0;
    for(int i = 0; i<=4; i++){
        printf("ingrese un valor para el indice %i en el arreglo\n", i);
        scanf("%i", &array[i]);
        if (array[i]==5){
            cincoRepe = cincoRepe + 1;
        }
    }
    printf("la cantidad de 5 repetidos es %i", cincoRepe);
    system("pause");
}