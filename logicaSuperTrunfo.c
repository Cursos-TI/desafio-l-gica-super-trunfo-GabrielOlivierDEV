#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado_1, estado_2; // Estados representados por letras de A a H
    char codigo_1[4], codigo_2[4]; // Códigos das cidades no formato "A01", "B02", etc.
    char nome_1[50], nome_2[50]; // Nomes das cidades (sem espaços)
    unsigned long int populacao_1, populacao_2; // População das cidades
    float area_1, area_2; // Área das cidades em km²
    float pib_1, pib_2; // PIB das cidades em bilhões de reais
    int pontos_turisticos_1, pontos_turisticos_2; // Número de pontos turísticos
    int escolha1, escolha2; // Dois atributos escolhidos pelo usuário

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

    // Menu para o usuário escolher dois atributos diferentes
    printf("\n--- Escolha o primeiro atributo para comparação ---\n");
    printf("1: População\n2: Área\n3: PIB\n4: Pontos Turísticos\n5: Densidade Demográfica\n6: PIB per Capita\n7: SuperPoder\n");
    scanf("%d", &escolha1);

    printf("\n--- Escolha o segundo atributo (diferente do primeiro) ---\n");

    if (escolha1 != 1) {
        printf("1: População\n");
    }
    if (escolha1 != 2) {
        printf("2: Área\n");
    }
    if (escolha1 != 3) {
        printf("3: PIB\n");
    }
    if (escolha1 != 4) {
        printf("4: Pontos Turísticos\n");
    }
    if (escolha1 != 5) {
        printf("5: Densidade Demográfica\n");
    }
    if (escolha1 != 6) {
        printf("6: PIB per Capita\n");
    }
    if (escolha1 != 7) {
        printf("7: SuperPoder\n");
    }

    scanf("%d", &escolha2);


    // Função auxiliar para pegar valor do atributo
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    switch (escolha1) {
        case 1: valor1_c1 = populacao_1; valor1_c2 = populacao_2; break;
        case 2: valor1_c1 = area_1; valor1_c2 = area_2; break;
        case 3: valor1_c1 = pib_1; valor1_c2 = pib_2; break;
        case 4: valor1_c1 = pontos_turisticos_1; valor1_c2 = pontos_turisticos_2; break;
        case 5: valor1_c1 = densidade_1; valor1_c2 = densidade_2; break;
        case 6: valor1_c1 = pib_per_capita_1; valor1_c2 = pib_per_capita_2; break;
        case 7: valor1_c1 = super_poder_1; valor1_c2 = super_poder_2; break;
    }

    switch (escolha2) {
        case 1: valor2_c1 = populacao_1; valor2_c2 = populacao_2; break;
        case 2: valor2_c1 = area_1; valor2_c2 = area_2; break;
        case 3: valor2_c1 = pib_1; valor2_c2 = pib_2; break;
        case 4: valor2_c1 = pontos_turisticos_1; valor2_c2 = pontos_turisticos_2; break;
        case 5: valor2_c1 = densidade_1; valor2_c2 = densidade_2; break;
        case 6: valor2_c1 = pib_per_capita_1; valor2_c2 = pib_per_capita_2; break;
        case 7: valor2_c1 = super_poder_1; valor2_c2 = super_poder_2; break;
    }

    // Tratamento especial: Densidade Demográfica = menor valor vence
    int resultado1, resultado2;
    if (escolha1 == 5) 
        resultado1 = (valor1_c1 < valor1_c2) ? 1 : (valor1_c1 > valor1_c2 ? 2 : 0);
    else
        resultado1 = (valor1_c1 > valor1_c2) ? 1 : (valor1_c1 < valor1_c2 ? 2 : 0);

    if (escolha2 == 5) 
        resultado2 = (valor2_c1 < valor2_c2) ? 1 : (valor2_c1 > valor2_c2 ? 2 : 0);
    else
        resultado2 = (valor2_c1 > valor2_c2) ? 1 : (valor2_c1 < valor2_c2 ? 2 : 0);

    // Soma dos atributos
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("Cidade 1 (%s): %.2f + %.2f = %.2f\n", nome_1, valor1_c1, valor2_c1, soma1);
    printf("Cidade 2 (%s): %.2f + %.2f = %.2f\n", nome_2, valor1_c2, valor2_c2, soma2);

    if (soma1 > soma2)
        printf("Cidade %s venceu!\n", nome_1);
    else if (soma2 > soma1)
        printf("Cidade %s venceu!\n", nome_2);
    else
        printf("Empate!\n");

    return 0;
}
