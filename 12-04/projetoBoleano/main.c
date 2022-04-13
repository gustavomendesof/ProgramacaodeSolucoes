#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano(){
    return true;
}

int main() {

    bool variavelBooleana;
    //variavel recebendo booleano
    variavelBooleana = retornaBooleano();

    //se for verdadeiro ele excuta primeiro
    if(variavelBooleana){
        printf("Eh verdadeiro");
    }// se não executa o segundo bloco
    else{
        printf("Eh falso");
    }

    return 0;
}
