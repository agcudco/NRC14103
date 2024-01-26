int leerNumero(){
 int n;
 printf("Ingrese un numero: ");
 scanf("%d",&n);
 while(n<0){
    printf("Por favor ingrese un numero positivo");
    scanf("%d",&n);
 }
    return n;
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


void productoEscMat(int nf, int nc, int mat[nf][nc],int esc, int mat1[nf][nc])
{
    int f,c;
    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            mat1[f][c]= mat[f][c]*esc;
        }
    }
}

void transpuesta(int nf, int nc, int mat[nf][nc],int matTran[nc][nf])
{
    int f,c;
    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            matTran[f][c]= mat[c][f];
        }
    }
}


void sumarMatrices(int nf, int nc, int matA[nf][nc],int matB[nf][nc],int matRes[nf][nc])
{
    int f,c;
    for(f=0;f<nf;f++){
        for(c=0;c<nc;c++){
            matRes[f][c]= matA[f][c]+matB[f][c];
        }
    }
}

int menu()
{
    int op=-1;
    do{
       printf("\n\tMenu");
       printf("\n1.Leer dimensiones");
       printf("\n2.Llenar matriz A");
       printf("\n3.Visualizar matriz");
        printf("\n4.Ingresar num y hallar num*mat");
        printf("\n5.Hallar la matriz transpuesta");
        printf("\n6.Ingresar y llenar una matriz B");
        printf("\n7.Hallar 2A+3B");
        printf("\n8.Hallar A*B");
        printf("\n9.Salir\n\n");
        scanf("%d",&op);
    }while(op<1 && op>9);
    return op;
}
