#include <stdio.h>

#define TAM 5
#define NAVIOS 3

// Função para inicializar os tabuleiros com água ('~')
void inicializarTabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = '~';
}

// Função para mostrar o tabuleiro (opcional: esconder navios)
void mostrarTabuleiro(char tabuleiro[TAM][TAM], int esconder) {
    printf("  ");
    for (int i = 0; i < TAM; i++)
        printf("%d ", i);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for (int j = 0; j < TAM; j++) {
            if (esconder && tabuleiro[i][j] == 'N')
                printf("~ ");
            else
                printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para posicionar navios
void posicionarNavios(char tabuleiro[TAM][TAM], int jogador) {
    int x, y;
    printf("\nJogador %d: Posicione %d navios\n", jogador, NAVIOS);
    for (int i = 0; i < NAVIOS; i++) {
        do {
            printf("Navio %d - Digite linha e coluna (0-4): ", i + 1);
            scanf("%d %d", &x, &y);
        } while (x < 0 || x >= TAM || y < 0 || y >= TAM || tabuleiro[x][y] == 'N');
        tabuleiro[x][y] = 'N';
    }
}

// Função para jogar uma rodada
int disparar(char tabuleiro[TAM][TAM], int jogador) {
    int x, y;
    printf("Jogador %d - Digite coordenadas para atirar (linha coluna): ", jogador);
    scanf("%d %d", &x, &y);

    if (x < 0 || x >= TAM || y < 0 || y >= TAM) {
        printf("Coordenadas inválidas!\n");
        return 0;
    }

    if (tabuleiro[x][y] == 'N') {
        printf("💥 ACERTOU UM NAVIO!\n");
        tabuleiro[x][y] = 'X';
        return 1;
    } else if (tabuleiro[x][y] == '~') {
        printf("💦 Água!\n");
        tabuleiro[x][y] = 'O';
    } else {
