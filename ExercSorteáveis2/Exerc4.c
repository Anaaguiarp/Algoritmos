#include <stdio.h>
#include <math.h>

/*Escreva um algoritmo que exiba uma mensagem com as opções "1-multiplicar","2-
somar", "3- Subtrair", "4-Dividir", "5-Sair". O seu programa deve ler a opção
desejada (1, 2, 3, 4), solicitar ao usuário que informe dois valores, executar a
operação escolhida e exibir o resultado. O programa deve ficar repetindo a
execução (ou seja, exibição das opções, leitura doa valores e exibição do
resultado), até que seja escolhida a opção sair.*/

int main (){

double n1, n2, resultado;
int ope;

do{
    printf("\nQual operacao voce quer fazer? \n 1 para multiplicar \n 2 para somar \n 3 para subtrair \n 4 para dividir \n 5 para sair \n");
    scanf("%d", &ope);

    if(ope == 5){
        printf("Saindo...");
    }else{
        printf("Informe dois valores \n");
        scanf("%lf", &n1);
        scanf("%lf", &n2);

        if(ope == 1){
            resultado = n1 * n2;
            printf("O resultado da multiplicacao eh: %lf", resultado);
        }else if(ope == 2){
            resultado = n1 + n2;
            printf("O resultado da soma eh: %lf", resultado);
        }else if(ope == 3){
            resultado = n1 - n2;
            printf("O resultado da subtracao eh: %lf", resultado);
        }else if(ope == 4){
            resultado = n1 / n2;
            printf("O resultado da divisao eh: %lf", resultado);
        }else{
            printf("informe uma opcao valida");
        }
    }
    }while(ope != 5);
    return 0;
}
