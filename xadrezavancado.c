#include <stdio.h>

// Número de movimentos definidos diretamente no código
int movimentosTorre = 5;
int movimentosBispo = 3; // Usado também no loop aninhado
int movimentosRainha = 4;
int movimentosCavalo = 3;

// === Funções Recursivas ===

// Torre: Movimento recursivo para Direita
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Rainha: Movimento recursivo para Esquerda
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Bispo: Movimento recursivo combinando com loops aninhados
void moverBispo(int vertical) {
    if (vertical == 0) return;
    
    for (int h = 0; h < movimentosBispo; h++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(vertical - 1);
}

// === Cavalo com Loops Aninhados ===
// Movimento em "L": duas casas para cima e uma para a direita
void moverCavalo(int movimentos) {
    int count = 0;
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue;  // Evita movimentos diagonais
            if (count >= movimentos) break;

            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            count++;
        }
        if (count >= movimentos) break;
    }
}

int main() {
    // === Bispo ===
    printf("Movimentação do Bispo:\n");
    moverBispo(movimentosBispo);

    // === Torre ===
    printf("\nMovimentação da Torre:\n");
    moverTorre(movimentosTorre);

    // === Rainha ===
    printf("\nMovimentação da Rainha:\n");
    moverRainha(movimentosRainha);

    // === Cavalo ===
    printf("\nMovimentação do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}