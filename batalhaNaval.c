#include <stdio.h>

int main() {
    // ======================================
    //  CRIAÇÃO DO TABULEIRO 10x10
    // ======================================
    int tabuleiro[10][10];

    // Preenche todas as posições com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ======================================
    //  NAVIOS (TAMANHO FIXO = 3)
    // ======================================
    int navioH[3] = {3, 3, 3};   // horizontal →
    int navioV[3] = {3, 3, 3};   // vertical ↓
    int navioD1[3] = {3, 3, 3};  // diagonal ↘
    int navioD2[3] = {3, 3, 3};  // diagonal ↙

    // ======================================
    //  COORDENADAS INICIAIS
    // ======================================
    int linhaH = 2, colunaH = 3;  // horizontal → linha 2
    int linhaV = 5, colunaV = 7;  // vertical ↓ coluna 7
    int linhaD1 = 0, colunaD1 = 0; // diagonal ↘ começa no canto superior esquerdo
    int linhaD2 = 0, colunaD2 = 9; // diagonal ↙ começa no canto superior direito

    // ======================================
    //  POSICIONAMENTO DOS NAVIOS
    // ======================================

    // Horizontal →
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioH[i];
    }

    // Vertical ↓
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    // Diagonal ↘ (linha e coluna aumentam juntas)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = navioD1[i];
    }

    // Diagonal ↙ (linha aumenta, coluna diminui)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = navioD2[i];
    }

    // ======================================
    //  EXIBIÇÃO DAS COORDENADAS
    // ======================================
    printf("\n=== COORDENADAS DOS NAVIOS ===\n");
    printf("Navio Horizontal → linha %d, colunas %d–%d\n", linhaH, colunaH, colunaH + 2);
    printf("Navio Vertical ↓ coluna %d, linhas %d–%d\n", colunaV, linhaV, linhaV + 2);
    printf("Navio Diagonal ↘ de (%d,%d) até (%d,%d)\n", linhaD1, colunaD1, linhaD1 + 2, colunaD1 + 2);
    printf("Navio Diagonal ↙ de (%d,%d) até (%d,%d)\n\n", linhaD2, colunaD2, linhaD2 + 2, colunaD2 - 2);

    // ======================================
    //  EXIBIÇÃO DO TABULEIRO
    // ======================================
    printf("     TABULEIRO  BATALHA  NAVAL\n\n");
    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = água | 3 = parte do navio\n");

    return 0;
}
