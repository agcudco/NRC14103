#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,mayor,menor,suma;
    float edadPromedio;
    printf("\n\tIngrese la cantidad de estudiantes: \n");
    scanf("%d",&n);
    int edades[n];

    for(int g=0;g<n;g++){
        printf("\nIngrese la edad para la posición: edades[%d]: ",g);
        scanf("%d",&edades[g]);
    }

    printf("\nEdades ingresadas: \n");
    for(int i=0;i<n;i++){
        printf("\t [ %d ]",edades[i]);
    }

    //calculo del promedio de edades
    for(int j=0;j<n;j++){
        suma+=edades[j];
    }
    edadPromedio=(float)suma/n;

    printf("\n\n\tla edad promedio es: %.2f: ",edadPromedio);

    mayor=edades[0];
    for(int j=1;j<n;j++){
        if(edades[j]>mayor)
        {
            mayor=edades[j];
        }
    }

    menor=edades[0];
    for(int j=1;j<n;j++){
        if(edades[j]<menor)
        {
            menor=edades[j];
        }
    }

    printf("\n\n\t La mayor edad es: %d: \n",mayor);
    printf("\n\n\t La menor edad es: %d: \n",menor);


    return 0;
}
