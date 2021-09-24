#include<stdio.h>
#include<stdlib.h>

int identificar(int a, int b)
{
    int resul;
    if (a<b)
    {
        resul=1;
    }
    else
    {
        if (a>b)
        {
            resul=2;
        }
        else
        {
            resul=3;
        }
    }
    return resul;
}

void main()
{
    int a, b;
    printf("introduzca el primer numero: ");
    scanf("%d",&a);
    printf("introduzca el segundo numero: ");
    scanf("%d",&b);
    int num=identificar(a,b);
    switch (num)
    {
    case 1:
        printf("el numero %d es mayor al numero %d",b,a);
        break;
    case 2:
        printf("el numero %d es mayor al numero %d",a,b);
        break;
    case 3:
        printf("los numeros %d y %d son iguales",a,b);
    }
}
