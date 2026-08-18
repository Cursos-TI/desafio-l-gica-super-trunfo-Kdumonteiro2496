// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

//Este código é inspirado no jogo super trunfo v1;

#include <stdio.h>

int main() {
    //Declarando a carta 1
    char estado1[3], codigo1[10], cidade1[50];
    unsigned long int populacao1; // unsigned long int para suportar populacoes grandes
    float area1, pib1;
    int pontos_Turisticos1;
    float densidade1, pib_Per_Capita1;

    //Declarando a carta 2
    char estado2[3], codigo2[10], cidade2[50];
    unsigned long int populacao2; // unsigned long int para suportar populacoes grandes
    float area2, pib2;
    int pontos_Turisticos2;
    float densidade2, pib_Per_Capita2;

    //1.CADASTRO DA CARTA 1
    printf("Cadastro Carta 1\n");
    printf("Estado: \n");
    scanf("%3s", estado1);
    printf("Código da carta\n");
    scanf("%10s", codigo1);
    printf("Cidade: \n");
    scanf("%s[^\n", cidade1);
    printf("População: \n");
    scanf("%lu", &populacao1);
    printf("Área: \n");
    scanf("%f", &area1);
    printf("PIB: \n");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: \n\n\n");
    scanf("%d", &pontos_Turisticos1);

    //2.CADASTRO DA CARTA 2
    printf("Cadastro Carta 2\n");
    printf("Estado: \n");
    scanf("%3s", estado2);
    printf("Código da carta\n");
    scanf("%10s", codigo2);
    printf("Cidade: \n");
    scanf("%s[^\n", cidade2);
    printf("População: \n");
    scanf("%lu", &populacao2);
    printf("Área: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos_Turisticos2);

        //CALCULOS
    densidade1 = (float)populacao1 / area1;
    pib_Per_Capita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_Per_Capita2 = pib2 / (float)populacao2;

    //COMPARAÇÃO E RESULTADO
    printf("\n====================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n");
    printf("====================================\n");
    printf("Carta 1 - %s: %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, estado2, populacao2);
    printf("\n====================================\n");

    // Estrutura de decisão
    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s), venceu! ", cidade1);
    }else if (populacao2 > populacao1){
        printf("Resultado: Carta 2 (%s), venceu! ", cidade2);
        )
    }else{
        print("Resultado: Empate")
    }
    return 0;
}
