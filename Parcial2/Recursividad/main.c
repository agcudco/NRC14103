#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int factorialRecursivo(int);
int sumaRecursiva(int);
void impresionRecursiva(int);

int main()
{
    int n;
    printf("\n\tIngrese un número: ");
    scanf("%d",&n);
    printf("\n\n\n Factorial de %d es %d: ",n,factorial(n));
    printf("\n\n\n Factorial Recursivo de %d es %d: ",n,factorialRecursivo(n));
    printf("\n\n\nSUMA RECURSIVA de %d: %d: \n\n",n,sumaRecursiva(n));
    impresionRecursiva(n);
    return 0;
}

int factorial(int num)
{
    int fact=1;
    if(num<=0)
    {
        return fact;
    }else{
        for(int i=1; i<=num;i++){
            fact = fact*i;
        }
    }
    return fact;
}

int factorialRecursivo(int n)
{
    int fact = 1;
    if(n<=0)
    {
        return fact;
    }
    else{
        fact = n*factorialRecursivo(n-1);
    }
    return fact;
}

int sumaRecursiva(int num)
{
    if(num!=0)
    {
        return num+sumaRecursiva(num -1);
    }else{
        return num;
    }
}

void impresionRecursiva(int num)
{
    if(num>0)
    {
        impresionRecursiva(num-1);
    }
    printf("\n\n\t %d",num);
}
