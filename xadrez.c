#include <stdio.h> // Biblioteca essencial para usar printf

/*
 * Trabalho Movimentando as peças de xadrez
 * Estudante: Kauã de Melo Carvalho
 * Matrícula: 2025 0803 5375
 */

int main() {
    
    // As constantes são uma prática melhor que números 'mágicos' no código.
    const int MOV_TORRE = 5;    // Torre move 5 casas
    const int MOV_BISPO = 5;    // Bispo move 5 casas
    const int MOV_RAINHA = 8;   // Rainha move 8 casas

    printf("--- SIMULACAO DE MOVIMENTOS DE XADREZ ---\n\n");

    // ==========================================================
    // 1. Movimento da TORRE (Estrutura 'for')
    // Requisito: 5 casas para a direita.
    // O 'for' é ótimo para quando sabemos quantas vezes repetir.
    // ==========================================================
    
    printf(">> 1. Movimento da TORRE (usando FOR) <<\n");
    
    // i: variável de controle, de 0 até 4 (totalizando 5 repetições)
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha de separação

    // ==========================================================
    // 2. Movimento do BISPO (Estrutura 'while')
    // Requisito: 5 casas na diagonal (Cima, Direita).
    // O 'while' exige que inicializemos e atualizemos a variável
    // de controle manualmente.
    // ==========================================================

    printf(">> 2. Movimento do BISPO (usando WHILE) <<\n");

    int casas_bispo = 0; // Inicializa o contador de casas percorridas
    
    // O loop continua ENQUANTO o número de casas for menor que o limite
    while (casas_bispo < MOV_BISPO) {
        printf("Cima, Direita\n");
        
        casas_bispo = casas_bispo + 1; // Atualização: incrementa a casa (casas_bispo++)
    }

    printf("\n"); // Linha de separação

    // ==========================================================
    // 3. Movimento da RAINHA (Estrutura 'do-while')
    // Requisito: 8 casas para a esquerda.
    // O 'do-while' executa o bloco primeiro, e só depois checa a condição.
    // ==========================================================

    printf(">> 3. Movimento da RAINHA (usando DO-WHILE) <<\n");

    int casas_rainha = 0; // Inicializa o contador

    do {
        printf("Esquerda\n");

        casas_rainha++; // Atualização: incrementa o contador
        
    } while (casas_rainha < MOV_RAINHA); // Condição: checa se deve repetir

    printf("\n--- SIMULACAO CONCLUIDA ---\n");
    
    return 0; // Retorna 0, indicando que o programa rodou com sucesso
}