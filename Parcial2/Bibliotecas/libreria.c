double valorAbsoluto(double num)
{
    //if-inline
    return num<0?-num:num;
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

int leerNumero()
{   int num =-1;
    do{
        printf("\n\n\tIngrese un número positivo: ");
        scanf("%d",&num);
    }while (num<0);
    return num;
}


int menu()
{
    int op =-1;
    do{
        printf("\n\n\tMENU");
        printf("\n1: Producto de los números");
        printf("\n2: Potencia de n1^n2");
        printf("\n3: Salir\n\n");
        scanf("%d",&op);
    }while ((op<0)||(op>3));
    return op;
}
