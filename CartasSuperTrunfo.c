#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //carta 1, Pará.
    char estado1[50];
    char código_carta1[4];
    char cidade1[50];
    int população1;
    float área_km01;
    float PIB1;
    int turísticos1;

    printf("Digite seu Estado: ");
    scanf("%s", estado1);
    printf("Estado: %s\n", estado1);

    printf("Digite seu Código: ");
    scanf("%s", código_carta1);
    printf("Código da carta: %s\n", código_carta1);

    printf("Digite sua cidade: ");
    scanf("%s", cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite a População: ");
    scanf("%d", &população1);
    printf("População: %d\n", população1);

    printf("Digite a Àrea em km2: ");
    scanf("%f", &área_km01);
    printf("Àrea em km2: %f\n", área_km01);

    printf("Digite seu PIB: ");
    scanf("%f", &PIB1);
    printf("PIB; %f\n", PIB1);

    printf("Digite seu Número de pontos turísticos: ");
    scanf("%d", &turísticos1); 
    printf("Número de pontos Turísticos: %d\n", turísticos1);

    printf("\n"); //adicionei para separar as informações.

    //carta 2, BAHIA.
    char estado2[50];
    char código_carta2[4];
    char cidade2[50];
    int população2;
    float área_km02;
    float PIB2;
    int turísticos2;

    printf("Digite seu Estado: ");
    scanf("%s", estado2);
    printf("Estado: %s\n", estado2);

    printf("Digite seu Código: ");
    scanf("%s", código_carta2);
    printf("Código da carta: %s\n", código_carta2);

    printf("Digite sua Cidade: ");
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2);

    printf("Digite a População: ");
    scanf("%d", &população2);
    printf("população: %d\n", população2);

    printf("Digite a Àrea em km2: ");
    scanf("%f", &área_km02);
    printf("Àrea em km2: %f\n", área_km02);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("PIB: %f\n", PIB2);

    printf("Digite seu Número de pontos Turísticos: ");
    scanf("%d", &turísticos2);
    printf("Números de pontos turísticos: %d\n", turísticos2);

    return 0;
}