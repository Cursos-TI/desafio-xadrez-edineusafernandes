#include <stdio.h>

int main (){
    int b = 1, r = 1;
    int c, l = 1;

    printf("TABULEIRO\n");
    printf("\n");

    printf("Torre: \n");
    //torre - linha reta horizontalmente ou verticalmente
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }

    printf("\n");
    printf("Bispo: \n");
    //bispo - diagonal (cima, direita), 5 casas
    while(b <= 5) {
        printf("Cima, direita\n");
        b++;
    }
    printf("\n");
    //rainha - move-se em todas as direções (8 casas para a esquerda)
        printf("Rainha: \n");    
    do {
           printf("Esquerda\n"); 
           r++;
        } while (r <= 8);

        printf("\n");
    // cavalo - 2x para baixo + 1x para a esquerda
    printf("Cavalo: \n");
    for (c = 1; c <= 2; c++) {
        printf("Baixo\n");
        while (l < c) {
            printf("Esquerda\n");
            l++;
        }
    }
    
    return 0;
}