#include <stdio.h>

// ------------------------------
// Funções recursivas
// ------------------------------

// Função recursiva para simular a Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Direita (%d)\n", casasRestantes);
    moverTorre(casasRestantes - 1);
}

// Função recursiva para simular a Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0)
        return;
    printf("Esquerda (%d)\n", casasRestantes);
    moverRainha(casasRestantes - 1);
}

// Função recursiva + loops aninhados para o Bispo
void moverBispo(int i, int max) {
    if (i > max) return;

    for (int j = 1; j <= 1; j++) { // Movimento horizontal "Direita"
        printf("Cima Direita (%d)\n", i);
    }

    moverBispo(i + 1, max);
}

// ------------------------------
// Função para simular o Cavalo com loops complexos
// ------------------------------
void moverCavaloL() {
    int casasVerticais = 2;
    int casasHorizontais = 1;
    int i, j;

    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (i = 0; i < casasVerticais; i++) {
        if (i == 1) { // Ao final das duas casas para cima, mover para a direita
            for (j = 0; j < casasHorizontais; j++) {
                if (j == 0) {
                    printf("Direita (%d)\n", j + 1);
                    break; // Sai após 1 movimento horizontal
                }
            }
        }
        if (i >= 0 && i < casasVerticais) {
            printf("Cima (%d)\n", i + 1);
            continue; // Volta para o início do loop
        }
    }
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    // ------------------------------
    // Movimento da TORRE (Recursivo)
    // ------------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);

    printf("\n");

    // ------------------------------
    // Movimento do BISPO (Recursivo + Loop interno)
    // ------------------------------
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(1, 5);

    printf("\n");

    // ------------------------------
    // Movimento da RAINHA (Recursivo)
    // ------------------------------
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    printf("\n");

    // ------------------------------
    // Movimento do CAVALO (Loops aninhados e controle)
    // ------------------------------
    moverCavaloL();

    return 0;
}
