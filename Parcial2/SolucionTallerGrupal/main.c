#include <stdio.h>
#include <stdlib.h>
#include "arreglos.h"


int main()
{
    printf("\nARREGLO a\n");
    printf("\n\t Numero de elementos del a");
    int n1=leerN();
    int a[n1];
    llenarArreglo(n1,a);
    imprimirArreglo(n1,a);
    ordenarArreglo(n1,a);
    imprimirArreglo(n1,a);

    printf("\nARREGLO b\n");
    printf("\n\t Numero de elementos del b");
    int n2=leerN();
    int b[n2];
    llenarArreglo(n2,b);
    imprimirArreglo(n2,b);
    ordenarArreglo(n2,b);
    imprimirArreglo(n2,b);

    if(n1==n2)
    {
        int c[n1];
        sumarArreglos(n1,a,b,c);
        printf("\n\nArreglo a: ");
        imprimirArreglo(n1,a);
        printf("\n\nArreglo b: ");
        imprimirArreglo(n2,b);
        printf("\n\nArreglo c: ");
        imprimirArreglo(n2,c);
    }
    return 0;
}

