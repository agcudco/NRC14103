#include <stdio.h>
#include <stdlib.h>
#include "funciones.h""

int main()
{
    int num;
    float prom,num1,num2;
    num = leerNumero();
    printf("\n\n\t Variable obtenida de la función: %d",num);

    printf("\n\tIngrese dos numeros decimales: ");
    scanf("%f, %f",&num1,&num2);
    prom = promedio(num1,num2);
    printf("\n\tEl promedio entre %.2f y %.2f es: %.2f ",num1,num2,prom);
    calculadora(num1,num2);
    return 0;
}

