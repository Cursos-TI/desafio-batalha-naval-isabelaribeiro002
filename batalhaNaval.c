#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializa tudo com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;
    int linhaVertical = 5;
    int colunaVertical = 7;

    // Posiciona navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // Posiciona navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // Exibe o tabuleiro numerando as linhas
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", i);  // número da linha no início
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = água | 3 = parte do navio\n");

    return 0;
}
