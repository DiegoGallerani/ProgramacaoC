#include <stdio.h>
int main(){

    //Variáveis para a Priemaira Carta;
    char estado1, codigo1[5], cidade1[20];
    int populacao1, pontos_turisticos1;
    float pib1, area1,densidade1,renda1;

    //Variáveis para a Segunda Carta
    char estado2, codigo2[5], cidade2[20];
    int populacao2, pontos_turisticos2;
    float pib2, area2, densidade2, renda2;


    printf("****** BEM VINDOS AO SUPER TRUNFO: NIVEL AVENTUREIRO *******     \n");
    printf("\n");
    printf("----------  VERSÃO 2.ALGUMA.COISA :P------------\n");
    printf("\n");
    //CADASTRO DA PRIMEIRA CARTA
    printf("----------- CADASTRO DA PRIMEIRA CARTA -----------\n");

    printf("Digite o Estado usando uma letra entre (A - H): ");
    scanf(" %c/n", &estado1);

    printf("Digite o Código cobminando a letra do Estado (ex: A01, H04): ");
    scanf("%s/n", codigo1);

    printf("Digite a Cidade: ");
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

    printf("Digite a Cidade: ");
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

    //calculo de densidade populacional e renda per capta primeira carta;
    densidade1 = (float)(populacao1 / area1);
    renda1 = (float)(pib1 / populacao1);

    //calculo de densidade populacional e renda per capta segunda carta;
    densidade2 = (float)(populacao2 / area2);
    renda2 = (float)(pib2 / populacao2);

    //RESULTADO PRIMEIRA CARTA 
    printf("---------- CARTA 1 ----------\n");
    printf("\n");
    
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d Habitantes.\n", populacao1);
    printf("Área (em Km²): %.1f quilômetros quadrados.\n", area1);
    printf("PIB R$:%.2f .\n", pib1);
    printf("Números de pontos Turísticos: %d\n", pontos_turisticos1);
    printf("A Densidade Populacional é de : %.1f habitantes por Km² \n", densidade1);
    printf("A Renda Per Capita é de R$: %.2f por habitante \n", renda1);
    printf("\n");

    //RESULTADO SEGUNDA A
    printf("---------- CARTA 2 ----------\n");
    printf("\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d Habitantes.\n", populacao2);
    printf("Área (Km Km²): %.1f quilômetros quadrados.\n", area2);
    printf("PIB R$: %.2f.\n", pib2);
    printf("Números de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("A Densidade Populacional é de : %.1f habitantes por Km² \n", densidade2);
    printf("A Renda Per Capita é de R$: %.2f por habitante \n", renda2);

    printf("\n");

    return 0;

}