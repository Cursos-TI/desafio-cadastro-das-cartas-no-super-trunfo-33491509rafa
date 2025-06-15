#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 8

char board[SIZE][SIZE];

// Função para inicializar o tabuleiro com peças
void initBoard() {
    // Peças pretas
    strcpy(board[0], "tcbqkcbt");
    for (int i = 0; i < SIZE; i++)
        board[1][i] = 'p';

    // Casas vazias
    for (int i = 2; i < 6; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = ' ';

    // Peças brancas
    for (int i = 0; i < SIZE; i++)
        board[6][i] = 'P';
    strcpy(board[7], "TCBQKCBT");
}

// Função para imprimir o tabuleiro
void printBoard() {
    printf("\n    a   b   c   d   e   f   g   h\n");
    printf("  +---+---+---+---+---+---+---+---+\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d |", 8 - i);
        for (int j = 0; j < SIZE; j++) {
            printf(" %c |", board[i][j]);
        }
        printf(" %d\n", 8 - i);
        printf("  +---+---+---+---+---+---+---+---+\n");
    }
    printf("    a   b   c   d   e   f   g   h\n\n");
}

// Converte notação tipo "e2" em coordenadas de matriz
int pos(char file, char rank, int *row, int *col) {
    if (file < 'a' || file > 'h' || rank < '1' || rank > '8') return 0;
    *col = file - 'a';
    *row = 8 - (rank - '0');
    return 1;
}

// Função principal do jogo
int main() {
    char move[10];
    int from_row, from_col, to_row, to_col;
    int turn = 0; // 0 = branco, 1 = preto

    initBoard();

    while (1) {
        printBoard();
        printf("Vez do %s (ex: e2 e4): ", turn == 0 ? "Branco" : "Preto");
        fgets(move, sizeof(move), stdin);

        if (strlen(move) < 5) {
            printf("Jogada inválida.\n");
            continue;
        }

        if (!pos(move[0], move[1], &from_row, &from_col) ||
            !pos(move[3], move[4], &to_row, &to_col)) {
            printf("Posição inválida.\n");
            continue;
        }

        char piece = board[from_row][from_col];

        if (piece == ' ' || (turn == 0 && piece >= 'a' && piece <= 'z') ||
            (turn == 1 && piece >= 'A' && piece <= 'Z')) {
            printf("Movimento ilegal.\n");
            continue;
        }

        // Move a peça
        board[to_row][to_col] = board[from_row][from_col];
        board[from_row][from_col] = ' ';

        turn = 1 - turn; // Troca turno
    }

    return 0;
}
