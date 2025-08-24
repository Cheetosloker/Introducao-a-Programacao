#include <stdio.h>

int main() {
    // Declaração das variáveis
    // Vamos armazenar as coordenadas dos navios em vetores bidimensionais
    // Cada navio terá 3 partes (por exemplo, comprimento = 3)
    int navioVertical[3][2];   // cada linha: [x, y]
    int navioHorizontal[3][2]; // cada linha: [x, y]

    // Definição manual das posições iniciais
    // O navio vertical ficará na coluna 2 (x = 2), começando da linha 1 até 3
    navioVertical[0][0] = 2; navioVertical[0][1] = 1; // parte 1
    navioVertical[1][0] = 2; navioVertical[1][1] = 2; // parte 2
    navioVertical[2][0] = 2; navioVertical[2][1] = 3; // parte 3

    // O navio horizontal ficará na linha 4 (y = 4), começando da coluna 1 até 3
    navioHorizontal[0][0] = 1; navioHorizontal[0][1] = 4; // parte 1
    navioHorizontal[1][0] = 2; navioHorizontal[1][1] = 4; // parte 2
    navioHorizontal[2][0] = 3; navioHorizontal[2][1] = 4; // parte 3

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (X=%d, Y=%d)\n", i+1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\nCoordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (X=%d, Y=%d)\n", i+1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    return 0;
}
