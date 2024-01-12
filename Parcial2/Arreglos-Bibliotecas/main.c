#include <stdio.h>
#include <stdlib.h>
#include "arreglos.h"

int main()
{
    int n1,n2,num,nuev,elim;
    printf("Arreglo 1");
    n1=ingresarTamanioArreglo();
    int arreglo1[n1];

    //invocaci�n de funciones
    printf("\n\n\t\tLlenado del Arreglo 1");
    llenarArreglo(n1,arreglo1);
    printf("\n\n\t\tImpresi�n del Arreglo 1");
    imprimirArreglo(n1,arreglo1);

    printf("\n\n\nIngrese el n�mero a buscar: ");
    scanf("%d",&num);

    buscarDatoPos(num,arreglo1,n1);
    printf("\n\n\nIngrese el nuevo n�mero a reemplazar: ");
    scanf("%d",&nuev);

    if(modificarDatos(arreglo1,n1,num,nuev)==1)
    {
        printf("\n\n\t\t Actualizaci�n exitosa");
    }else{
        printf("\n\n\t\t No se pudo actualizar");
    }

    imprimirArreglo(n1,arreglo1);

    printf("\n\n\nIngrese el elemento a eliminar: ");
    scanf("%d",&elim);
    eliminarDato(arreglo1,n1,elim);

    return 0;
}
