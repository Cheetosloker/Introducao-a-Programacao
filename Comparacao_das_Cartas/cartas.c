#include <stdio.h>
#include <string.h>

// Estrutura para representar a carta
typedef struct {
    char estado[50];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para exibir os dados de uma carta
void exibirCarta(Carta c) {
    printf("\n--- Carta %s ---\n", c.codigo);
    printf("Estado: %s\n", c.estado);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

// Função para comparar cartas
void compararCartas(Carta c1, Carta c2, int opcao) {
    printf("\nComparando pelo atributo escolhido...\n");
    switch(opcao) {
        case 1: // População
            if (c1.populacao > c2.populacao)
                printf("Vencedora: %s (População maior)\n", c1.nomeCidade);
            else if (c2.populacao > c1.populacao)
                printf("Vencedora: %s (População maior)\n", c2.nomeCidade);
            else
                printf("Empate em população!\n");
            break;
        case 2: // Área
            if (c1.area > c2.area)
                printf("Vencedora: %s (Área maior)\n", c1.nomeCidade);
            else if (c2.area > c1.area)
                printf("Vencedora: %s (Área maior)\n", c2.nomeCidade);
            else
                printf("Empate em área!\n");
            break;
        case 3: // PIB
            if (c1.pib > c2.pib)
                printf("Vencedora: %s (PIB maior)\n", c1.nomeCidade);
            else if (c2.pib > c1.pib)
                printf("Vencedora: %s (PIB maior)\n", c2.nomeCidade);
            else
                printf("Empate em PIB!\n");
            break;
        case 4: // Pontos turísticos
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedora: %s (Mais pontos turísticos)\n", c1.nomeCidade);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedora: %s (Mais pontos turísticos)\n", c2.nomeCidade);
            else
                printf("Empate em pontos turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    Carta carta1, carta2;

    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Código: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Código: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibindo cartas
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Escolha do atributo para comparação
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    compararCartas(carta1, carta2, opcao);

    return 0;
}
