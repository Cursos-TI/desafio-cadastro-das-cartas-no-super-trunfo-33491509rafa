#include <stdio.h>



int main() {
    
    int codigo_cidade, pontos_turisticos;
    float populacao, area, pib;
    char nome[50];
 
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

    printf("O código da cidade é: %d \n ", codigo_cidade);
    printf(" O nome da cidade é: %s \n ", nome);
    printf(" A população da cidade é: %f \n ", populacao);
    printf(" A área da cidade é: %f \n ", area);
    printf(" O pib da cidade é: %f \n ", pib);
    printf(" O Número de pontos túristicos são: %d \n ", pontos_turisticos);

    return 0;
}
