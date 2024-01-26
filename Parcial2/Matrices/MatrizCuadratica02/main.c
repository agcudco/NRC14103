#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int leerDimensionMatriz();
void llenarMatriz(int n, float mat[n][n]);
void imprimirMatriz(int n, float mat[n][n]);
void sumatoriaFilas(int n, float mat[n][n]);
void generarVector(int n,int vector[n]);
void generarMatrizvector();


int main()
{
    int n,b;

    n=leerDimensionMatriz();
    float mat[n][n];
    llenarMatriz(n,mat);
    imprimirMatriz(n,mat);
    printf("\nSolucion\n");
    sumatoriaFilas(n,mat);
    return 0;
}

int leerDimensionMatriz()
{
    int n=0;
    do{
        printf("\tIngrese la dimensión de la matriz: ");
        scanf("%d",&n);
    }while(n<=1);

    return n;
}

void llenarMatriz(int n, float mat[n][n])
{
    int f=0,c=0,op=1;
    while(op==1)
    {
        printf("\nIngrese el elemento de la matriz [%d][%d]: ",f,c);
        scanf("%f",&mat[f][c]);
        c++;
        if(c==n){
            c=0;
            f++;
        }
        printf("\nDesea ingresar otro elemento: \n1: Si \n0: No\n");
        scanf("%d",&op);
        if(op!=1){
            for(int i=f;i<n;i++){
                for(int j=c;j<n;j++){
                    mat[i][j]=0;
                    if (c==n)
                    {
                        c=0;
                    }
                }
            }
        }
    }
}

void imprimirMatriz(int n, float mat[n][n])
{
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<n;j++){
           printf("%.2f\t",mat[i][j]);
        }
        printf("\n");
    }
}

void sumatoriaFilas(int n, float mat[n][n])
{
    float suma=0;
    for(int k=0;k<n;k++){
        printf("\t");
    }
    printf("Sumatoria");
    for(int i=0;i<n;i++){
        suma=0;
        printf("\n");
        for(int j=0;j<n;j++){
           printf("%.2f\t",mat[i][j]);
           suma=suma+mat[i][j];
        }
        printf("\t %.2f",suma);
        printf("\n");
    }
}

void generarVector(int n,int vector[n])
{
    for(int i=0;i<n;i++){
        vector[i]=
    }
}

