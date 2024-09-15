#include <stdio.h>

/*Escreva um programa que receba valores inteiros o usuário até que o valor -99
seja digitado. Quando isso acontecer o programa deverá escrever a soma e a
média dos valores recebidos anteriormente.*/

int main(){
    
    double num, soma = 0, media = 0;
    int i = 0;

    do{
        printf("informe um numero e digite -99 para finalizar e receber o resultado da soma \t");
        scanf("%lf", &num);

        if(num != -99){
            i++;
            soma += num; 
        } 
        if(num == -99){
            printf("Encerrando a leitura... \n");
        }

    }while(num != -99);

    media = soma / i;

    printf("a soma dos valores eh: %lf \n a media dos valores eh: %lf", soma, media);
    return 0;
}
