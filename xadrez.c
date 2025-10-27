#include <stdio.h>

// Desafio de Xadrez - Vitor Machado dos Santos


int main() {

    int torre;
    // o bloco abaixo mostra ao usuário como funcionará a movimentação da torre
    printf("Movimentando as peças de xadrez !\n");
    printf("A TORRE move-se em linha vertical ou horizontal, por favor escolha a direção do movimento da torre:\n");
    printf("(Direita, esquerda, frente ou trás)\n)");

    // cria o menu que solicita ao usuário a direção que gostaria de movimentar a torre
    printf("********** Escolha a direção que você gostaria de movimentar a torre*********\n");
    printf("1- DIREITA\n");
    printf("2- ESQUERDA\n");
    printf("3- FRENTE\n");
    printf("4- TRÁS\n");
    scanf("%d", &torre);

    switch (torre)
    {
        case 1:
            for (int i = 0; i < 5; i++ ){   // caso o usuário escolha a opção "DIREITA" para movimentar a torre
            printf("DIREITA\n");
        }
        break;


        case 2:
            for (int i = 0; i < 5; i++ ){  // caso o usuário escolha a opção "ESQUERDA" para movimentar a torre
            printf("ESQUERDA\n");
         }
         break;


         case 3:
            for (int i = 0; i < 5; i++ ){  // caso o usuário escolha a opção "FRENTE" para movimentar a torre
            printf("FRENTE\n");
         }
         break;

        case 4:
            for (int i = 0; i < 5; i++ ){  // caso o usuário escolha a opção "TRÁS" para movimentar a torre
            printf("TRÁS\n");
            }
            break;


            default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;
        }

    return 0;




        
    }

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
