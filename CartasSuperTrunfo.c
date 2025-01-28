#include <stdio.h>

int main() {
    
    //Tipos de dados
    int codigo_cidade, pontos_turisticos,codigo_cidade2, pontos_turisticos2;
    float populacao, area, pib, densidade_populacinal, pib_per_capita, populacao2, area2, pib2, densidade_populacinal2, pib_per_capita2,super_poder1,super_poder2;
    char nome[50],nome2[10];

    // cidade 1 - Dados
    printf(" Digite o código da cidade: \n");
    scanf("%d",&codigo_cidade);

    printf(" Digite o nome da cidade: \n");
    scanf("%s",&nome);

    printf(" Digite a população da cidade: \n");
    scanf("%f",&populacao);

    printf(" Digite a area da cidade: \n");
    scanf("%f",&area);

    printf(" Digite o pib da cidade: \n");
    scanf("%f",&pib);

    printf(" Digite o números de ponto turísticos: \n");
    scanf("%d",&pontos_turisticos);

    printf(" A densidade populacional é: %.2f \n ", densidade_populacinal);
    printf(" O pib per capita é : %.2f \n ", pib_per_capita);

    densidade_populacinal = populacao / area;
    pib_per_capita = pib / populacao;
    
    // cidade 2

    printf(" Digite o código da cidade2: \n");
    scanf("%d",&codigo_cidade2);

    printf(" Digite o nome da cidade2: \n");
    scanf("%s",&nome2);

    printf(" Digite a população da cidade2: \n");
    scanf("%f",&populacao2);

    printf(" Digite a area da cidade2: \n");
    scanf("%f",&area2);

    printf(" Digite o pib da cidade2: \n");
    scanf("%f",&pib2);

    printf(" Digite o números de ponto turísticos2: \n");
    scanf("%d",&pontos_turisticos2);

    //Intermediario
    densidade_populacinal2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    
    
    
    
    printf(" O código da cidade é: %d \n ", codigo_cidade);
    printf(" O nome da cidade é: %s \n ", nome);
    printf(" A população da cidade é: %.2f \n ", populacao);
    printf(" A área da cidade é: %.2f \n ", area);
    printf(" O pib da cidade é: %.2f \n ", pib);
    printf(" O Número de pontos túristicos são: %d \n ", pontos_turisticos);

   

    printf(" A densidade populacional é: %.2f \n ", densidade_populacinal2);
    printf(" O pib per capita é : %.2f \n ", pib_per_capita2);

    //Mestre
    super_poder1 = populacao + area + pib + pontos_turisticos;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2;

    if ( super_poder1 > super_poder2 ){

        printf("Super poder da carta 1 é mais forte! \n" );
    }
    else {
        printf("Super poder da carta 2 é mais forte! \n");
    }

   

    return 0;
}

