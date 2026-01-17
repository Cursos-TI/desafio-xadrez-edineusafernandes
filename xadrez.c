#include <stdio.h>

void movTorre (int casas){
    if (casas == 0)
        return;
    
    printf("Direita\n");
    movTorre(casas - 1);
}

void movBispo (int casas) {
    if(casas == 0)
        return;

    for (int v  = 0; v < 1; v++){ //mov vertical
        printf("Cima ");
        for (int h = 0; h < 1; h++) {//mov horizontal
        printf("Direita\n");
            }
        }
        movBispo(casas - 1);
}

void movRainha(int casas){
    if (casas == 0)
        return;

    printf("Esquerda\n");
    movRainha(casas - 1);
}

void movCavalo () {
    int cima, direita;

    for(cima = 1; cima <=2; cima++){
        printf("Cima\n");
    }
    for(direita = 1; direita <=1; direita++) {
        printf("Direita\n");
    }
}
int main (){
 
    printf("TABULEIRO\n");
    printf("\n");

    printf("Torre: \n"); //torre - direita, 5x
    movTorre(5);

    printf("\n");
    printf("Bispo: \n");
    //bispo - diagonal (cima, direita), 5 casas - loop externo vertical, interno horizontal
    movBispo(5);

    printf("\n");
    //rainha - move-se em todas as direções (8 casas para a esquerda)
    printf("Rainha: \n");    
    movRainha(8);
    
    printf("\n");
    // cavalo - 2x para cima + 1x para a direita
    printf("Cavalo: \n");
    movCavalo();
    
    return 0;
}