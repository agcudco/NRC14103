#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5] = {10.8,19.95,18.5,20,17.5};
    int temp[4] = {37,30,25,19};

    for(int i=0;i<5;i++)
    {
        printf("\n\tnotas [%i] = %.2f ",i,notas[i]);
    }

    printf("\n\nArreglo temp");
    for(int j=0;j<4;j++)
    {
        printf("\t[%d]",temp[j]);
    }

    printf("\n\nArreglo temp {");
    for(int j=0;j<4;j++)
    {
        printf("\t%d,",temp[j]);
    }
    printf("}");
    return 0;
}
