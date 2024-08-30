#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escrever um algoritmo que recebe como entrada a distância percorrida em uma viagem e o
//tempo gasto para percorrê-la. Calcule a velocidade média (Vm) do veículo durante a viagem
//e imprima para o usuário.
//Obs.: Vm = distancia/tempo;

int main()
{
    double distancia, tempo, velocidadeMedia;

    printf("Informe o valor da distancia e do tempo \n");
    scanf("%lf", &distancia);
    scanf("%lf", &tempo);

    velocidadeMedia=distancia/tempo;

    printf("O resultado da velocidade media eh %lf \n", velocidadeMedia);

    return 0;
}
