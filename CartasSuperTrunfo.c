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

    float densidade = (float) populacao / area; // calcula a densidade populacional da primera carta
    float pib_per_capita = (float) pib / populacao; // calcula o PIB per capita da primeira carta
    long double superpoder = (double) populacao + numero_de_pontos_turisticos + area + pib + pib_per_capita + 1 / densidade;
    
        
    char Estado2[30], codigo_da_carta2[50], nome_da_cidade2[40];
    int populacao2, numero_de_pontos_turisticos2; 
    float area2, pib2;

        printf("Digite o nome do segundo estado: \n");
        scanf(" %[^\n]", Estado2);

        printf("Digite o código da segunda carta: \n");
        scanf(" %[^\n]", codigo_da_carta2);

        printf("Digite o nome da segunda cidade: \n");
        scanf(" %[^\n]", nome_da_cidade2);

        printf("Digite o número de habitantes da segunda cidade: (SOMENTE NÚMEROS) \n");
        scanf("%d", &populacao2);

        printf("Digite o número de pontos turisticos do segundo estado: (SOMENTE NÚMEROS) \n");
        scanf("%d", &numero_de_pontos_turisticos2);

        printf("Digite a Área em km²: (SOMENTE NÚMEROS) \n");
        scanf("%f", &area2);

        printf("Digite o PIB do seu estado em reais: (SOMENTE NÚMEROS) \n");
        scanf("%f", &pib2);

        float densidade2 = (float) populacao2 / area2; // calcula o a densidade populacional da segunda carta
        float pib_per_capita2 = (float) pib2 / populacao2; // calcula o PIB per capita da segunda carta
        long double superpoder2 = (double) populacao2 + numero_de_pontos_turisticos2 + area2 + pib2 + pib_per_capita2 + 1 / densidade2;

        printf("\n --- PRIMEIRA CARTA ---\n");

        printf("O seu estado é: %s \n", Estado); // imprime o nome do estado
        printf("O código da sua carta é: %s \n", codigo_da_carta); // imprime o código da carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade);   // imprime o nome da cidade
        printf("População: %d \n", populacao); // imprime o tomanho da populacao
        printf("Área: %2.f \n", area);
        printf("PIB: %2.f \n", pib); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos);
        printf("A densidade populacional é %f hab/km² \n", densidade);
        printf("PIB per capita: R$ %2.f \n", pib_per_capita);
        printf("O super poder desta carta é: %lf pontos \n", superpoder);

        printf("\n --- SEGUNDA CARTA ---\n");

        printf("O seu estado é: %s \n", Estado2); // imprime o nome do segundo estado
        printf("O código da sua carta é: %s \n", codigo_da_carta2); // imprime o código da segunda carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade2);   // imprime o nome da segunda cidade
        printf("População: %d \n", populacao2); // imprime o tomanho da populacao
        printf("Área: %2.f \n", area2);
        printf("PIB: %2.f \n", pib2); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos2);
        printf("A densidade populacional é %f hab/km² \n", densidade2);
        printf("PIB per capita: R$ %2.f \n", pib_per_capita2);
        printf("O super poder desta carta é: %lf pontos \n", superpoder2);

    return 0;
}
