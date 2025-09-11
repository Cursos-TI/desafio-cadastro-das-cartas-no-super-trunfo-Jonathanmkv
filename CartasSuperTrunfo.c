#include <stdio.h>

int main() {
    
    char Estado[30], codigo_da_carta[50], nome_da_cidade[40];
    int populacao, numero_de_pontos_turisticos; 
    float area, pib;

        printf("Digite o nome do seu estado: \n");
        scanf(" %[^\n]", Estado);

        printf("Digite o código da carta \n");
        scanf(" %[^\n]", codigo_da_carta);

        printf("Digite o nome da sua cidade: \n");
        scanf(" %[^\n]", nome_da_cidade);

        printf("Digite o número de habitantes da sua cidade: (SOMENTE NÚMEROS) \n");
        scanf("%d", &populacao);

        printf("Digite o número de pontos turisticos do seu estado: (SOMENTE NÚMEROS) \n");
        scanf("%d", &numero_de_pontos_turisticos);

        printf("Digite a Área: \n");
        scanf("%f", &area);

        printf("Digite o PiB do seu estado: \n");
        scanf("%f", &pib);

        printf("\n --- DADOS DA SUA CIDADE ---\n");

        printf("O seu estado é: %s \n", Estado); // imprime o nome do estado
        printf("O código da sua carta é: %s \n", codigo_da_carta); // imprime o código da carta
        printf("O nome da sua cidade é: %s \n", nome_da_cidade);   // imprime o nome da cidade
        printf("População: %d \n", populacao); // imprime o tomanho da populacao
        printf("Área: %f \n", area);
        printf("PIB: %f \n", pib); 
        printf("O número de pontos turísticos são: %d \n", numero_de_pontos_turisticos);


    return 0;
}
