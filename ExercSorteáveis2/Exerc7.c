#include <stdio.h>

/*Escreva um algoritmo que permita fazer um levantamento do estoque de vinhos
de uma adega, que tem como dados de entrada os tipos de vinhos, sendo: “T”
para tinto; “B” para branco e “R” para rosê. A quantidade de garrafas de vinho da
adega é desconhecida. Quando a letra “F” (de fim) for informada, o programa deve
parar de receber dados e escrever a quantidade de cada tipo de vinho e a
quantidade total de vinhos na adega.*/

int main(){
    char entrada;
    int tinto = 0, branco = 0, rose = 0;
    int total = tinto + branco + rose;

    do {
        printf("Informe o tipo de vinho ('T' para tinto, 'B' para branco, 'R' para rosê, 'F' para finalizar): \t ");
        scanf(" %c", &entrada);  

        if (entrada == 'T' || entrada == 't') {
            tinto++;
        } else if (entrada == 'B' || entrada == 'b') {
            branco++;
        } else if (entrada == 'R' || entrada == 'r') {
            rose++;
        } else if (entrada != 'F' && entrada != 'f') {
            printf("Entrada inválida! Informe 'T', 'B', 'R' ou 'F'.\n");
        }

    } while (entrada != 'F' && entrada != 'f'); 

    printf("Quantidade de vinhos tintos: %d\n", tinto);
    printf("Quantidade de vinhos brancos: %d\n", branco);
    printf("Quantidade de vinhos roses: %d\n", rose);
    printf("Quantidade total de vinhos: %d\n", total);

    return 0;

}