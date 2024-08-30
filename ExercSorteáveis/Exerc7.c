#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Construa um algoritmo em C que, tendo como dados de entrada dois pontos quaisquer no
//plano, P(x1,y1) e P(x2,y2) informados pelo usuário, calcule a distância entre eles. A fórmula
//que efetua tal cálculo é: 

int main()
{
    double x1, y1, x2, y2, distancia;

    printf("informe os dois valores do primeiro plano (x1 e y1) \n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);

    printf("agora informe os dois valores do segundo plano (x2 e y2) \n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("o resultado da distancia eh: %lf \n", distancia);

    return 0;
}
