
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Estrutura de repetição for, while, do-while e implementações aninhadas loop em loop.

#include <stdio.h>

/*
Desafio: Movimentando as Peças do Xadrez
Autor: Jardel Santos
Nível: Aventureiro
Linguagem: C

Objetivo:
- Simular os movimentos da Torre, do Bispo, da Rainha e do Cavalo.
- Usar diferentes estruturas de repetição:
  * Torre  -> for
  * Bispo  -> while
  * Rainha -> do-while
  * Cavalo -> loops aninhados (for + while)
*/

int main()
{
    // --- TORRE -------------------------------------------------------------
    int iT;
    int movimento_torre = 5;

    printf("=== Movimento da TORRE ===\n");
    for (iT = 1; iT <= movimento_torre; iT++)
    {
        printf("Direita (%d)\n", iT);
    }

    // --- BISPO -------------------------------------------------------------
    int movimento_bispo = 5;
    int iB = 1;

    printf("\n=== Movimento do BISPO ===\n");
    while (iB <= movimento_bispo)
    {
        printf("Cima, Direita (%d)\n", iB);
        iB++;
    }

    // --- RAINHA ------------------------------------------------------------
    int movimento_rainha = 8;
    int iR = 1;

    printf("\n=== Movimento da RAINHA ===\n");
    do
    {
        printf("Esquerda (%d)\n", iR);
        iR++;
    } while (iR <= movimento_rainha);

    // --- CAVALO ------------------------------------------------------------
    // O Cavalo move-se em "L":
    // Neste caso, 2 casas para BAIXO e 1 casa para a ESQUERDA.
    // Aqui usamos loops aninhados: for (externo) e while (interno)

    int movimento_baixo = 2;
    int movimento_esquerda = 1;

    printf("\n=== Movimento do CAVALO ===\n");

    // Loop externo: movimenta para baixo (2 casas)
    for (int passo_baixo = 1; passo_baixo <= movimento_baixo; passo_baixo++)
    {
        printf("Baixo (%d)\n", passo_baixo);

        // Quando atingir o último movimento para baixo,
        // o cavalo faz o movimento perpendicular (1 casa para a esquerda)
        if (passo_baixo == movimento_baixo)
        {
            int passo_esquerda = 1;
            while (passo_esquerda <= movimento_esquerda)
            {
                printf("Esquerda (%d)\n", passo_esquerda);
                passo_esquerda++;
            }
        }
    }

    // Fim do programa
    printf("\nSimulação concluída!\n\n");

    return 0;
}
