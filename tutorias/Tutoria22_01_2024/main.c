#include <stdio.h>
#include <stdlib.h>
#define MAX 100;

int main()
{
    int numNotas, numEst,f,c;
    float suma,prom;
    printf("Ingrese el numero de estudiantes\n");
    scanf("%d",&numEst);
    printf("Ingrese el numero de materias\n");
    scanf("%d",&numNotas);
    int estudiantes[numEst];
    float promedio[numEst];
    float notas[numEst][numNotas];

    for(f=0;f<numEst;f++){
        printf("\n Ingrese el codigo del estudiante: \t");
        scanf("%d",&estudiantes[f]);
        suma=0;
        for(c=0;c<numNotas;c++){
            printf("\tIngrese la calificación de la materia [%d] ",c);
            scanf("%f",&notas[f][c]);
            suma=suma+notas[f][c];
        }
        prom=suma/numNotas;
        promedio[f]=prom;
    }

    for(f=0;f<numEst;f++){
        printf("\n\nEl estudiante %d tiene las siguientes notas: ",estudiantes[f]);
        for(c=0;c<numNotas;c++){
            switch(c){
                case 0:
                    printf("\n Calculo: %.2f",notas[f][c]);
                    break;
                case 1:
                    printf("\n Invetsigacion: %.2f",notas[f][c]);
                    break;
                case 2:
                    printf("\n Programacion: %.2f",notas[f][c]);
                    break;
                default:
                    printf("\nOpcion invalida\n");
                    break;
            }
        }
        printf("\nPromedio final: %.2f",promedio[f]);
        if(promedio[f]>=14){
            printf("\n\bESTADO: APROBADO :)\b");
        }else{
            printf("\n\bESTADO: REPROBADO :(\b");
        }
    }

    return 0;


}
