#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um algoritmo em C que recebe do usuário um número real, calcula e escreve 4% do valor lido.

int main()
{
    double numReal, resultado;
    
    printf("Informe o valor do numero real \n");
    scanf("%lf", &numReal);
    
    resultado = numReal * 4 /100;
    
    printf("O resultado eh %lf \n", resultado);
    return 0;
}
