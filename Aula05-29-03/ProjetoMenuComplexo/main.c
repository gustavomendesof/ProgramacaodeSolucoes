#include <stdio.h>
#include <stdlib.h>

//Funcao principal variaveis
void main()
{
    //Definindo variaveis
    int opcao;

    //confere e valida a opcao
    while(opcao < 1 || opcao > 3){
        //interface do menu
        printf("****Escolha uma opcao***");
        printf("\n1-Opcao 1");
        printf("\n2-Opcao 2");
        printf("\n3-opcao 3");

        //lendo a opcao
        scanf("%d", &opcao);

        //Resultado de acordo com a opcao escolhida
        switch(opcao){
            case 1:
                printf("\nOpcao 1 foi escolhida");
                break;
            case 2:
                printf("\nOpcao 2 foi escolhida");
                break;
            case 3:
                printf("\nOpcao 3 foi escolhida");
                break;
            default:
                printf("Opcao invailida");
                break;

        }
    }


    return 0;
}
