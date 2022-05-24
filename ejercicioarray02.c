#include <stdio.h>
#include <stdlib.h>
/*Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/
void main(){

    int array[5] = {2,4,6,8,10};
    int promedio = 0;
    int suma = 0;

    for (int i = 0; i <= 4; i++){
        suma = suma + array[i];
    }
    promedio = suma/5;
    printf("la suma de los elementos es igual a %i\n", suma);
    printf("el promedio de los elementos es igual a %i\n", promedio);
    system("pause");
}