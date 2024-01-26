#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5];

    printf("%d",rand() % 11);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j]=(rand()%11);
        }
    }

     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Triangular inferior\n");
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            mat[i][j]=0;
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

     printf("\nMatriz Triangular Superior\n");
     for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            mat[i][j]=0;
        }
     }

     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }


    return 0;
}
