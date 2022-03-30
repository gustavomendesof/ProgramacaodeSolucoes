#include <stdio.h>
#include <stdlib.h>


void main()
{
    //definir variaveis
    int cont;


    //Tabuada do 5
    for(cont = 1; cont <= 10; cont++){
        printf("\n 5 x %d = %d", cont, 5 * cont);
    }

    //Contagem regressiva
    for(cont = 10; cont >= 0; cont--){
        printf("\n%d", cont);
    }

    //contagem 2 em 2
    for(cont = 0; cont <= 10; cont = cont+2){
        printf("\n%d", cont);
    }

    return 0;
}
