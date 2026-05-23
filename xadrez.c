#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int direita, cima, esquerda;
    direita = 5;
    cima = 5;
    esquerda = 8;
    // Implementação de Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    while (direita > 0 && cima > 0){
        printf("Direita, Cima\n");
        direita--;
        cima--;
    }
    // Implementação de Movimentação da Torre
    direita = 5;
    printf("Movimento da Torre:\n");
    do{ 
        printf("Direita\n");
        direita--;
    } while (direita > 0);
    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    for (esquerda; esquerda > 0; esquerda--){
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
