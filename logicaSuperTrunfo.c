#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_1, estado_2; // Estados representados por letras de A a H
    char codigo_1[4], codigo_2[4]; // Códigos das cidades no formato "A01", "B02", etc.
    char nome_1[50], nome_2[50]; // Nomes das cidades (sem espaços)
    unsigned long int populacao_1, populacao_2; // População das cidades
    float area_1, area_2; // Área das cidades em km²
    float pib_1, pib_2; // PIB das cidades em bilhões de reais
    int pontos_turisticos_1, pontos_turisticos_2; // Número de pontos turísticos
    int escolha;

    // Primeira carta
    printf("\nFaça o cadastro da primeira carta: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_1);

    printf("Digite o código da cidade (ex: A01): ");
    scanf(" %3s", codigo_1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %49s", nome_1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao_1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_1);

    // Cálculo de Densidade Demográfica, PIB per Capita e SuperPoder
    float densidade_1 = (float) populacao_1 / area_1;
    float pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    float super_poder_1 = (float) populacao_1 + area_1 + pib_1 + (float) pontos_turisticos_1 + pib_per_capita_1 + (1.0 / densidade_1);

    // Segunda carta
    printf("\nFaça o cadastro da segunda carta: \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado_2);

    printf("Digite o código da cidade (ex: A01): ");
    scanf(" %3s", codigo_2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf(" %49s", nome_2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao_2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos_2);

    // Cálculo de Densidade Demográfica, PIB per Capita e SuperPoder
    float densidade_2 = (float) populacao_2 / area_2;
    float pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;
    float super_poder_2 = (float) populacao_2 + area_2 + pib_2 + (float) pontos_turisticos_2 + pib_per_capita_2 + (1.0 / densidade_2);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Cidade Cadastrada 1 ---\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
    printf("SuperPoder: %.2f\n", super_poder_1);

    printf("\n--- Dados da Cidade Cadastrada 2 ---\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    printf("SuperPoder: %.2f\n", super_poder_2);

    // Menu para o usuário escolher qual dado comparar
    printf("\n--- Quais dados entre as cidades devem ser comparados? ---\n");
    printf("Opção 1: População\n");
    printf("Opção 2: Área\n");
    printf("Opção 3: PIB\n");
    printf("Opção 4: Pontos Turísticos\n");
    printf("Opção 5: Densidade Demográfica\n");
    printf("Opção 6: PIB per Capita\n");
    printf("Opção 7: SuperPoder\n");
    printf("Digite o número da opção desejada: \n");
    scanf("%d", &escolha);

    // Realização da comparação com base na escolha do usuário
    switch (escolha) {
        case 1: // População
            printf("\n--- Resultados das Comparações ---\n");
            if (populacao_1 > populacao_2) {
                printf("Cidade %s tem a maior população\n", nome_1);
            } else if (populacao_2 > populacao_1) {
                printf("Cidade %s tem a maior população\n", nome_2);
            } else {
                printf("As duas cidades têm a mesma população\n");
            }
            break;
        case 2: // Área
            printf("\n--- Resultados das Comparações ---\n");
            if (area_1 > area_2) {
                printf("Cidade %s tem a maior área\n", nome_1);
            } else if (area_2 > area_1) {
                printf("Cidade %s tem a maior área\n", nome_2);
            } else {
                printf("As duas cidades têm a mesma área\n");
            }
            break;
        case 3: // PIB
            printf("\n--- Resultados das Comparações ---\n");
            if (pib_1 > pib_2) {
                printf("Cidade %s tem o maior PIB\n", nome_1);
            } else if (pib_2 > pib_1) {
                printf("Cidade %s tem o maior PIB\n", nome_2);
            } else {
                printf("As duas cidades têm o mesmo PIB\n");
            }
            break;
        case 4: // Pontos Turísticos
            printf("\n--- Resultados das Comparações ---\n");
            if (pontos_turisticos_1 > pontos_turisticos_2) {
                printf("Cidade %s tem o maior número de pontos turísticos\n", nome_1);
            } else if (pontos_turisticos_2 > pontos_turisticos_1) {
                printf("Cidade %s tem o maior número de pontos turísticos\n", nome_2);
            } else {
                printf("As duas cidades têm o mesmo número de pontos turísticos\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("\n--- Resultados das Comparações ---\n");
            if (densidade_1 > densidade_2) {
                printf("Cidade %s tem a maior densidade demográfica\n", nome_1);
            } else if (densidade_2 > densidade_1) {
                printf("Cidade %s tem a maior densidade demográfica\n", nome_2);
            } else {
                printf("As duas cidades têm a mesma densidade demográfica\n");
            }
            break;
        case 6: // PIB per Capita
            printf("\n--- Resultados das Comparações ---\n");
            if (pib_per_capita_1 > pib_per_capita_2) {
                printf("Cidade %s tem o maior PIB per Capita\n", nome_1);
            } else if (pib_per_capita_2 > pib_per_capita_1) {
                printf("Cidade %s tem o maior PIB per Capita\n", nome_2);
            } else {
                printf("As duas cidades têm o mesmo PIB per Capita\n");
            }
            break;
        case 7: // SuperPoder
            printf("\n--- Resultados das Comparações ---\n");
            if (super_poder_1 > super_poder_2) {
                printf("Cidade %s tem o maior SuperPoder\n", nome_1);
            } else if (super_poder_2 > super_poder_1) {
                printf("Cidade %s tem o maior SuperPoder\n", nome_2);
            } else {
                printf("As duas cidades têm o mesmo SuperPoder\n");
            }
            break;
        default: // Opção inválida
            printf("Opção inválida. Nenhuma comparação realizada.\n");
            return 1;
    }

    return 0;
}
