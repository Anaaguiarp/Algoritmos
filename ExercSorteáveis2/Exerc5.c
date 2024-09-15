#include <stdio.h>
#include <math.h>

/*Escreva um programa que receba a idade e o peso de 15 pessoas. O seu
programa deve calcular e mostre as médias dos pesos das pessoas da mesma
faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20, de 21 a 30 anos e
maiores de 31 anos.*/

int main (){

    double peso, media10 = 0, media20 = 0, media30 = 0, media31 = 0, soma10 = 0, soma20 = 0, soma30 = 0, soma31 = 0;
    int i=1, p10=0, p20=0, p30=0, p31=0, idade;

    do{
        printf("Informe sua idade \t");
        scanf("%d", &idade);
        printf("Informe seu peso \t");
        scanf("%lf", &peso);

        i++;
    if(idade >= 1 && idade <= 10){
        p10++;
        soma10 += peso;
    }
    if(idade >= 11 && idade <=20){
        p20++;
        soma20 += peso;
    }
    if(idade >= 21 && idade <=30){
        p30++;
        soma30 += peso;
    }
    if(idade >= 31){
        p31++;
        soma31 += peso;
    }
    }while(i<=15);

    media10 = soma10 / p10;
    media20 = soma20 / p20;
    media30 = soma30 / p30;
    media31 = soma31 / p31;

    printf("a media da faixa etaria entre 1 e 10 anos eh: %lf \n", media10);
    printf("a media da faixa etaria entre 11 e 20 anos eh: %lf \n", media20);
    printf("a media da faixa etaria entre 21 e 30 anos eh: %lf \n", media30);
    printf("a media da faixa etaria de 31 anos ou mais eh: %lf \n", media31);
    
    return 0;
}