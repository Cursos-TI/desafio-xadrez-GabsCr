#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursivoMovimentoTorre(int casas) {
	if(casas > 0) {
		printf("Direita\n");
		recursivoMovimentoTorre(casas - 1);
	}
}

void recursivoMovimentoRainha(int casas) {
	if (casas > 0) {
		printf("Esquerda\n");
		recursivoMovimentoRainha(casas - 1);
	}
}

void recursivoMovimentoBispo(int casas) {
	if (casas > 0) {
		printf("Cima\n");
		if (casas > 0) {
			printf("Direita\n");
		}
		recursivoMovimentoBispo(casas - 1);
	}
}

int main() {
    // Nível Novato - Movimentação das Peças
    int movimentoTorre = 0, movimentoDama = 0, movimentoBispo, movimentoCavaloHor, movimentoCavaloVert;

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
    printf("\nCavalo:\n");
    for (movimentoCavaloHor = 0; movimentoCavaloHor < 1; movimentoCavaloHor++) {
        while (movimentoCavaloVert < 2) {
            printf("Baixo\n");
            movimentoCavaloVert++;
        }
        printf("Esquerda\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\nTorre:\n")
    recursivoMovimentoTorre(5);
    printf("\nRainha:\n");
    recursivoMovimentoRainha(8);
    printf("\nBispo:\n");
    recursivoMovimentoBispo(5);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
