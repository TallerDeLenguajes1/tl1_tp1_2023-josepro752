#include <stdio.h>

float cuadrado (float numero);
void cuadrado (float *numero);
void invertir (int *a,int *b);
void masChico (int *a,int *b);

int main () {
    int num,a,b;
    printf("Ingrese un numero entero:");
    scanf("%d",&num);
    printf("La direccion de memoria es: %p",&num);
    printf("\nEl contenido de la variable es: %d",num);
    printf("\nIngrese un numero entero a: ");
    scanf("%d", &a);
    printf("\nIngrese un numero entero b: ");
    scanf("%d", &b);
    invertir(&a,&b);
    printf("\nAhora su numero a es: %d", a);
    printf("\nAhora su numero b es: %d", b);
    masChico(&a,&b);
    printf("\nEl numero mas grande es %d", b);
    printf("\nEl numero mas chico es %d", a);
    return 0;
}

float cuadrado (float numero) {
    return (numero*numero);
}

void cuadrado (float *a) {
    *a = (*a)*(*a);
}

void invertir (int *a,int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void masChico (int *a,int *b) {
    int aux;
    if (*a > *b) {
        aux = *b;
        *b = *a;
        *a = aux;
    }
}
