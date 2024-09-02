#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um algoritmo em C para calcular o número de dias aproximado que uma pessoa
//viveu, com base em sua idade (considere que o ano tem 365 dias). O algoritmo deve
//receber a idade do usuário em meses e dias, calcular e imprimir a quantidade de dias
//vividos.

int main()
{
    int idadeDias, dias, meses, anos;

    printf("Digite quantos anos voce ja viveu \n");
    scanf("%d", &anos);
    printf("Agora informe os meses extras \n");
    scanf("%d", &meses);
    printf("Por fim, informe os dias extras \n");
    scanf("%d", &dias);

    idadeDias = meses * 30 + dias + (anos * 365);

    printf("Ate hoje, voce viveu por %d dias \n", idadeDias);

    return 0;
}
