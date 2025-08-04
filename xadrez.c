#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao = 0; // Menu de seleção
    printf("=======================\n");
    printf("   Escolha uma opção   \n");
    printf("=======================\n");
    printf("1. Torre\n2. Bispo\n3. Rainha\n");
    printf("=======================\n");
    scanf("%d", &opcao);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
     switch (opcao) 
    {
        case 1:  // movimento torre
            printf("-> ");
            for(int i = 1; i<=5; i++){
                if(i == 5)
                    printf("(x%d)", i);
            }
        break;

        case 2: // movimento bispo
            printf("↗ ");
            for(int i = 1; i<=5; i++){
                if(i == 5)
                    printf("(x%d)", i);
            }
        break;

        case 3: // movimento rainha
            printf("<- ");
            for(int i = 1; i<=8; i++){
                if(i == 8)
                    printf("(x%d)", i);
            }
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }
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
