#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escrever um algoritmo em C que recebe como entrada um inteiro que representa uma data
//no formato ddmmaa e imprima na tela a seguinte saída:
//Dia: dd Mês: dd Ano: dd

int main()
{
    int ddmmaa, dias, meses, anos;

    printf("informe uma data no formato ddmmaa \n");
    scanf("%d", &ddmmaa);

    dias = ddmmaa/10000;
    meses = (ddmmaa/100)%100;
    anos = ddmmaa%100;

    printf("dia: %d \t mes: %d \t ano: %d", dias, meses, anos);

    return 0;
}
