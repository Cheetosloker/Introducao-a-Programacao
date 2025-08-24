#include <stdio.h>

// Definição de constantes para as casas que cada peca se move
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    // --- Movimentacao do Bispo (usando do...while) ---
    printf("--- Movimentacao do Bispo ---\n");
    int i = 0;
    do {
        // O bispo se move na diagonal superior direita, que e uma combinacao
        // das direcoes "Cima" e "Direita"
        printf("Cima e Direita\n");
        i++;
    } while (i < CASAS_BISPO);
    printf("\n");

    // --- Movimentacao da Torre (usando for) ---
    printf("--- Movimentacao da Torre ---\n");
    // A torre se move 5 casas para a direita
    for (int j = 0; j < CASAS_TORRE; j++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentacao da Rainha (usando while) ---
    printf("--- Movimentacao da Rainha ---\n");
    int k = 0;
    // A rainha se move 8 casas para a esquerda
    while (k < CASAS_RAINHA) {
        printf("Esquerda\n");
        k++;
    }
    printf("\n");

    return 0;
}