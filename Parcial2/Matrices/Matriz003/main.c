#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

#define MAX 100

int main()
{
    int nf,nc,esc,op,nfB,ncB;
    int matA[MAX][MAX];
    int matB[MAX][MAX];
    int matEscProd[MAX][MAX];
    int matTransp[MAX][MAX];
    op = menu();
    while(op!=9)
    {
        switch(op){
            case 1:
                printf("\nLectura de dimensiones\n");
                printf("\t\t Filas\n");
                nf = leerNumero();
                printf("\t\t Columnas\n");
                nc = leerNumero();
                break;
            case 2:
                //int matA[nf][nc];
                llenarMatriz(nf,nc,matA);
                break;
            case 3:
                imprimirMatriz(nf,nc,matA);
                break;
            case 4:
                printf("\n\tMatriz * escalar\n");
                esc = leerNumero();
                productoEscMat(nf,nc,matA,esc,matEscProd);
                printf("\n\tMatriz Resultado:\n");
                imprimirMatriz(nf,nc,matEscProd);
                break;
            case 5:
                transpuesta(nf,nc,matA,matTransp);
                printf("\n\tMatriz Resultado:\n");
                imprimirMatriz(nc,nf,matTransp);
                break;
            case 6:
                printf("\t\t Filas\n");
                nfB = leerNumero();
                printf("\t\t Columnas\n");
                ncB = leerNumero();
                llenarMatriz(nfB,ncB,matB);
                imprimirMatriz(nfB,ncB,matB);
                break;
            case 7:

            case 8:
            case 9:
                printf("\n\n\tGracias por su visita!!!");
                break;
            default:
                printf("\n\nOpción Inválida");
                break;
        }
        op = menu();
    }
    return 0;
}
