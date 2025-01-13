#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    int codigo_cidade, pontos_turisticos;
    float populacao, area, pib;
    char nome[50];
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    printf("Digite o código da cidade: \n");
    scanf("%d",&codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s",&nome);

    printf("Digite a população da cidade: \n");
    scanf("%f",&populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f",&area);

    printf("Digite o pib da cidade: \n");
    scanf("%f",&pib);

    printf("Digite o números de ponto turísticos: \n");
    scanf("%d",&pontos_turisticos);

    printf("O código da cidade é: %d \n", codigo_cidade);
    printf("O nome da cidade é: %s \n", nome);
    printf("A população da cidade é: %f \n", populacao);
    printf("A área da cidade é: %f \n", area);
    printf("O pib da cidade é: %f \n", pib);
    printf("O Número de pontos túristicos são: %d \n", pontos_turisticos);



    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    return 0;
}
