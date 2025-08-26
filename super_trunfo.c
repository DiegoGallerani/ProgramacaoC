#include <stdio.h>
int main(){

    //Variáveis para a Priemaira Carta;
    char estado1, codigo1[5], cidade1[20];
    int populacao1, pontos_turisticos1;
    float pib1, area1;

    //Variáveis para a Segunda Carta
    char estado2, codigo2[5], cidade2[20];
    int populacao2, pontos_turisticos2;
    float pib2, area2;

    printf("     BEM VINDOS AO SUPER TRUNFO: NIVEL NOVATO       \n");
    printf("\n");
    printf("----------  VERSÃO 1 E UNS QUEBRADO :P------------\n");
    printf("\n");
    //CADASTRO DA PRIMEIRA CARTA
    printf("----------- CADASTRO DA PRIMEIRA CARTA -----------\n");

    printf("Digite o Estado usando uma letra entre (A - H): ");
    scanf(" %c/n", &estado1);

    printf("Digite o Código cobminando a letra do Estado (ex: A01, H04): ");
    scanf("%s/n", codigo1);

    printf("Digite o Cidade: ");
    scanf("%s/n", cidade1);

    printf("Digite a População: ");
    scanf("%d/n", &populacao1);

    printf("Digite a Área em Km²: ");
    scanf("%f/n", &area1);

    printf("Digite o PIB em Bilhões: ");
    scanf("%f/n", &pib1);

    printf("Digite o Número de pontos Turísticos: ");
    scanf("%d/n", &pontos_turisticos1);
    printf("\n");

    //CADASTRO DA SEGUNDA CARTA
    printf("----------- CADASTRO DA SEGUNDA CARTA -----------\n");

    printf("Digite o Estado usando uma letra entre (A - H): ");
    scanf(" %c/n", &estado2);

    printf("Digite o Código cobminando a letra do Estado (ex: A01, H04): ");
    scanf("%s/n", codigo2);

    printf("Digite o Cidade: ");
    scanf("%s/n", cidade2);

    printf("Digite a População: ");
    scanf("%d/n", &populacao2);

    printf("Digite a Área em Km²: ");
    scanf("%f/n", &area2);

    printf("Digite o PIB em Bilhões: ");
    scanf("%f/n", &pib2);

    printf("Digite o Número de pontos Turísticos: ");
    scanf("%d/n", &pontos_turisticos2);
    printf("\n");

    //RESULTADO PRIMEIRA CARTA 
    printf("---------- CARTA 1 ----------\n");
    printf("\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d Habitantes.\n", populacao1);
    printf("Área (em Km²): %f quilômetros quadrados.\n", area1);
    printf("PIB: %f Bilhões de Reais.\n", pib1);
    printf("Números de pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n");

    //RESULTADO SEGUNDA CARTA
    printf("---------- CARTA 2 ----------\n");
    printf("\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Habitantes.\n", populacao2);
    printf("Área (em Km²): %.3f quilômetros quadrados.\n", area2);
    printf("PIB: %.1f Bilhões de Reais.\n", pib2);
    printf("Números de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("\n");

    return 0;

}
