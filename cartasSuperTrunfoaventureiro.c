#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// calcular a densidade populacional popúlação dividido pela area
// calcular o pib per capita
   
int main() {

    // Carta 1

    char estado1;
    char codigo1[5];
    char nome[50];
    int populacao;
    float area1;
    float pib1;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Digite uma letra de (A-H): ");  //Envia informação na tela do usuario
    scanf(" %c", &estado1);   //Guarda a informação fornecida pelo usuario
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);    //Utilizei  %[^\n] para o scanf ler apos o espaço Ex:São Paulo

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area1);

    densidade_populacional = populacao / area1;

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    pib_per_capita = pib1 / populacao;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Enviar todas as informações da carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area1);   // utilizei  %.2f para somente 2 casas decimais
    printf("PIB: %f bilhões de reais\n", pib1); //removi o %.2f pois por algum motivo o calculo estava dando errado
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n",pib_per_capita);

    //carta 2

    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

  // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

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

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2); //removi o %.2f pois por algum motivo o calculo estava dando errado
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n",pib_per_capita2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}