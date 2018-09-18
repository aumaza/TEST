#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"



int main()
{
    float a;
    float b;

    printf("\nIngrese un numero: ");
    scanf("%f", &a);
    getchar();

    verifica();

    printf("\n=====================\n");
    printf("\nIngrese otro numero: ");
    scanf("%f", &b);
    getchar();
    printf("\n=====================\n");
    printf("\nValores dentro de la funcion");
    muestra(a,b);
    printf("\n=============================\n");
    printf("\nValores de las variables (a): %.2f y (b): %.2f", a, b);
    printf("\n===========================================\n");

    suma(a,b);
    producto(a,b);
    resta(a,b);
    division(a,b);

    return 0;
}

