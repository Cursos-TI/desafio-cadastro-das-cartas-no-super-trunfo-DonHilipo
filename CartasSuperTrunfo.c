#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //variáveis para cada atributo da cidade.
    char estado[50], codigo [3], nome_da_cidade [50];
    int populacao, pontos_turisticos;
    float area, pib;

    // Cadastro das Cartas
    printf ("Digite o nome da cidade:\n");
    scanf("%s", &nome_da_cidade);

    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Digite o código da carta:\n");
    scanf("%s", &codigo);

    printf("Digite a área em KM²:\n");
    scanf("%f", &area);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos Dados das Cartas
    printf("Informações da carta:\n");
    printf("Código: %s\nCidade: %s\nEstado: %s\nÁrea em KM²: %.2f\nPopulação: %d\nPIB: %.2f\nPontos turísticos: %d\n",
codigo, nome_da_cidade, estado, area, populacao, pib, pontos_turisticos);

    return 0;
}
