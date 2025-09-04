#include<stdio.h>

int main(){ 

    char letra_estado;
    char cod_carta[5];
    char nome_cidade[50];
    int populacao;
    int pontos_turisticos;
    float area_km;
    float pib;

    //carta numero 1
    printf("Digite as informacões da carta número 1\n");

    printf("Digite uma letra: \n");
    scanf("%c", &letra_estado);

    printf("código da carta: \n");
    scanf("%s", cod_carta);

    //Digitar apenas sem espaço
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao);

    printf("Área em KM²: \n");
    scanf("%f", &area_km);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);



    printf("--- Carta 1 --- \n");
    printf("Estado: %c\n", letra_estado);
    printf("Codigo da carta: %s\n", cod_carta);
    printf("Nome da cidade: %s\n", nome_cidade );
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area_km);
    printf("PIB:  %f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);






}

//Você só precisa implementar o cadastro e a exibição de duas cartas.
// %d: Imprime um inteiro no formato decimal.
 
// %i: Equivalente a %d.
 
// %f: Imprime um número de ponto flutuante no formato padrão.
 
// %e: Imprime um número de ponto flutuante na notação científica.
 
// %c: Imprime um único caractere.
 
// %s: Imprime uma cadeia (string) de caracteres.
