#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //carta 1
    char estado1[50];
    char código_carta1[4];
    char cidade1[50];
    int população1;
    float área_km01;
    float PIB1;
    int turísticos1;

    float DensidadePopu1;
    float PIBCapita1;

    signed long int calculo1;
    float calculo2;
    float calculo3;
    float Superpoder1;

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

    DensidadePopu1 = (população1 / área_km01);
    printf("Densidade Populacional: %f\n", DensidadePopu1);
   
    PIBCapita1 = (PIB1 / (float)população1);
    printf("PIB per Capita: %f\n", PIBCapita1);

        // Calculando o Super poder.
    calculo1 = população1 + turísticos1;
    calculo2 = DensidadePopu1 / 1;
    calculo3 = área_km01 + PIB1 + DensidadePopu1 + PIBCapita1;

    Superpoder1 = calculo1 + calculo2 + calculo3;
    printf("Super Poder: %f\n", Superpoder1);

    printf("\n"); //adicionei para separar as informações.

    //carta 2
    char estado2[50];
    char código_carta2[4];
    char cidade2[50];
    signed long int população2;
    float área_km02;
    float PIB2;
    int turísticos2;

    float DensidadePopu2;
    float PIBCapita2;

    signed long int calculo4;
    float calculo5;
    float calculo6;
    float Superpoder2;

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
    scanf("%lu", &população2);
    printf("população: %lu\n", população2);

    printf("Digite a Àrea em km2: ");
    scanf("%f", &área_km02);
    printf("Àrea em km2: %f\n", área_km02);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("PIB: %f\n", PIB2);

    printf("Digite seu Número de pontos Turísticos: ");
    scanf("%d", &turísticos2);
    printf("Números de pontos turísticos: %d\n", turísticos2);

    DensidadePopu2 = (população2 / área_km02);
    printf("Densidade Populacional: %f\n", DensidadePopu2);

    PIBCapita2 = (PIBCapita2 / (float)população2);
    printf("PIB per Capita: %f\n", PIBCapita2);

    // Calculando o Super poder.
    calculo4 = população2 + turísticos2;
    calculo5 = DensidadePopu2 / 1;
    calculo6 = área_km02 + PIB2 + DensidadePopu2 + PIBCapita2;

    Superpoder2 = calculo4 + calculo5 + calculo6;
    printf("Super Poder: %f\n", Superpoder2);

    printf("\n");
    printf("Comparação de Cartas:\nOBS: (1) para Carta1 vencer, e (0) para Carta2 vencer\n");
    printf("\n");

    printf("População: (%d)\n", população1 > população2);
    printf("Área: (%d)\n", área_km01 > área_km02);
    printf("PIB: (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: (%d)\n", turísticos1 > turísticos2);
    printf("Densidade Populacional: (%d)\n", DensidadePopu1 < DensidadePopu2);
    printf("PIB per Capita: (%d)\n", PIBCapita1 > PIBCapita2);
    printf("Super Poder: (%d)\n", Superpoder1 > Superpoder2);

    return 0;
}