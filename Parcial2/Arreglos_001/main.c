#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaraci�n de vectores
    float notas[5];

    char nombres[21];

    //inicializaci�n de vectores
    int calif[6]={20,19,20,20,20,18};

    int ar[]={2.5,4.10,9.8};

    //recorrido
    for (int i=0;i<6;i++){
        printf("\t%d",calif[i]);
    }

    //lectura
    int n;
    printf("\n\n\nIngrese el n�mero de elementos de su arreglo: ");
    scanf("%d",&n);
    int nuevo[n];
    for(int c=0; c<n;c++){
        printf("\n\t Ingrese un valor para la posici�n %d ",c);
        scanf("%d",&nuevo[c]);
    }
    printf("\ninicio de impresi�n\n");
    for(int k=0;k<n;k++){
        printf("\t [ %d ]",nuevo[k]);
    }



    return 0;
}
