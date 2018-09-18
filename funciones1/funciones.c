#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"


void muestra(float x, float y)
{

printf("\nEl valor de (x) es: %.2f", x);
printf("\nEl valor de (y) es: %.2f", y);

}

unsigned int verifica()
{
char resp='S';

printf("\nDesea continuar? (S/N): ");
resp=toupper(getchar());
getchar();

while(!((resp=='S') || (resp=='N')))
      {
          printf("\nDebe ingresar solo las letras S o N: ");
          resp=toupper(getchar());
          getchar();
      }

return (resp=='S');
}

void suma (float x, float y)
{
    float suma;

    suma = x + y;

    printf("\nLa suma es: %.2f", suma);
    printf("\n=====================\n");

}

void producto(float x, float y)
{
    float prod;
    prod = x * y;

    printf("\nEl producto es: %.2f", prod);
    printf("\n=====================\n");
}

void resta(float r, float w)
{
    float resta;

    resta = r - w;
    printf("\nLa resta es: %.2f", resta);
    printf("\n=====================\n");
}

void division(float t, float s)
{
    float div;

    if(t>0)
    {
        div = t / s;
        printf("\nLa division es: %.2f", div);
        printf("\n=====================\n");
    }

    /*else if((s = 0))
    {
        div = t / s %2;
        printf("\nLa divison por cero es: 0");
    }*/

    else
    {
        printf("\nNo es valida la operacion!");
        printf("\n==========================\n");
    }

}
