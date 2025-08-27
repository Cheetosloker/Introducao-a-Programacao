#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;
    int numero_cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variáveis para a segunda carta
    char estado2;
    int numero_cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Cabeçalho do programa
    printf("=========================================\n");
    printf("    SUPER TRUNFO - PAÍSES (NÍVEL NOVATO) \n");
    printf("=========================================\n\n");
    
    // Entrada de dados para a primeira carta
    printf("CADASTRO DA PRIMEIRA CARTA:\n");
    printf("----------------------------\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Número da cidade (1 a 4): ");
    scanf("%d", &numero_cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    printf("\n");
    
    // Entrada de dados para a segunda carta
    printf("CADASTRO DA SEGUNDA CARTA:\n");
    printf("----------------------------\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Número da cidade (1 a 4): ");
    scanf("%d", &numero_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("=========================================\n");
    printf("          DADOS CADASTRADOS\n");
    printf("=========================================\n\n");
    
    // Dados da primeira carta
    printf("CARTA 1: %c%02d\n", estado1, numero_cidade1);
    printf("-----------------------------------------\n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    
    printf("\n");
    
    // Dados da segunda carta
    printf("CARTA 2: %c%02d\n", estado2, numero_cidade2);
    printf("-----------------------------------------\n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    
    printf("\n");
    printf("Cadastro concluído com sucesso!\n");
    
    return 0;
}