#include <stdio.h>

int main() {  
    // Movimento da Torre 
    int movimentoTorre = 5;
    // número de casas que a torre se move
    printf("Movimento da Torre\n");
    // A torre move-se em linha reta
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    // Movimento do Bispo
    int movimentoBispo = 5; 
    // número de casas que o bispo se move
    int contadorBispo = 1;
    printf("Movimento do Bispo\n");
    // Bispo move-se para Cima e Direita.
    while (contadorBispo <= movimentoBispo) {
        printf("Cima,Direita\n");
        contadorBispo++;
    }
    // Movimento da Rainha
    int movimentoRainha = 8; 
    // número de casas que a rainha se move
    int contadorRainha = 1;
    printf("Movimento da Rainha\n");
    // A rainha pode mover em qualquer direção.
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);
    return 0;
}
