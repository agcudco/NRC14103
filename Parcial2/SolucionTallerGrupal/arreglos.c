int leerN()
{
    int n;
    while(n<=0)
    {
        printf("\n\tIngrese el numero de elementos del Arreglo: ");
        scanf("%d",&n);
    }
    return n;
}


void llenarArreglo(int n, int a[])
{
    for (int i=0;i<n;i++)
    {
        printf("\nIngrese el elemento de la posición: [%d]  ",i);
        scanf("%d",&a[i]);
    }
}

void imprimirArreglo(int n,int a[])
{
    printf("\n\tElementos del arreglo: ");
    for (int i=0;i<n;i++)
    {
        printf("\t [%d]",a[i]);
    }
    printf("\n");
}

void ordenarArreglo(int n,int a[])
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sumarArreglos(int n,int a[],int b[],int c[])
{
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
}
