#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
    int n,f,c;
    int mat[MAX][MAX];

    printf("\nPor favor ingrese la dimension de la Matriz\n");
    scanf("%d",&n);

    for(f=0;f<n;f++)
    {
        for(c=0;c<n;c++)
        {
            mat[f][c]=(rand()%21);
        }
    }

    for(f=0;f<n;f++)
    {
        printf("\n");
        for(c=0;c<n;c++)
        {
            printf("%d\t",mat[f][c]);
        }
        printf("\n");
    }

    for(f=0;f<n;f++)
    {
        mat[f][f]=100;
    }

    printf("\n\n Diagonal principal\n");
    for(f=0;f<n;f++)
    {
        printf("\n");
        for(c=0;c<n;c++)
        {
            printf("%d\t",mat[f][c]);
        }
        printf("\n");
    }

    for(f=1;f<=n;f++)
    {
        for(c=0;c<=f-1;c++)
        {
            mat[f][c]=7;
        }
    }

    printf("\n\n Triangulo inferior\n");
    for(f=0;f<n;f++)
    {
        printf("\n");
        for(c=0;c<n;c++)
        {
            printf("%d\t",mat[f][c]);
        }
        printf("\n");
    }

    for(f=0;f<=n-1;f++)
    {
        for(c=f+1;c<n;c++)
        {
            mat[f][c]=-50;
        }
    }

    printf("\n\n Triangulo Superior\n");
    for(f=0;f<n;f++)
    {
        printf("\n");
        for(c=0;c<n;c++)
        {
            printf("%d\t",mat[f][c]);
        }
        printf("\n");
    }

    return 0;
}
