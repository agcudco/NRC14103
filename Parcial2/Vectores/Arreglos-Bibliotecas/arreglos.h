#ifndef ARREGLOS_H_INCLUDED
#define ARREGLOS_H_INCLUDED

void llenarArreglo(int n, int a[]);
void imprimirArreglo(int n,int a[]);
int ingresarTamanioArreglo();
void imprimirInvertido(int n,int a[]);
void unirArreglos(int a[],int b[],int n1, int n2);
int obtenerTamnioArreglo(int a[]);
int buscarDato(int num,int a[],int n);
void buscarDatoPos(int num,int a[],int n);
int modificarDatos(int a[],int n, int ant, int act);
void eliminarDato(int a[],int n, int elim);

#endif // ARREGLOS_H_INCLUDED
