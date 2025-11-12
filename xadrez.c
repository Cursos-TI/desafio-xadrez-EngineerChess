#include <stdio.h>

/*
    Desafio Mestre: Movimentação Recursiva de Peças de Xadrez
    Autor: Jardel Santos
    Nível: Mestre
    Linguagem: C

    Objetivo do Programa:
    - Simular os movimentos das peças Torre, Bispo, Rainha e Cavalo no tabuleiro de xadrez.
    - Demonstrar o uso de recursividade (Torre, Bispo e Rainha) e loops complexos (Cavalo).
    - Fornecer saída detalhada de cada movimento, informando a direção e a casa percorrida.
    - Estrutura do código organizada para fácil entendimento e manutenção.
    
    Movimentos simulados:
    - Torre  -> horizontal/vertical (usando recursão)
    - Bispo  -> diagonal (usando recursão avançada)
    - Rainha -> todas as direções (recursão)
    - Cavalo -> movimento em "L" (loops aninhados com controle de fluxo)
        
*/

// ------------------ TORRE ------------------
// Recursão simples para movimento em linha reta (horizontal ou vertical)
void moverTorre(int casas, int passo) {
    if (passo > casas) return; // Caso base: todas as casas percorridas
    printf("Torre: Direita (%d)\n", passo); // Exibe a direção e o passo atual
    moverTorre(casas, passo + 1);          // Chamada recursiva para a próxima casa
}

// ------------------ BISPO ------------------
// Recursão avançada para movimento diagonal (cima e direita)
// Cada chamada move uma casa diagonalmente até atingir o número total de casas
void moverBispo(int casasRestantes, int passoAtual) {
    if (passoAtual > casasRestantes) return; // Caso base
    printf("Bispo: Cima, Direita (%d)\n", passoAtual); // Mostra a casa atual
    moverBispo(casasRestantes, passoAtual + 1);        // Próxima casa diagonal
}

// ------------------ RAINHA ------------------
// Recursão simples para movimento em linha (neste caso, para a esquerda)
// Cada passo é exibido na saída
void moverRainha(int casas, int passo) {
    if (passo > casas) return; // Caso base
    printf("Rainha: Esquerda (%d)\n", passo);
    moverRainha(casas, passo + 1); // Próxima casa
}

// ------------------ CAVALO ------------------
// Movimento em "L" (duas casas para cima e uma para a direita)
// Utiliza loops aninhados com controle de fluxo (while) para simular movimento perpendicular
void moverCavalo(int casasCima, int casasDireita) {
    for (int passoCima = 1; passoCima <= casasCima; passoCima++) {
        printf("Cavalo: Cima (%d)\n", passoCima);
        int passoDireita = 1;
        while (passoDireita <= casasDireita) {
            if (passoCima == casasCima) { // Movimento horizontal só após completar vertical
                printf("Cavalo: Direita (%d)\n", passoDireita);
            }
            passoDireita++;
        }
    }
}

// ------------------ MAIN ------------------
int main() {
    printf("=== Simulação Mestre de Xadrez (Recursivo Avançado) ===\n\n");

    // Torre
    int movimentoTorre = 5;
    printf("=== Movimento da TORRE ===\n");
    moverTorre(movimentoTorre, 1);
    printf("\n");

    // Bispo
    int movimentoBispo = 5;
    printf("=== Movimento do BISPO ===\n");
    moverBispo(movimentoBispo, 1);
    printf("\n");

    // Rainha
    int movimentoRainha = 8;
    printf("=== Movimento da RAINHA ===\n");
    moverRainha(movimentoRainha, 1);
    printf("\n");

    // Cavalo
    int movimentoCavaloCima = 2;
    int movimentoCavaloDireita = 1;
    printf("=== Movimento do CAVALO ===\n");
    moverCavalo(movimentoCavaloCima, movimentoCavaloDireita);

    printf("\nSimulação Desafio Nível Mestre concluída!\n");
    return 0;
}
