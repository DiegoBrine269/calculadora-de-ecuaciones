#include <stdio.h>    
#include "pol2rac.h"

ecseg ecuacion;
int A=0, B=0, C=0;

void leerCoeficientes()
{
    printf("A continuacion ingrese los valores de A, B y C respectivamente. \n");

    /*Leyendo A*/
    printf("\nNumerador de A = "); scanf("%d", &ecuacion.a.num);
    do
    {
        printf("Denominador de A = "); scanf("%d", &ecuacion.a.den);
    }while(ecuacion.a.den == 0);

    /*Leyendo B*/
    printf("\n\nNumerador de B = "); scanf("%d", &ecuacion.b.num);
    do
    {
        printf("Denominador de B = "); scanf("%d", &ecuacion.b.den);
    }while(ecuacion.b.den == 0);

    /*Leyendo C*/
    printf("\n\nNumerador de C = "); scanf("%d", &ecuacion.c.num);
    do
    {
        printf("Denominador de C = "); scanf("%d", &ecuacion.c.den);
    } while (ecuacion.c.den == 0);
    
    

    //printf("");
}

void validarCoeficientes ()
{
    A = ecuacion.a.num/ecuacion.a.den;
    B = ecuacion.b.num/ecuacion.b.den;
    C = ecuacion.c.num/ecuacion.c.den;
}

void calcularRaices()
{
    if(((B*B)-4*A*C) > 0)
    {
        ecuacion.x1.num = (-B+sqrt((B*B)-4*A*C));
        ecuacion.x1.den = (2*A);

        ecuacion.x2.num = (-B-sqrt((B*B)-4*A*C));
        ecuacion.x2.den = (2*A);
    }
    else
    {
        printf("Número imaginarios");
    }
}

void imprimirRaices()
{
    system("cls");
    printf("Las raices de la ecuacion son: \n");
    printf("x1 = %d/%d \n", ecuacion.x1.num, ecuacion.x1.den);
    printf("x2 = %d/%d", ecuacion.x2.num, ecuacion.x2.den);
}