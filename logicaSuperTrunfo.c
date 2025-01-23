#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int pontosTuristicos; // Definição das variáveis para armazenar as propriedades das cidades
    float area, pib; 
    unsigned long int populacao;
    char nome[50];
    char estado[50];
    char codigoCarta[50];// Você pode utilizar o código do primeiro desafio
    

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("¨** Digite as informações da sua carta. **¨\n");
    printf("\n");
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //Dados da carta numero 1.
    printf("Informe os dados da carta número 1: \n");

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta);

    printf("Digite o estado da carta: \n");
    scanf("%s", &estado);

    printf("Digite a população: \n");
    scanf("%lu", &populacao);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f" , &pib);

    //Operações para calcular a densidade, o PIB per capita e o super poder da 1 carta.
    float densidade = populacao / area;
    float PIBper = pib / populacao;
    float superPoder1 = populacao + area + pib + PIBper + densidade + (float)pontosTuristicos;

    // dados da segunda carta

    int pontosTuristicos2; 
    float area2, pib2; 
    unsigned long int populacao2;
    char nome2[50];
    char estado2[50];
    char codigoCarta2[50];

    printf("Informe os dados da carta número 2: \n");

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o estado da carta: \n");
    scanf("%s", &estado2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f" , &pib2);

    //Operações para calcular a densidade, o PIB per capita e o super poder da 2 carta.
    float densidade2 = populacao2 / area2;
    float PIBper2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + PIBper2 + densidade2 + (float)pontosTuristicos2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if(populacao > populacao2){
        printf("Cidade 1 tem a maior população.\n");
    }
    else{
        printf("Cidade 2 tem a maior população\n");
    }

    if(pontosTuristicos > pontosTuristicos2){
        printf("Cidade 1 tem mais pontos turisticos.\n");
    }
    else{
        printf("Cidade 2 tem mais pontos turisticos\n");
    }

    if(area >area2){
        printf("Cidade 1 tem a maior área.\n");
    }
    else{
        printf("Cidade 2 tem a maior área.\n");
    }

    if(pib > pib2){
        printf("Cidade 1 tem o maior PIB.\n");
    }
    else{
        printf("Cidade 2 tem o maior PIB\n");
    }

    if(densidade < densidade2){
        printf("Cidade 1 tem a menor densidade.\n");
    }
    else{
        printf("Cidade 2 tem a menor densidade\n");
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    if(superPoder1 > superPoder2){
        printf("Cidade vencedora é: %s.\n", estado);
    }
    else{
        printf("Cidade vencedora é: %s.\n", estado2);
    }
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
