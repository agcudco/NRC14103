#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main()
{
    int op=0,n1,n2;
    n1=leerNumero();
    n2=leerNumero();
    while(op>=1 || op<=3){
        switch(op){
            case 1:printf("\n\t PRODUCTO");
                break;
            case 2:printf("\n\t POTENCIA");
                break;
            case 3:
                printf("Gracias por usar el menú");
                break;
        }
        op=menu();
    }
    return 0;
}
