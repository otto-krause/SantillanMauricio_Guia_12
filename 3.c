#include<stdio.h>
#include<stdlib.h>

float calcporhombres(float hombres, float mujeres)
{
    return hombres*100/(hombres+mujeres);
}

float calcpormujeres(float hombres, float mujeres)
{
    return mujeres*100/(hombres+mujeres);
}

void main()
{
    float hombres, mujeres, porhomb, pormuj;
    printf("introduzca la cantidad de:\n");
    printf("hombres: ");
    scanf("%f",&hombres);
    printf("mujeres: ");
    scanf("%f",&mujeres);
    porhomb=calcporhombres(hombres,mujeres);
    pormuj=calcpormujeres(hombres,mujeres);
    printf("el porcentaje de hombres es de %f y el de mujeres es de %f",porhomb,pormuj);
}
