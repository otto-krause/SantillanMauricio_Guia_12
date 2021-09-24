#include<stdio.h>
#include<stdlib.h>

int entrada(int num)
{
    scanf("%d",&num);
    return num;
}

void main()
{
    printf("ingrese el primer numero\n");
    int a=entrada(0);
    printf("el numero es %d\n",a);
    int b=entrada(0);
    printf("el numero es %d\n",b);
}
