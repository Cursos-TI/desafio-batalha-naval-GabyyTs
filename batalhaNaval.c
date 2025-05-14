#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //TABULEIRO 10X10
    int tabuleiro[10][10];
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //NAVIO NA HORIZONTAL 
    tabuleiro[3][1] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[3][3] = 3;

    //NAVIO NA VERTICAL 
    tabuleiro[5][6] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;

    //EXIBIÇÃO DO TABULEIRO COM OS NAVIOS HORIZONTAL E VERTICAL
    printf("\n*** BATALHA NAVAL ***\n");

    //COLUNA COM LETRAS (A - J)
    printf("  ");
    for (int coluna = 0; coluna < 10; coluna++) {
        printf("%c ", 'A' + coluna); 
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", 1 + i); //LINHAS COM NÚMEROS (1 - 10)
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
