#include<stdio.h>

int main(){ 

    char letra_estado1, letra_estado2;
    char cod_carta1 [5], cod_carta2[5];
    char nome_cidade1 [50], nome_cidade2 [50];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2;
    float pib1, pib2;

    //carta numero 1
    printf("Digite as informacões da carta número 1\n");

    printf("Digite uma letra: \n");
    scanf("%c", &letra_estado1);

    printf("código da carta: \n");
    scanf("%s", cod_carta1);

    //Digitar apenas sem espaço
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("--------------------------------\n\n");

    //carta numero 2
    printf("Digite as informacões da carta número 2\n");

    printf("Digite uma letra: \n");
    scanf(" %c", &letra_estado2);

    printf("código da carta: \n");
    scanf("%s", cod_carta2);

    //Digitar apenas sem espaço
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Área em KM²: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);



    printf("--- Carta 1 --- \n");
    printf("Estado: %c\n", letra_estado1);
    printf("Codigo da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1 );
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area_km1);
    printf("PIB:  %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("--------------------------------\n\n");

    printf("--- Carta 2 --- \n");
    printf("Estado: %c\n", letra_estado2);
    printf("Codigo da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2 );
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area_km2);
    printf("PIB:  %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);



}

//Você só precisa implementar o cadastro e a exibição de duas cartas.
// %d: Imprime um inteiro no formato decimal.
 
// %i: Equivalente a %d.
 
// %f: Imprime um número de ponto flutuante no formato padrão.
 
// %e: Imprime um número de ponto flutuante na notação científica.
 
// %c: Imprime um único caractere.
 
// %s: Imprime uma cadeia (string) de caracteres.
