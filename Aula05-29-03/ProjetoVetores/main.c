#include <stdio.h>
#include <stdlib.h>

//funcao principal do programa
void main()
{

    //imprime na tela
    int vetor[3], cont;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;
    vetor[3] = 5;
    vetor[4] = 10;
    vetor[5] = 15;
    vetor[6] = 5;
    vetor[7] = 10;
    vetor[8] = 15;
    vetor[9] = 5;



    for(cont = 0; cont < vetor[3]; cont++){
        vetor[cont] = vetor[cont] + 1;

    }

    printf("\nPosicao 0: %d", vetor[0]);
    printf("\nPosicao 1: %d", vetor[1]);
    printf("\nPosicao 2: %d", vetor[2]);
    printf("\nPosicao 3: %d", vetor[3]);
    printf("\nPosicao 4: %d", vetor[4]);
    printf("\nPosicao 5: %d", vetor[5]);
    printf("\nPosicao 6: %d", vetor[6]);
    printf("\nPosicao 7: %d", vetor[7]);
    printf("\nPosicao 8: %d", vetor[8]);
    printf("\nPosicao 9: %d", vetor[9]);



    return 0;
}
