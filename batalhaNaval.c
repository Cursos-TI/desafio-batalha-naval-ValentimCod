#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int linhasTabuleiro = 10;
    int colunasTabuleiro = 10;
    int tamanhoNavio = 3;

    printf("Desafio Batalha Naval\n");

    // Inicializa o tabuleiro 10x10 com zeros
    int tabuleiro[10][10] = {0}; 

    // Coordenadas iniciais dos navios
    int navioHorizontalLinha = 5; // Linha inicial do navio horizontal
    int navioHorizontalColuna = 0; // Coluna inicial do navio horizontal
    int navioVerticalLinha = 7;    // Linha inicial do navio vertical
    int navioVerticalColuna = 4;   // Coluna inicial do navio vertical
    int navioDiagonal1Linha = 0;   // Linha inicial do navio diagonal 1
    int navioDiagonal1Coluna = 0;  // Coluna inicial do navio diagonal 1
    int navioDiagonal2Linha = 9;   // Linha inicial do navio diagonal 2
    int navioDiagonal2Coluna = 9;  // Coluna inicial do navio diagonal 2

    // Posiciona o navio horizontal com validação
    if (navioHorizontalColuna + tamanhoNavio <= colunasTabuleiro) {
        for (int horizontal = 0; horizontal < tamanhoNavio; horizontal++) {
            tabuleiro[navioHorizontalLinha][navioHorizontalColuna + horizontal] = 3;
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites do tabuleiro.\n");
    }

    // Posiciona o navio vertical com validação
    if (navioVerticalLinha + tamanhoNavio <= linhasTabuleiro) {
        for (int vertical = 0; vertical < tamanhoNavio; vertical++) {
            tabuleiro[navioVerticalLinha + vertical][navioVerticalColuna] = 3;
        }
    } else {
        printf("Erro: Navio vertical fora dos limites do tabuleiro.\n");
    }

    // Posiciona o navio diagonal 1 com validação
    if (navioDiagonal1Linha + tamanhoNavio <= linhasTabuleiro &&
        navioDiagonal1Coluna + tamanhoNavio <= colunasTabuleiro) {
        for (int diagonal = 0; diagonal < tamanhoNavio; diagonal++) {
            tabuleiro[navioDiagonal1Linha + diagonal][navioDiagonal1Coluna + diagonal] = 3;
        }
    } else {
        printf("Erro: Navio diagonal 1 fora dos limites do tabuleiro.\n");
    }

    // Posiciona o navio diagonal 2 com validação
    if (navioDiagonal2Linha - tamanhoNavio + 1 >= 0 &&
        navioDiagonal2Coluna - tamanhoNavio + 1 >= 0) {
        for (int diagonal = 0; diagonal < tamanhoNavio; diagonal++) {
            tabuleiro[navioDiagonal2Linha - diagonal][navioDiagonal2Coluna - diagonal] = 3;
        }
    } else {
        printf("Erro: Navio diagonal 2 fora dos limites do tabuleiro.\n");
    }

    // Exibe o tabuleiro no console com os números das linhas e letras das colunas
    printf("   "); // Espaço para alinhar as letras das colunas
    for (int c = 0; c < colunasTabuleiro; c++) {
        printf("%c ", linhas[c]); // Imprime as letras das colunas
    }
    printf("\n");

    for (int linha = 0; linha < linhasTabuleiro; linha++) {
        printf("%2d ", linha + 1); // Exibe o número da linha no lado esquerdo
        for (int coluna = 0; coluna < colunasTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
