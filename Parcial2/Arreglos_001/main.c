#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaración de vectores
    float notas[5];

    char nombres[21];

    //inicialización de vectores
    int calif[6]={20,19,20,20,20,18};

    int ar[]={2.5,4.10,9.8};

    //recorrido
    for (int i=0;i<6;i++){
        printf("\t%d",calif[i]);
    }

    //lectura
    int n;
    printf("\n\n\nIngrese el número de elementos de su arreglo: ");
    scanf("%d",&n);
    int nuevo[n];
    for(int c=0; c<n;c++){
        printf("\n\t Ingrese un valor para la posición %d ",c);
        scanf("%d",&nuevo[c]);
    }
    printf("\ninicio de impresión\n");
    for(int k=0;k<n;k++){
        printf("\t [ %d ]",nuevo[k]);
    }



    return 0;
}
