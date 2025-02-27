#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int movimentoTorre = 0, movimentoDama = 0, movimentoBispo;

    // Implementação de Movimentação do Bispo
    printf("Bispo:\n");
	for (movimentoBispo = 0; movimentoBispo < 5; movimentoBispo++) {
		printf("Cima, Direita\n");
	}

    // Implementação de Movimentação da Torre
    printf("\nTorre:\n");
	do {
		printf("Direita\n");
		movimentoTorre++;
	} while (movimentoTorre < 5);

    // Implementação de Movimentação da Rainha
    printf("\nRainha:\n");
	while (movimentoDama < 8) {
		printf("Esquerda\n");
		movimentoDama++;
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
