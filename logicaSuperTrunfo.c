#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int pontosTuristicos1, pontosTuristicos2;// Definição das variáveis para armazenar as propriedades das cidades
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;
    char nome1[50], nome2[50];
    char estado1[50], estado2[50];
    char codigoCarta1[50], codigoCarta2[50];
    int menu, escolha1, escolha2;
    // Você pode utilizar o código do primeiro desafio
    
    printf("*** Super truco países!*** \n");

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

    //Dados da primeira carta.
    printf("Informe os dados da primeira carta: \n");

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

    // dados da segunda carta
    printf("Informe os dados da segunda carta: \n");

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


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    
    printf("¨** Comparação de carta. Escolha uma opção! **¨\n");

    printf("Escolha o atributo da primeira carta para ser comparado!\n");
    printf("1 - População\n");
    printf("2 - Pontos Turísticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Densidade\n");
    scanf("%d", &escolha1);

    printf("Escolha o atributo da segunda carta para ser comparado!\n");
    printf("1 - população\n");
    printf("2 - Pontos Turísticos\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Densidade\n");
    scanf("%d", &escolha2);

    // calculo da densidade um
    float densidade1 = populacao1 / area1;
    float PIBper1 = pib1 / populacao1;

    // calculo densidade dois
    float densidade2 = populacao2 / area2;
    float PIBper2 = pib2 / populacao2;

