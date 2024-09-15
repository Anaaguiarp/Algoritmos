#include <stdio.h>
#include <stdbool.h>

/*Escreva um programa que receba do usuário 10 valores inteiros e positivos e:
a. Encontre e imprima o maior valor;
b. Encontre e imprima o menor valor;
c. Calcule a média dos números lidos.*/

int main (){
    
    int num, maior, menor, soma;
    double media;
    bool passou = true;
    int i = 1;

    do{
        printf("Informe um valor INTEIRO e POSITIVO \n");
        scanf("%d", &num);

        i++;

        if(passou){
            maior = num;//2
            menor = num;//2
            passou = false;
        }
        if(num<menor){
            menor = num;//2
        }
        if(num>maior){
            maior = num;//2
        }
        soma += num;
        }while(i<=10);

    media = soma / 10;

    printf("O menor eh %d e o maior eh %d \n A media eh %lf", menor, maior, media);
    return 0;
}