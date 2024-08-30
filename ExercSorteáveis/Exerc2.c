#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um algoritmo em C para calcular o número de dias aproximado que uma pessoa
//viveu, com base em sua idade (considere que o ano tem 365 dias). O algoritmo deve
//receber a idade do usuário em meses e dias, calcular e imprimir a quantidade de dias
//vividos.

int main()
{
    int idadeAnos, idadeMeses, idadeDias, resultado, euvomemata;
    
    printf("Digite quantos anos voce ja viveu nessa terra de meu deus \n");
    scanf("%d", &idadeAnos);
    printf("E os meses, Fala pa nois \n");
    scanf("%d", &idadeMeses);
    printf("e agora os dias bb \n");
    scanf("%d", &idadeDias);
    
    euvomemata  = idadeAnos * 12;
    resultado = idadeAnos * 365 + (idadeMeses * 30) + idadeDias;
    
    printf("O resultado eh %d \n", resultado);
    printf("nao gostei, melhore");
    
    return 0;
}