//escolha número um
switch (escolha1)
    {
    case 1:
        printf("1 - Você escolheu população.\n");
        break;
    case 2:
        printf("1 - Você escolheu Pontos Turísticos.\n");
        break;
    case 3:
        printf("1 - Você escolheu Área.\n");
        break;
    case 4:
        printf("1 - Você escolheu PIB.\n");
        break;
    case 5:
        printf("1 - Você escolheu Densidade.\n");
        break;

    default:
        printf("Escolha uma das opções!\n");
        break;
    }

    //escolha número dois
     switch (escolha2)
    {
    case 1:
        printf("2 - Você escolheu população.\n");
        break;
    case 2:
        printf("2 - Você escolheu Pontos Turísticos.\n");
        break;
    case 3:
        printf("2 - Você escolheu Área.\n");
        break;
    case 4:
        printf("2 - Você escolheu PIB.\n");
        break;
    case 5:
        printf("2 - Você escolheu Densidade.\n");
        break;

    default:
        printf("Escolha uma das opções!\n");
        break;
    }

    //COMPARAÇÃO DE CARTAS
    if ((escolha1 == 1) && (escolha2 == 1) )
    {
        if (populacao1 > populacao2 )
        {
            printf("Com base na populção a carta número 1 é a ganhadora!");
        }
        else ///if (populacao2 > populacao1)
        {
            printf("Com base na população a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 1) && (escolha2 == 2) )
    {
        if (populacao1 > pontosTuristicos2 )
        {
            printf("Com base na população a carta número 1 é a ganhadora!");
        }
        else 
        {
            printf("Com base nos pontos turísticos a carta número 2 é a ganhadora!\n");
        }
        
    }

     if ((escolha1 == 1) && (escolha2 == 3) )
    {
        if (populacao1 > area2)
        {
            printf("Com base na população a carta número 1 é a ganhadora!\n");
        }
        else
        {
            printf("Com base na área a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 1) && (escolha2 == 4) )
    {
        if (populacao1 > pib2 )
        {
            printf("Com base na população a carta número 1 é a ganhadora!\n!");
        }
        else 
        {
            printf("Com base no PIB a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 1) && (escolha2 == 5) )
    {
        if (populacao1 < densidade2)
        {
            printf("Com base na populção a carta número 1 é a vencedora!\n");
        }
        else
        {
            printf("Com base na densidade carta número 2 é a vencedora!\n");
        }
        
    }

    if ((escolha1 == 2) && (escolha2 == 1) )
    {
        if (pontosTuristicos1 > populacao2 )
        {
            printf("Com base nos pontos turísticos a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na população a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 2) && (escolha2 == 2) )
    {
        if (pontosTuristicos1 > pontosTuristicos2 )
        {
            printf("Com base nos pontos turístico a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base nos pontos turísticos a carta número 2 é a ganhadora!\n");
        }
        
    } 

    if ((escolha1 == 2) && (escolha2 == 3) )
    {
        if (pontosTuristicos1 > area2)
        {
            printf("Com base nos pontos turístico a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na área a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 2) && (escolha2 == 4) )
    {
        if (pontosTuristicos1 > pib2 )
        {
            printf("Com base nos pontos turístico a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base no PIB a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 2) && (escolha2 == 5) )
    {
        if (pontosTuristicos1 < densidade2 )
        {
            printf("Com base nos pontos turístico a carta número 1 é a ganhadora!\n");
        }
        else
        {
            printf("Com base na densidade a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 3) && (escolha2 == 1) )
    {
        if (area1 > populacao2 )
        {
            printf("Com base na área a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na população a carta número 2 é a ganhadora!\n");
        }
        
    } 

    if ((escolha1 == 3) && (escolha2 == 2) )
    {
        if (area1 > pontosTuristicos2 )
        {
            printf("Com base na área a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base nos pontos turístico a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 3) && (escolha2 == 3) )
    {
        if (area1 > area2 )
        {
            printf("Com base na área a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na área a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 3) && (escolha2 == 4) )
    {
        if (area1 > pib1)
        {
            printf("Com base na área a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base no PIB a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 3) && (escolha2 == 5) )
    {
        if (area1 < densidade2)
        {
            printf("Com base na área a carta número 1 é a ganhadora!\n");
        }
        else
        {
            printf("Com base na densidade carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 4) && (escolha2 == 1) )
    {
        if (pib1 > populacao2 )
        {
            printf("Com base no PIB a carta núemro 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na população a carta número 2 é a ganhadora!\n");
        }
    }

    if ((escolha1 == 4) && (escolha2 == 2) )
    {
        if (pib1 > pontosTuristicos2 )
        {
            printf("Com base no PIB a carta número 1 é a ganhadora!\n");
        }
        else
        {
            printf("Com base nos pontos turísticos a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 4) && (escolha2 == 3) )
    {
        if (pib1 > area2 )
        {
            printf("Com base no PIB a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na área a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 4) && (escolha2 == 4) )
    {
        if (pib1 > pib2 )
        {
            printf("Com base no PIB a carta número 1 é a ganhadora!\n");
        }
        else
        {
            printf("Com base no PIB a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 4) && (escolha2 == 5) )
    {
        if (pib1 < densidade2 )
        {
            printf("Com base no PIB a carta número 1 é a ganhadora!\n");
        }
        else 
        {
            printf("Com base na densidade a carta número 2 é a ganhadora!\n");
        }
    }

    if ((escolha1 == 5) && (escolha2 == 1) )
    {
        if (densidade1 < populacao1 )
        {
            printf("Com base na densidade a carta número 1 é a ganhador!\n");
        }
        else 
        {
            printf("Com base na população a carta número 2 é a ganhadora\n");
        }
        
    }

    if ((escolha1 == 5) && (escolha2 == 2) )
    {
        if (densidade1 < pontosTuristicos2 )
        {
            printf("Com base na densidade a carta número 1 é a ganhador!\n");
        }
        else 
        {
            printf("Com base nos pontos turísticos a carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 5) && (escolha2 == 3) )
    {
        if (densidade1 < area2 )
        {
            printf("Com base na densidade a carta número 1 é a ganhador!\n");
        }
        else
        {
            printf("Com base na área carta número 2 é a ganhadora!");
        }
        
    }

    if ((escolha1 == 5) && (escolha2 == 4) )
    {
        if (densidade1 < pib2 )
        {
            printf("Com base na densidade a carta número 1 é a ganhador!\n");
        }
        else 
        {
            printf("Com base no PIB carta número 2 é a ganhadora!\n");
        }
        
    }

    if ((escolha1 == 5) && (escolha2 == 5) )
    {
        if (densidade1 < densidade2 )
        {
            printf("Com base na densidade a carta número 1 é a ganhador!\n");
        }
        else 
        {
            printf("Com base na densidade a carta número 2 é a ganhador!\n");
        }
        
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
    
    
    
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
