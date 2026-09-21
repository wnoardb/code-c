#include <stdio.h>

int main()
{
    int totalEleitores, votosBrancos, votosNulos, votosValidos;
    float percentualBrancos, percentualNulos, percentualValidos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &totalEleitores);

    printf("Digite o numero de votos brancos: ");
    scanf("%d", &votosBrancos);

    printf("Digite o numero de votos nulos: ");
    scanf("%d", &votosNulos);

    printf("Digite o numero de votos validos: ");
    scanf("%d", &votosValidos);

    percentualBrancos = (votosBrancos * 100.0) / totalEleitores;
    percentualNulos = (votosNulos * 100.0) / totalEleitores;
    percentualValidos = (votosValidos * 100.0) / totalEleitores;

    printf("\nPercentual de votos brancos: %.2f%%\n", percentualBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentualNulos);
    printf("Percentual de votos validos: %.2f%%\n", percentualValidos);

    return 0;
}