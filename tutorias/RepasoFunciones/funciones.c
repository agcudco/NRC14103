int leerNumero()
{
    int num;
    printf("\t Ingrese un número ");
    scanf("%d",&num);
    return num;
}

float promedio(float num1, float num2)
{
    return (num1+num2)/2;
}

void calculadora(float num1, float num2)
{
    float suma, resta, producto, cociente;
    suma = num1 + num2;
    resta = num1 - num2;
    producto = num1 * num2;
    cociente = num1 / num2;
    printf("\n\nCALCULADORA");
    printf("\n\n\t La suma entre %.2f + %.2f es %.2f ",num1,num2,suma);
    printf("\n\t La resta entre %.2f - %.2f es %.2f ",num1,num2,resta);
    printf("\n\t El producto entre %.2f x %.2f es %.2f ",num1,num2,producto);
    printf("\n\t El cociente %.2f / %.2f es %.2f ",num1,num2,cociente);
}
