#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[5];
    char nome[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;
    
    // Entradas Carta 1
    printf("Digite uma letra de (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    densidade_populacional1 = populacao1 / area1;

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    pib_per_capita1 = pib1 / populacao1;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    super_poder1 = (float)populacao1
             + area1
             + pib1
             + (float)pontos_turisticos1
             + pib_per_capita1
             + (1.0 / densidade_populacional1);

    // Mostrar carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder da carta 1: %.2f\n", super_poder1);

    // Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entradas Carta 2
    printf("Digite uma letra de (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    densidade_populacional2 = populacao2 / area2;

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    pib_per_capita2 = pib2 / populacao2;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    super_poder2 = (float)populacao2
             + area2
             + pib2
             + (float)pontos_turisticos2
             + pib_per_capita2
             + (1.0 / densidade_populacional2);

    // Mostrar carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder da carta 2: %.2f\n", super_poder2);

    // Comparação de cartas
    printf("\n--- Comparação de cartas ---\n");
    printf("Vence a carta que tiver (1), perde a carta que tiver (0)\n");

    // População
    printf("População carta 1 venceu %d\n", (populacao1 > populacao2));
    printf("População carta 2 venceu %d\n", (populacao1 <= populacao2));

    // Área
    printf("Área carta 1 venceu %d\n", (area1 > area2));
    printf("Área carta 2 venceu %d\n", (area1 <= area2));

    // PIB
    printf("PIB carta 1 venceu %d\n", (pib1 > pib2));
    printf("PIB carta 2 venceu %d\n", (pib1 <= pib2));

    // Pontos turísticos
    printf("Pontos turísticos carta 1 venceu %d\n", (pontos_turisticos1 > pontos_turisticos2));
    printf("Pontos turísticos carta 2 venceu %d\n", (pontos_turisticos1 <= pontos_turisticos2));

    // Densidade populacional (menor vence)
    printf("Densidade populacional carta 1 venceu %d\n", (densidade_populacional1 < densidade_populacional2));
    printf("Densidade populacional carta 2 venceu %d\n", (densidade_populacional1 >= densidade_populacional2));

    // PIB per capita
    printf("PIB per capita carta 1 venceu %d\n", (pib_per_capita1 > pib_per_capita2));
    printf("PIB per capita carta 2 venceu %d\n", (pib_per_capita1 <= pib_per_capita2));

    // Super poder
    printf("Super poder carta 1 venceu %d\n", (super_poder1 > super_poder2));
    printf("Super poder carta 2 venceu %d\n", (super_poder1 <= super_poder2));

    return 0;
}