#include <stdio.h>

int main (){
    int b = 1, r = 1;

    printf("TABULEIRO\n");

    printf("Torre: \n");
    //torre - linha reta horizontalmente ou verticalmente
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    printf("Bispo: \n");
    //bispo - diagonal (cima, direita), 5 casas
    while(b <= 5) {
        printf("Cima, direita\n");
        b++;
    }

    //rainha - move-se em todas as direções (8 casas para a esquerda)
        printf("Rainha: \n");    
    do {
           printf("Esquerda\n"); 
           r++;
        } while (r <= 8);
    
    return 0;
}