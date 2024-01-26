#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

int leerNumero();
void llenarMatriz(int nf, int nc, int mat[nf][nc]);
void imprimirMatriz(int nf, int nc, int mat[nf][nc]);
void productoEscMat(int nf, int nc, int mat[nf][nc],int esc, int mat1[nf][nc]);
void transpuesta(int nf, int nc, int mat[nf][nc],int matTran[nc][nf]);
void sumarMatrices(int nf, int nc, int matA[nf][nc],int matB[nf][nc],int matRes[nf][nc]);
int menu();

#endif // MATRICES_H_INCLUDED
