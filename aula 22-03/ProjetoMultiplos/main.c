#include <stdio.h>
#include <stdlib.h>

//funcao principal do projeto
void main()
{
    //Definindo Variaveis
    int a = 15;

    //Conectivo Lógico E (And), SE UMA COMPARACAO FOR FALSA, NÃO ENTRA NO BLOCO
    if(a > 5 && a > 15){
        printf("\nA variavel 'a' esta entre 5 e 15");
    }

    //Conectivo Lógico OU (OR), SE UMA COMPARACAO FOR VERDADEIRO, JA ENTRA NO BLOCO
    if(a > 5 || a > 15){
        printf("\nA variavel 'a' eh maior que 5 ");
    }

    //Misturando conectivos
    if(a > 5 && a < 15 || a == 20){
        printf("\nA varavel 'a' esta entre 5 e 15 ou ela vale 20");
    }



    return 0;
}
