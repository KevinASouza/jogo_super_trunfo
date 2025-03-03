#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para armazenar os dados da primeira cidade
    char estado, nome_cidade[30];
    int populacao, quant_pontos_turisticos, codigo_carta;
    float area_cidade, PIB;

    // Início da entrada de dados para a primeira carta
    printf("CARTA 1\n");
    printf("-------\n");

    // Solicita a letra que representa o estado (entre A e H)
    printf("Digite uma letra entre A e H para representar seu estado: ");
    scanf(" %c", &estado);  // O espaço antes de %c é necessário para evitar a captura de caracteres 'pendentes' no buffer

    // Solicita o código da carta (um número entre 01 e 04)
    printf("Digite um numero de 01 a 04 para representar o codigo da carta: ");
    scanf("%i", &codigo_carta);

    // Solicita o nome da cidade
    printf("Digite o nome da cidade: ");
    while (getchar() != '\n'); // Limpa o buffer de entrada antes de usar fgets
    fgets(nome_cidade, 30, stdin);  // Lê o nome da cidade, até 30 caracteres

    // Solicita a população da cidade
    printf("Digite o numero de habitantes que se encontram nessa cidade: ");
    scanf("%i", &populacao);

    // Solicita a área da cidade em KM²
    printf("Digite a area, em KM2, da cidade: ");
    scanf("%f", &area_cidade);

    // Solicita o PIB da cidade
    printf("Digite PIB da cidade: ");
    scanf("%f", &PIB);

    // Solicita o número de pontos turísticos da cidade
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &quant_pontos_turisticos);

    // Declaração das variáveis para armazenar os dados da segunda cidade
    char estado2, nome_cidade2[30];
    int populacao2, quant_pontos_turisticos2, codigo_carta2;
    float area_cidade2, PIB2;

    // Limpa a tela para mostrar a segunda carta
    system("cls");

    // Início da entrada de dados para a segunda carta
    printf("CARTA 2\n");
    printf("-------\n");

    // Solicita a letra que representa o estado (entre A e H) para a segunda carta
    printf("Digite uma letra entre A e H para representar seu estado: ");
    scanf(" %c", &estado2);

    // Solicita o código da carta (um número entre 01 e 04) para a segunda carta
    printf("Digite um numero de 01 a 04 para representar o codigo da carta: ");
    scanf("%i", &codigo_carta2);

    // Solicita o nome da cidade para a segunda carta
    printf("Digite o nome da cidade: ");
    while (getchar() != '\n');  // Limpa o buffer de entrada antes de usar fgets
    fgets(nome_cidade2, 30, stdin);  // Lê o nome da cidade, até 30 caracteres

    // Solicita a população da cidade para a segunda carta
    printf("Digite o numero de habitantes que se encontram nessa cidade: ");
    scanf("%i", &populacao2);

    // Solicita a área da cidade em KM² para a segunda carta
    printf("Digite a area, em KM2, da cidade: ");
    scanf("%f", &area_cidade2);

    // Solicita o PIB da cidade para a segunda carta
    printf("Digite PIB da cidade: ");
    scanf("%f", &PIB2);

    // Solicita o número de pontos turísticos da cidade para a segunda carta
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &quant_pontos_turisticos2);

    // Limpa a tela antes de exibir as informações coletadas
    system("cls");

    // Exibe as informações coletadas para a primeira carta
    printf("CARTA 1\n");
    printf("ESTADO: %c\n", estado);  // Exibe o estado da primeira cidade
    printf("CODIGO DA CARTA: %c%i\n", estado, codigo_carta);  // Exibe o código da carta com o estado
    printf("NOME DA CIDADE: %s", nome_cidade);  // Exibe o nome da cidade
    printf("POPULACAO: %i\n", populacao);  // Exibe a população
    printf("AREA: %.2f KM2\n", area_cidade);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", PIB);  // Exibe o PIB com 2 casas decimais
    printf("PONTOS TURISTICOS: %i\n", quant_pontos_turisticos);  // Exibe o número de pontos turísticos

    // Exibe as informações coletadas para a segunda carta
    printf("\nCARTA 2\n");
    printf("ESTADO: %c\n", estado2);  // Exibe o estado da segunda cidade
    printf("CODIGO DA CARTA: %c%i\n", estado2, codigo_carta2);  // Exibe o código da carta com o estado
    printf("NOME DA CIDADE: %s", nome_cidade2);  // Exibe o nome da cidade
    printf("POPULACAO: %i\n", populacao2);  // Exibe a população
    printf("AREA: %.2f KM2\n", area_cidade2);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", PIB2);  // Exibe o PIB com 2 casas decimais
    printf("PONTOS TURISTICOS: %i\n", quant_pontos_turisticos2);  // Exibe o número de pontos turísticos

    return 0;  // Retorno do programa
}
