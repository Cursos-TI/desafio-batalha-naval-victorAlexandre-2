#include <stdio.h>

#define TAMANHO 10  // Tamanho do tabuleiro

int main() {
    // Tabuleiro 10x10
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio horizontal (tamanho 4) - posição inicial (linha 2, coluna 3)
    int linha_h = 2;
    int coluna_h = 3;
    int tamanho_h = 4;

    // Navio vertical (tamanho 3) - posição inicial (linha 5, coluna 6)
    int linha_v = 5;
    int coluna_v = 6;
    int tamanho_v = 3;

    // Posicionar navio horizontal
    printf("Navio Horizontal:\n");
    for (int i = 0; i < tamanho_h; i++) {
        tabuleiro[linha_h][coluna_h + i] = 1;
        printf("Parte %d: (%d, %d)\n", i + 1, linha_h, coluna_h + i);
    }

    // Posicionar navio vertical
    printf("\nNavio Vertical:\n");
    for (int i = 0; i < tamanho_v; i++) {
        tabuleiro[linha_v + i][coluna_v] = 1;
        printf("Parte %d: (%d, %d)\n", i + 1, linha_v + i, coluna_v);
    }

    // Exibir tabuleiro
    printf("\nTabuleiro:\n   ");
    for (int c = 0; c < TAMANHO; c++) {
        printf("%d ", c);  // Cabeçalho das colunas
    }
    printf("\n");

    for (int l = 0; l < TAMANHO; l++) {
        printf("%d  ", l);  // Índice da linha
        for (int c = 0; c < TAMANHO; c++) {
            if (tabuleiro[l][c] == 1) {
                printf("N ");  // Parte de navio
            } else {
                printf("~ ");  // Água
            }
        }
        printf("\n");
    }

    return 0;
}

