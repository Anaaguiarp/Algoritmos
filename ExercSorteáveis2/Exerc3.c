#include <stdio.h>
#include <math.h>

/*Escreva um programa que receba do usuário 2 valores inteiros e positivos: X e Y.
O seu programa deve calcular e escrever o valor da função potência XY utilizando
um laço de repetição (ou seja, sem utilizar a função pow).*/

int main (){
    
    int x, y;
    double potencia = 1;
    int i = 1;

        printf("Informe um valor INTEIRO e POSITIVO (valor de x) \t");
        scanf("%d", &x);
        printf("Informe um valor INTEIRO e POSITIVO (valor de y) \t");
        scanf("%d", &y);
    do{
        if(y>=0){
            potencia *= x;
            i++;
        }else{
            printf("Valor invalido!");
            i--;
        }
    }while(i <= y);

    printf("O valor da potencia eh %lf", potencia);
    return 0;
}