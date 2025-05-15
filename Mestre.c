#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define AGUA 0
#define CONE 1
#define CRUZ 2
#define OCTAEDRO 3

int main() {

    //TABULEIRO 10X10
    int tabuleiro[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = AGUA;
        }
    }

    //CONE
    int altura = 3;
    int linhainicial = 7; // começa na linha 7
    int centro = 7;       // coluna 8

    for (i = 0; i < altura; i++) {
        int linha = linhainicial + i;
        for (j = 0; j < COLUNAS; j++) {
            if (j >= centro - i && j <= centro + i && linha < LINHAS) {
                tabuleiro[linha][j] = CONE;
            }
        }
    }

    //CRUZ
    int horizontal = 5;  // linha
    int vertical = 3; // coluna

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            // Linha vertical da cruz
            if ((i >= horizontal - 1 && i <= horizontal + 1) && j == vertical) {
                tabuleiro[i][j] = CRUZ;
            }
            // Linha horizontal da cruz
            if ((j >= vertical - 2 && j <= vertical + 2) && i == horizontal) {
                tabuleiro[i][j] = CRUZ;
            }
        }
    }

    //OCTAEDRO
    int altura2 = 2;  // linha
    int largura = 6; // coluna

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            // Linha vertical da cruz
            if ((i >= altura2 - 1 && i <= altura2 + 1) && j == largura) {
                tabuleiro[i][j] = OCTAEDRO;
            }
            // Linha horizontal da cruz
            if ((j >= largura - 1 && j <= largura + 1) && i == altura2) {
                tabuleiro[i][j] = OCTAEDRO;
            }
        }
    }

    //EXIBIÇÃO DO TABULEIRO COM OS NAVIOS HORIZONTAL E VERTICAL
    printf("\n*** BATALHA NAVAL ***\n");

    //COLUNA COM LETRAS
    printf("  ");
    for (int coluna = 0; coluna < COLUNAS; coluna++) {
        printf("%c ", 'A' + coluna); 
    }
    printf("\n");

    for (i = 0; i < LINHAS; i++) {
        printf("%d ", 1 + i); //LINHAS COM NÚMEROS
        for (j = 0; j < COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}