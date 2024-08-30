#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um algoritmo em C que recebe do usuário o valor do raio de um círculo, calcula e
//imprime o valor da área e do perímetro desse círculo.
//Dados: área = pi * raio * raio; perímetro = 2 * pi * raio; pi = 3.14159.

int main()
{
    double raio, perimetro, area;
    printf("Digite o valor do raio \n");
    scanf("%lf", &raio);
    
    //M_PI=3.14
    area=3.14*pow(raio,2);
    //area=3.14*raio*raio;
    perimetro=2*3.14*raio;
                                         //%.2lf ou %0.2lf
    printf("O resultado da area eh %lf \n", area);
    printf("O resultado do perimetro eh %lf \n", perimetro);
    return 0;
}