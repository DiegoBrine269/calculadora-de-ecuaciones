#include <stdio.h>
#include <conio.h>
#include "calculadora.h"



int main ()
{
    printf("--CALCULADORA DE ECUACIONES DE SEGUNDO GRADO CON COEFICIENTES RACIONALES--\n");
    leerCoeficientes();
    validarCoeficientes();
    calcularRaices();
    imprimirRaices();

    getch();
    return 0;
}