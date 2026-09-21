#include <stdio.h>

int main()
{
    float custoFabrica, distribuidor, impostos, custoFinal;

    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    distribuidor = custoFabrica * 28 / 100;
    impostos = custoFabrica * 45 / 100;

    custoFinal = custoFabrica + distribuidor + impostos;

    printf("Custo final do carro: R$ %.2f\n", custoFinal);

    return 0;
}