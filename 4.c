#include<stdio.h>
#include<stdlib.h>

float calculo(float a, float b)
{
    return (a/b);
}

void main()
{
    float superficie, fuerza, presion;
    printf("ingrese los valores de:\n");
    printf("la fuerza: ",&fuerza);
    scanf("%f",&fuerza);
    printf("la superficie: ");
    scanf("%f",&superficie);
    presion=calculo(fuerza,superficie);
    printf("la presion es %f",presion);
}
