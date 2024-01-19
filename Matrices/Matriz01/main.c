#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int mat[3][2] = {3,5,6,7,9,10};

    for(int f=0;f<3;f++){
       for(int c=0;c<2;c++){
            printf("\t%d ",mat[f][c]);
       }
       printf("\n");
    }
    */

    int nf,nc,n,f,c,i=0,suma=0;
    float promedio;
    printf("Ingrese el numero de filas y columnas: ");
    scanf("%d %d",&nf,&nc);
    int mat[nf][nc];
    n=nf*nc;
    int aux[n];

    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            printf("Por favor ingrese el elemento [%d][%d]: ",f,c);
            scanf("%d",&mat[f][c]);
        }
    }

    for(f=0;f<nf;f++){
       for(c=0;c<nc;c++){
            printf("\t%d ",mat[f][c]);
       }
       printf("\n");
    }
    /*
    for (f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            suma= suma+mat[f][c];
        }
     }
     printf("La sumatoria de la matriz es: %d\n",suma);

     promedio=(float)suma/(nf*nc);

     printf("El promedio de la mtatriz es: %.2f",promedio);
    */
    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            aux[i]=mat[f][c];
            i++;
        }
    }

    printf("\n\nVector");
    for(i=0;i<n;i++){
       printf(" [%d] ",aux[i]);
    }

    return 0;
}
