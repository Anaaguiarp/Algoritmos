#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//. Receba como entrada um número inteiro de 3 dígitos (por exemplo, 123). Extraia o dígito da
//casa das dezenas desse número. Mostre esse dígito como resultado.
//Para ilustrar, se o número de entrada for 123, o dígito da casa das dezenas é 2.

int main()
{
    int num, dezena;

    printf("digite um numero inteiro que possua tres digitos \n");
    scanf("%d", &num);

    dezena = (num/10)%10;

    printf("a dezena do numero informado eh: %d \n", dezena);

    return 0;
}
