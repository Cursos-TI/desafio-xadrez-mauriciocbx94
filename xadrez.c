#include <stdio.h>

// Constantes para definir o número de movimentos de cada peça
int bispo = 5;
int torre = 5;
int rainha = 8;

int main() {
    
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\nMovimentação da Torre:\n");
    int j = 0;
    while (j < torre) {
        printf("Direita\n");
        j++;
    }

    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < rainha);

    return 0;
}