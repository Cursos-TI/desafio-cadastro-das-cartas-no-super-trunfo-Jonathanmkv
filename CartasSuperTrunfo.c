#include <stdio.h>

int main() {
    
    char Estado[30], codigo_da_carta[50], nome_da_cidade[40];
    int populacao, numero_de_pontos_turisticos; 
    float area, pib;

        printf("Digite o nome do seu estado: \n");
        scanf(" %[^\n]", Estado);

        printf("Digite o código da carta: \n");
        scanf(" %[^\n]", codigo_da_carta);

        printf("Digite o nome da sua cidade: \n");
        scanf(" %[^\n]", nome_da_cidade);

        printf("Digite o número de habitantes da sua cidade: (SOMENTE NÚMEROS) \n");
        scanf("%d", &populacao);

        printf("Digite o número de pontos turisticos do seu estado: (SOMENTE NÚMEROS) \n");
        scanf("%d", &numero_de_pontos_turisticos);

        printf("Digite a Área em km²: (SOMENTE NÚMEROS) \n");
        scanf("%f", &area);

        printf("Digite o PIB do seu estado em reais: (SOMENTE NÚMEROS) \n");
        scanf("%f", &pib);
        
        float densidade = (float) populacao / area;
        float pib_per_capita = (float) pib / populacao;

        printf("\n --- DADOS DA SUA CIDADE ---\n");

        printf("O seu estado é: %s \n", Estado); // imprime o nome do estado
        printf("O código da sua carta é: %s \n", codigo_da_carta); // imprime o código da carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade);   // imprime o nome da cidade
        printf("População: %d \n", populacao); // imprime o tomanho da populacao
        printf("Área: %2.f \n", area);
        printf("PIB: %2.f \n", pib); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos);
        printf("A densidade populacional é %f hab/km² \n", densidade);
        printf("PIB per capita: R$ %2.f \n", pib_per_capita);

    return 0;
}
