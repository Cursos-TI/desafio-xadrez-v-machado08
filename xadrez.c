#include <stdio.h>

// Desafio de Xadrez - Vitor Machado dos Santos


int main() {

    int torre;
    int bispo, w1=0;
    int rainha, r1=0;
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

// cria o menu que solicita ao usuário a direção que gostaria de movimentar O BISPO
    printf("O BISPO move-se em diagonal, por favor, escolha a direção do movimento do bispo\n");
    printf("********** Escolha a direção que você gostaria de movimentar o bispo*********\n");
    printf("1- CIMA, DIREITA\n");
    printf("2- CIMA, ESQUERDA\n");
    printf("3- BAIXO,DIREITA\n");
    printf("4- BAIXO ESQUERDA\n");
    scanf("%d", &bispo);

    switch (bispo) {

        case 1:
        while (w1 <= 4 ) {
            printf("CIMA, DIREITA\n"); // caso usuario movimente para diagonal direita superior
            w1++;
        }
        break;


        case 2:
        while (w1 <= 4 ) {
            printf("CIMA, ESQUERDA\n");// caso usuario movimente para diagonal esquerda superior
            w1++;
        }
        break;

        case 3:
        while (w1 <= 4 ) {
            printf("BAIXO, DIREITA\n");// caso usuario movimente para diagonal direita inferior
            w1++;
        }
        break;


        case 4:
        while (w1 <= 4 ) {
            printf("BAIXO, ESQUERDA\n");// caso usuario movimente para diagonal esquerda inferior
            w1++;
        }
        break;

        default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;
    }

    
// cria o menu que solicita ao usuário a direção que gostaria de movimentar a RAINHA
    printf("A RAINHA move-se em todas as direçoes, por favor, escolha a direção do movimento da Rainha\n");
    printf("********** Escolha a direção que você gostaria de movimentar a Rainha*********\n");
    printf("1- CIMA, DIREITA\n");
    printf("2- CIMA, ESQUERDA\n");
    printf("3- BAIXO,DIREITA\n");
    printf("4- BAIXO ESQUERDA\n");
    printf("5- DIREITA\n");
    printf("6- ESQUERDA\n");
    printf("7- FRENTE\n");
    printf("8- TRÁS\n");
    scanf("%d", &rainha);

    switch (rainha) {
        case 1:
        do{
            printf("CIMA, DIREITA\n");// caso usuario movimente para diagonal direita superior
            r1++;
        } while (r1 <8);

        break;


        case 2:
         do{
            printf("CIMA, ESQUERDA\n");// caso usuario movimente para diagonal esquerda superior
            r1++;
        } while (r1 <8);

        break;


        case 3:
        do{
            printf("BAIXO, DIREITA\n");// caso usuario movimente para diagonal direita inferior
            r1++;
        } while (r1 <8);

        break;


        case 4:
        do{
            printf("BAIXO, ESQUERDA\n");// caso usuario movimente para diagonal esquerda inferior
            r1++;
        } while (r1 <8);

        break;


        case 5:
        do{
            printf("DIREITA\n"); // caso o usuário escolha a opção "DIREITA" para movimentar a rainha
            r1++;
        } while (r1 <8);

        break;


        case 6:
        do{
            printf("ESQUERDA\n");// caso o usuário escolha a opção "ESQUERDA" para movimentar a rainha
            r1++;
        } while (r1 <8);

        break;


        case 7:
        do{
            printf("FRENTE\n");// caso o usuário escolha a opção "FRENTE" para movimentar a rainha
            r1++;
        } while (r1 <8);

        break;


        case 8:
        do{
            printf("TRÁS\n");// caso o usuário escolha a opção "TRÁS" para movimentar a rainha
            r1++;
        } while (r1 <8);

        break;

        default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;



    }

    





    return 0;

}