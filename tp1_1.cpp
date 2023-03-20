#include <stdio.h>

int main () {
    int variable = 7;
    int *punt = &variable;
    printf("Hola Mundo");
    printf("\nEl contenido del puntero es: %d", *punt);
    printf("\nLa direccion de memoria almacenada por el puntero es: %d", punt);
    printf("\nLa direccion de memoria de la variable es: %d", &variable);
    printf("\nLa direccion de memoria del puntero es: %d", &punt);
    printf("\nEl tamano de memoria utilizado por la variable es: %d", sizeof(variable));
    return 0;
}