#include <stdio.h>

/*Escreva um programa em C que receba do usuário a idade, o peso e o sexo de
10 pessoas. Por fim, o seu algoritmo deve imprimir:
a. O total de homens;
b. O total de mulheres;
c. A soma e a média das idades dos homens;
d. A soma e a média dos pesos das mulheres.*/

int main (){

    int idade, somaI = 0, totalH = 0, somaP = 0, totalM = 0;
    double peso, mediaH = 0, mediaM = 0;
    char sexo;
    int i = 1;

    do{
        printf("Qual sua Idade? \n");
        scanf("%d", &idade);
        printf("Qual o seu peso? \n");
        scanf("%lf", &peso);
        printf("Qual seu sexo? Digite 'M' para masculino e 'F' para feminino \n");
        scanf(" %c", &sexo);

        i++;

        if(sexo=='m' || sexo=='M'){
            somaI += idade;
            totalH++;
        }else if(sexo=='f' || sexo=='F'){
            somaP += peso;
            totalM++;
        }else{
            printf("Sexo invalido!");
    }
        }while(i<=10);
            if(totalH>0){
                mediaH = somaI / totalH;
                printf("A media da idade eh %lf \n", mediaH);
    }
            if(totalM>0){
                mediaM = somaP / totalM;
                printf("A media do peso eh %lf \n", mediaM);
    }
    return 0;
}