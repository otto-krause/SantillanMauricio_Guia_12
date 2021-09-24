#include<stdio.h>
#include<stdlib.h>

int calculoarea(int a, int b)
{
    return (a*b);
}

int calculoperim(int a, int b)
{
    return (a*2)+(b*2);
}

void main()
{
    int a, b, area, perim;
    printf("introduzca los lados del rectangulo cuyo area y perimetro desea conocer\n");
    printf("lado 1: ");
    scanf("%d",&a);
    printf("lado 2: ");
    scanf("%d",&b);
    area=calculoarea(a,b);
    printf("el area del rectangulo es %d\n",area);
    perim=calculoperim(a,b);
    printf("el perimetro del rectangulo es %d\n",perim);

}
