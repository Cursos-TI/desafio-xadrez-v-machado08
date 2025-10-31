#include <stdio.h>

void recursivo (int numero){
    if (numero > 0 && numero < 100){
        //recursivo (numero - 1);
        printf ("%d \n", numero);


        recursivo (numero + 10);
    }
}


int main(){
    int quantidade = 10;
    int tamanho = 15;

    printf("Contagem regressiva...\n");
    recursivo(quantidade);


    printf("Contagem regressiva...\n");
    recursivo(tamanho);




    return 0;
}