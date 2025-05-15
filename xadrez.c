#include <stdio.h>

// Programa: Movimentação de peças de xadrez
// 🥇 Nível Mestre:
// - Torre e Rainha usando funções recursivas
// - Bispo usando loops aninhados
// - Cavalo usando loops com múltiplas variáveis/condições, com continue e break

// Função recursiva para mover Torre
void moverTorreRec(int passo, int max) {
    // Caso base: ultrapassou o número de casas
    if (passo > max) return;
    // Imprime direção e avançar recursão
    printf("Direita (casa %d)\n", passo);
    moverTorreRec(passo + 1, max);
}

// Função recursiva para mover Rainha
void moverRainhaRec(int passo, int max) {
    if (passo > max) return;
    printf("Esquerda (casa %d)\n", passo);
    moverRainhaRec(passo + 1, max);
}

int main(void) {
    // Movimento da Torre (5 casas) - recursão
    printf("Movimento da Torre (5 casas para a direita) - recursivo:\n");
    moverTorreRec(1, 5);

    // Movimento do Bispo (5 casas na diagonal) - loops aninhados
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita) - loops aninhados:\n");
    for (int passo = 1; passo <= 5; passo++) {
        // Loop para direção vertical
        for (int v = 0; v < 1; v++) {
            printf("Cima ");
        }
        // Loop para direção horizontal
        for (int h = 0; h < 1; h++) {
            printf("Direita ");
        }
        printf("(casa %d)\n", passo);
    }

    // Movimento da Rainha (8 casas) - recursão
    printf("\nMovimento da Rainha (8 casas para a esquerda) - recursivo:\n");
    moverRainhaRec(1, 8);

    // Movimento do Cavalo em L (2 casas para cima, 1 para a direita)
    // Utiliza while com múltiplas variáveis, continue e break
    printf("\nMovimento do Cavalo em L (2 casas para cima e 1 para a direita) - loop avançado:\n");
    int vert = 0, horiz = 0;
    while (1) {
        if (vert < 2) {
            vert++;
            printf("Cima (passo %d)\n", vert);
            continue;  // volta ao início para continuar vertical
        }
        if (horiz < 1) {
            horiz++;
            printf("Direita (passo única)\n");
            continue;  // agora processa horizontal
        }
        break;  // completou L, sai do loop
    }

    return 0;
}
