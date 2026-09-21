#include <stdio.h>

int main()
{
    int quantidadeCarros;
    float valorTotalVendas, salarioFixo, valorPorCarro;
    float comissaoCarros, comissaoVendas, salarioFinal;

    printf("Digite a quantidade de carros vendidos: ");
    scanf("%d", &quantidadeCarros);

    printf("Digite o valor total das vendas: R$ ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: R$ ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor recebido por carro vendido: R$ ");
    scanf("%f", &valorPorCarro);

    comissaoCarros = quantidadeCarros * valorPorCarro;

    comissaoVendas = valorTotalVendas * 5 / 100;

    salarioFinal = salarioFixo + comissaoCarros + comissaoVendas;

    printf("\nSalario final: R$ %.2f\n", salarioFinal);

    return 0;
}