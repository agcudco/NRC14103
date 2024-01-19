#include <stdio.h>
#include <stdlib.h>

void llenarMatriz(int nf, int nc, int mat[nf][nc]);
void imprimirMatriz(int nf, int nc, int mat[nf][nc]);

int main()
{
    int nf,nc;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d",&nf,&nc);
    int mat[nf][nc];
    llenarMatriz(nf,nc,mat);
    imprimirMatriz(nf,nc,mat);
    return 0;
}

void llenarMatriz(int nf, int nc, int mat[nf][nc])
{   int f,c;
    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            printf("Por favor ingrese el elemento [%d][%d]: ",f,c);
            scanf("%d",&mat[f][c]);
        }
    }
}

void imprimirMatriz(int nf, int nc, int mat[nf][nc])
{
    int f,c;
    for(f=0;f<nf;f++){
       for(c=0;c<nc;c++){
            printf("\t%d ",mat[f][c]);
       }
       printf("\n");
    }
}
