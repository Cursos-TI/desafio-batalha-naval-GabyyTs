#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define AGUA 0
#define NAVIO 3

int main() {

    //TABULEIRO 10X10
    int tabuleiro[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++){
            tabuleiro[i][j] = AGUA;
        }
    }

    //NAVIO 1 NA HORIZONTAL 
    for (i = 0; i < 3; i++) {
        tabuleiro[8][i + 1] = NAVIO;
    }

    //NAVIO 2 NA VERTICAL 
    for (i = 5; i < 8; i++) {
        tabuleiro[i + 1][6] = NAVIO;
    }

    //NAVIO 3 NA DIAGONAL
    for (i = 1; i < 4; i++) {
        tabuleiro[i][i + 3] = NAVIO;
    }

    //NAVIO 4 NA DIAGONAL
    for (i = 4; i < 7; i++) {
        tabuleiro[i][7 - i] = NAVIO;

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