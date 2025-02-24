#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
typedef enum {
    BISPO = 5,
    TORRE = 5,
    RAINHA = 8,
    CAVALO = 3
} MOVIMENTACAO_PECAS;

void limparTerminal() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void esperarEnterUsuario() {
    printf("\nPressione Enter para continuar... \n");
    while (getchar() != '\n');
    getchar();
    limparTerminal();
}

void geraMenuEscolhaPeca() {
    int opcaoPecaEscolhida;
    int movimentos_restantes_peca;
    do {
        printf("\nEscolha uma peca para movimentar:\n");
        printf("1. Bispo\n");
        printf("2. Torre\n");
        printf("3. Cavalo\n");
        printf("4. Rainha\n");
        printf("5. Voltar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcaoPecaEscolhida);

        switch (opcaoPecaEscolhida) {
        case 1:
            limparTerminal();
            movimentos_restantes_peca = BISPO;
            while (movimentos_restantes_peca != 0) {
                printf("Bispo andou uma casa na diagonal direita. \n");
                movimentos_restantes_peca -= 1;
            }
            esperarEnterUsuario();
            break;
        case 2:
            limparTerminal();
            movimentos_restantes_peca = TORRE;
            while (movimentos_restantes_peca != 0) {
                printf("Torre andou uma casa na horizontal direita. \n");
                movimentos_restantes_peca -= 1;
            }
            esperarEnterUsuario();
            break;
        case 3:
            limparTerminal();
            movimentos_restantes_peca = CAVALO;
            while (movimentos_restantes_peca != -1) {
                if (movimentos_restantes_peca != 0) {
                    printf("Cavalo andou uma casa para baixo. \n");
                } else {
                    for (int i = 0; i != CAVALO; i++) {
                        printf("Cavalo andou uma casa para esquerda. \n");
                    }
                }
                movimentos_restantes_peca -= 1;
            }
            esperarEnterUsuario();
            break;
        case 4:
            limparTerminal();
            movimentos_restantes_peca = RAINHA;
            while (movimentos_restantes_peca != 0) {
                printf("Rainha andou uma casa na horizontal esquerda. \n");
                movimentos_restantes_peca -= 1;
            }
            esperarEnterUsuario();
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
        
    } while (opcaoPecaEscolhida != 5);
}


int main() {
    geraMenuEscolhaPeca();
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
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
