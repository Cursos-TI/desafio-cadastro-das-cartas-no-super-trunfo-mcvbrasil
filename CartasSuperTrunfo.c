#include <stdio.h>

int main() {
    // Declaração de variáveis
    char Estado_1[2], Estado_2[2];
    char Codigo_da_Carta_1[4], Codigo_da_Carta_2[4];
    char Nome_da_Cidade_1[50], Nome_da_Cidade_2[50];
    int populacao_1, Pontos_Turisticos_1, populacao_2, Pontos_Turisticos_2;
    float area_1, area_2;
    float PIB_1, PIB_2;

    // Entrada de dados para a primeira carta
    printf("\n===== CARTA 1 =====\n");

    printf("Indique o Estado (uma letra de A a H): ");
    scanf(" %c", Estado_1);

    printf("Indique o Código (a letra do Estado seguida de um número de 01 a 04): ");
    scanf("%s", Codigo_da_Carta_1);

    printf("Indique o nome da cidade: ");
    scanf(" %[^\n]", Nome_da_Cidade_1);

    printf("Indique a quantidade populacional: ");
    scanf("%d", &populacao_1);
    
    printf("Indique a área (em km²): ");
    scanf("%f", &area_1);

    printf("Indique o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB_1);

    printf("Indique o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos_1);

    // Entrada de dados para a segunda carta
    printf("\n===== CARTA 2 =====\n");

    printf("Indique o Estado (uma letra de A a H): ");
    scanf(" %c", Estado_2);

    printf("Indique o Código (a letra do Estado seguida de um número de 01 a 04): ");
    scanf("%s", Codigo_da_Carta_2);

    printf("Indique o nome da cidade: ");
    scanf(" %[^\n]", Nome_da_Cidade_2);

    printf("Indique a quantidade populacional: ");
    scanf("%d", &populacao_2);

    printf("Indique a área (em km²): ");
    scanf("%f", &area_2);

    printf("Indique o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &PIB_2);

    printf("Indique o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos_2);

    // Exibição das informações de maneira organizada
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", Estado_1[0]);
    printf("Código: %s\n", Codigo_da_Carta_1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos_1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", Estado_2[0]);
    printf("Código: %s\n", Codigo_da_Carta_2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos_2);

    return 0;
}