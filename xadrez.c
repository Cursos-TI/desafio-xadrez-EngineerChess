
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Autor: Jardel Santos
    Nível: Novato
    Linguagem: C

    Objetivo:
    - Simular os movimentos da Torre, do Bispo e da Rainha
    - Usar diferentes estruturas de repetição:
        * Torre  -> for
        * Bispo  -> while
        * Rainha -> do-while
    - Exibir no console as direções percorridas.
*/

int main() {
    // --- TORRE -------------------------------------------------------------
    // A Torre move-se em linha reta, horizontal ou verticalmente.
    // Neste caso, moverá 5 casas para a direita.
    int iT; // i para contador de Torre
    int movimento_torre = 5;

    printf("=== Movimento da TORRE ===\n");
    for (iT = 1; iT <= movimento_torre; iT++) {
        printf("Direita (%d)\n", iT);
    }

    // --- BISPO -------------------------------------------------------------
    // O Bispo move-se nas diagonais.
    // Neste caso, moverá 5 casas na diagonal para cima e à direita.
    int movimento_bispo = 5;
    int iB = 1; // i para contador de Bispo

    printf("\n=== Movimento do BISPO ===\n");
    while (iB <= movimento_bispo) {
        printf("Cima, Direita (%d)\n", iB);
        iB++;
    }

    // --- RAINHA ------------------------------------------------------------
    // A Rainha move-se em todas as direções.
    // Neste caso, moverá 8 casas para a esquerda.
    int movimento_rainha = 8;
    int iR = 1; // i contador para Rainha

    printf("\n=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", iR);
        iR++;
    } while (iR <= movimento_rainha);

    // Fim do programa
    printf("\nSimulação concluída!\n\n");

    return 0;
}

