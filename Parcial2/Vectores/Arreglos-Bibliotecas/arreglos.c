void llenarArreglo(int n, int a[])
{
    for (int i=0;i<n;i++)
    {
        printf("\n\nIngrese el elemento de la posición: [%d]  ",i);
        scanf("%d",&a[i]);
    }
}

void imprimirArreglo(int n,int a[])
{
    for (int i=0;i<n;i++)
    {
        printf("\t [%d]",a[i]);
    }
}

int ingresarTamanioArreglo()
{
    int n;
    while(n<=0)
    {
        printf("\n\n\t Ingrese el numero de elementos del Arreglo: ");
        scanf("%d",&n);
    }
    return n;
}

void imprimirInvertido(int n,int a[])
{
    printf("\nArreglo invertido\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("\t[%d]",a[i]);
    }
}

void unirArreglos(int a[],int b[],int n1, int n2)
{
    int n3 = n1 + n2;
    int c[n3];
    int j=0;
    for (int i=0;i<n3;i++)
    {
        if(i<n1)
        {
           c[i]=a[i];
        }else
        {
            c[i]=b[j];
            j++;
        }
    }

    printf("\n\nArreglo concantenado\n");
    for (int i=0;i<n3;i++)
    {
        printf("\t[%d]",c[i]);
    }
}

int obtenerTamnioArreglo(int a[])
{
    return (int)(sizeof(a)/sizeof(a[0]));
}

void imprimirArreglo2(int a[])
{
    int n = obtenerTamnioArreglo(a);
    for (int i=0;i<n;i++)
    {
        printf("\t [%d]",a[i]);
    }
}

int buscarDato(int num,int a[],int n)
{
    int band = 0;
    for(int i=0; i<n;i++)
    {
        if(num==a[i])
        {
            band=1;
            i=n;
        }
    }
    return band;
}

void buscarDatoPos(int num,int a[],int n)
{
    int band = 0,pos=0;

    for(int i=0; i<n;i++)
    {
        if(num==a[i])
        {
            band=1;
            pos=i;
            i=n;
        }
    }

    if(band==1)
    {
        printf("El %d existe y está en la posición %d",num,pos);
    }
    else
    {
        printf("\n\n\t El %d no existe",num);
    }
}

int modificarDatos(int a[],int n, int ant, int nue)
{
    int band = 0;
    for(int i=0; i<n;i++)
    {
        if(ant == a[i])
        {
            a[i]=nue;
            band=1;
        }
    }
    return band;
}

void eliminarDato(int a[],int n, int elim)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==elim)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
        }
    }

    printf("\n\n\t Resultado de la eliminación\n ");
    for(int i=0;i<n-1;i++)
    {
        printf("\t[%d]",a[i]);
    }
}
