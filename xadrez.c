#include <stdio.h>

void movimento(char *direcao){
    for (int i = 0; i < 5; i++ ){ //função para o movimento da torre e bispo que serão invocadas por (movimento)
    printf("%s\n", direcao);
    }
}

void movimentoRainha(char *direcao){//função do movimento da rainha que será invocada por (movimentoRainha)
    for (int i = 0; i < 8; i++ ){
        printf("%s\n", direcao);
    }
}

void movimentoCavalo (char*direcao1, char*direcao2){//função do movimento do cavalo que será invocado por (movimentoCavalo)
    for (int i =0, j=1; i < 2 && j<2; i++ ){

            printf("%s\n", direcao1);
    }
            printf("%s\n", direcao2);
}

int main() {

    int torre;
    int bispo; 
    int rainha;
    int cavalo;
    // o bloco abaixo mostra ao usuário como funcionará a movimentação da torre
    printf("Movimentando as peças de xadrez !\n");
    printf("A TORRE move-se em linha vertical ou horizontal, por favor escolha a direção do movimento da torre:\n");
    printf("(Direita, esquerda, frente ou trás)\n");
    printf("\n");

    // cria o menu que solicita ao usuário a direção que gostaria de movimentar a torre
    printf("********** Escolha a direção que você gostaria de movimentar a torre*********\n");
    printf("\n");
    printf("1- DIREITA\n");
    printf("2- ESQUERDA\n");
    printf("3- FRENTE\n");
    printf("4- TRÁS\n");
    scanf("%d", &torre);// rescolhe a escolha do usuario

    switch (torre)
    {
        case 1:
            movimento ("DIREITA"); // caso o usuário escolha a opção "DIREITA" para movimentar a torre
            break; 

        case 2:
            movimento ("ESQUERDA");  // caso o usuário escolha a opção "ESQUERDA" para movimentar a torre
            break;

         case 3:
            movimento ("FRENTE"); // caso o usuário escolha a opção "FRENTE" para movimentar a torre
            break;

        case 4:
            movimento ("TRÁS"); // caso o usuário escolha a opção "TRÁS" para movimentar a torre
            break;

            default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;
        }

// cria o menu que solicita ao usuário a direção que gostaria de movimentar O BISPO
    printf("O BISPO move-se em diagonal, por favor, escolha a direção do movimento do bispo\n");
    printf("********** Escolha a direção que você gostaria de movimentar o bispo*********\n");
    printf("\n");
    printf("1- CIMA, DIREITA\n");
    printf("2- CIMA, ESQUERDA\n");
    printf("3- BAIXO,DIREITA\n");
    printf("4- BAIXO ESQUERDA\n");
    scanf("%d", &bispo);// rescolhe a escolha do usuario

    switch (bispo) {

        case 1:
            movimento ("CIMA, DIREITA");// caso usuario movimente para diagonal direita superior
            break;

        case 2:
            movimento ("CIMA, ESQUERDA");// caso usuario movimente para diagonal esquerda superior
            break;

        case 3:
            movimento ("BAIXO, DIREITA");// caso usuario movimente para diagonal direita inferior
            break;

        case 4:
            movimento ("BAIXO, ESQUERDA"); // caso usuario movimente para diagonal esquerda inferior
            break;

        default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;
    }

    
// cria o menu que solicita ao usuário a direção que gostaria de movimentar a RAINHA
    printf("A RAINHA move-se em todas as direçoes, por favor, escolha a direção do movimento da Rainha\n");
    printf("********** Escolha a direção que você gostaria de movimentar o bispo*********\n");
    printf("\n");
    printf("1- CIMA, DIREITA\n");
    printf("2- CIMA, ESQUERDA\n");
    printf("3- BAIXO,DIREITA\n");
    printf("4- BAIXO ESQUERDA\n");
    printf("5- DIREITA\n");
    printf("6- ESQUERDA\n");
    printf("7- FRENTE\n");
    printf("8- TRÁS\n");
    scanf("%d", &rainha);// recolhe a escolha do usuario 

    switch (rainha) {
        case 1:
            movimentoRainha ("CIMA, DIREITA");// caso usuario movimente para diagonal direita superior
            break;


        case 2:
            movimentoRainha ("CIMA, ESQUERDA");// caso usuario movimente para diagonal esquerda superior
            break;


        case 3:
            movimentoRainha ("BAIXO, DIREITA");// caso usuario movimente para diagonal direita inferior
            break;


        case 4:
            movimentoRainha ("BAIXO, ESQUERDA");// caso usuario movimente para diagonal esquerda inferior
            break;


        case 5:
            movimentoRainha ("DIREITA"); // caso o usuário escolha a opção "DIREITA" para movimentar a rainha
            break;


        case 6:
            movimentoRainha("ESQUERDA\n");// caso o usuário escolha a opção "ESQUERDA" para movimentar a rainha
            break;


        case 7:
            movimentoRainha("FRENTE\n");// caso o usuário escolha a opção "FRENTE" para movimentar a rainha
            break;


        case 8:
            movimentoRainha("TRÁS\n");// caso o usuário escolha a opção "TRÁS" para movimentar a rainha
            break;

        default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
            break;

    }

        // o bloco abaixo mostra ao usuário como funcionará a movimentação do cavalo
    printf("O cavalo movimenta-se em L, por favor escolha a direção do movimento do cavalo:\n");
    printf("\n");
    printf("1- CIMA, CIMA, DIREITA\n");
    printf("2- CIMA, CIMA, ESQUERDA\n");
    printf("3- BAIXO, BAIXO, DIREITA\n");
    printf("4- BAIXO, BAIXO, ESQUERDA\n");
    printf("5- DIREITA, DIREITA, CIMA\n");
    printf("6- DIREITA, DIREITA, BAIXO\n");
    printf("7- ESQUERDA, ESQUERDA, CIMA\n");
    printf("8- ESQUERDA, ESQUERDA, BAIXO\n");
    printf("9- BAIXO, BAIXO, DIREITA\n");
    printf("10- BAIXO, BAIXO, ESQUERDA\n");
    scanf("%d", &cavalo);// recolhe a escolha do usuario 

    switch (cavalo) {

       case 1:
            movimentoCavalo ("CIMA", "DIREITA"); //caso o usuario escolha a opção 1, cima, cima, direita 
            break;


       case 2:
            movimentoCavalo ("CIMA", "ESQUERDA");//caso o usuario escolha a opção 2, cima, cima, esquerda 
            break;


       case 3:
            movimentoCavalo ("BAIXO", "DIREITA");//caso o usuario escolha a opção 3, baixo, baixo, direita
            break;


       case 4:
            movimentoCavalo ("BAIXO", "ESQUERDA");//caso o usuario escolha a opção 4, baixo, baixo, esquerda
            break;


       case 5:
            movimentoCavalo ("DIREITA", "CIMA");  //caso o usuario escolha a opção 5, direita, direita, cima
            break;


       case 6:
            movimentoCavalo ("DIREITA", "BAIXO");  //caso o usuario escolha a opção 6, direita, direita, baixo
            break;


       case 7:
            movimentoCavalo ("ESQUERDA", "CIMA");  // caso o usuario escolha a opção 7, esquerda, esquerda, cima
            break;


       case 8:
            movimentoCavalo ("ESQUERDA", "BAIXO"); // caso o usuario escolha a opção 8, esquerda, esquerda, baixo
            break;


       case 9:
            movimentoCavalo ("BAIXO", "DIREITA"); //caso o usuario escolha a opção 9, baixo, baixo, direita
            break;


       case 10:
            movimentoCavalo ("BAIXO", "ESQUERDA"); //caso o usuario escolha a opção 10, baixo, baixo, direita
            break;

        default:
            printf("Opção Inválida\n"); // caso o usuário escolha uma opção inválida (fora de 1 a 4)
        break;
        
        }



    return 0;

}