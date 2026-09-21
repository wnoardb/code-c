#include <stdio.h>

int main()
{
   float custoCarronovo;
   float percDistribuidor=0.28; //28%
   float percImposto= 0.45; //45%
   float custoFabrica;
   
   printf("Digite o custo fábrica do carro: ");
   scanf("%f",&custoFabrica);
   
   custoCarronovo=custoFabrica+(custoFabrica*percDistribuidor)+
   (custoFabrica*percImposto);
   
   percDistribuidor=percDistribuidor*custoFabrica;
   
   percImposto=percImposto*custoFabrica;
   
   printf("Custo do carro novo: %.2f\n", custoCarronovo);
   printf("Valor distribuidor: %.2f\n",percDistribuidor);
   printf("Valor imposto: %.2f\n",percImposto);
   printf("Valor de fábrica: %.2f",custoFabrica);
   
   return 0;
   
}