#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {9,8,4,5,1,4,6,8,-9,-2};
    int temp;//aux
    int i,j; //opcional

    printf("\n\nArreglo original\n\n");
    for(i=0;i<10;i++)
    {
        printf("\t[%d]",a[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nArreglo ordenado\n");
    for(i=0;i<10;i++)
    {
        printf("\t[%d]",a[i]);
    }
    return 0;
}
