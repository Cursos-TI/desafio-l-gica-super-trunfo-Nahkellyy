#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
int main() {

// Definição das variáveis para armazenar as propriedades das cidades
    int pontosTuristicos1, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;
    char estado1[50], estado2[50];
    char codigoCarta1[50], codigoCarta2[50];
    
    printf("*** SUPER TRUNFO PAÍSES! *** \n");

    // Cadastro das Cartas:
    printf("Cadastro de cartas.\n");
    printf("\n");

    //Dados da primeira carta.

    printf("Digite o código da carta número 1: \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o estado da carta número 1: \n");
    scanf("%s", &estado1);

    printf("Digite a população da carta número 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite o número de pontos turísticos da carta número 1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a área da carta número 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta número 1: \n");
    scanf("%f" , &pib1);

    //dados da segunda carta
    printf("Digite o código da carta número 2: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o estado da carta número 2: \n");
    scanf("%s", &estado2);

    printf("Digite a população número 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite o número de pontos turísticos número 2: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área número 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f" , &pib2);
    

    // calculo da densidade e PIBper 1
    float densidade1 = populacao1 / area1;
    float PIBper1 = pib1 / populacao1;
    
    // calculo densidade e PIBper 2
    float densidade2 = populacao2 / area2;
    float PIBper2 = pib2 / populacao2;

    //Comparação de cartas.
    printf("Comparação de cartas (Atributo: População)\n");
    
    if(populacao1>populacao2){
        printf("Resultado: Carta 1 Venceu! \n");
    }
    else{
        printf("Resultado: Carta 2 Venceu!\n");
    }

    printf("Carta 1- %s : %lu\n", estado1, populacao1);
    printf("Carta 2 - %s : %lu\n", estado2, populacao2);

    return 0;
}
