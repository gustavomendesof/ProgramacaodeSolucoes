#include <stdio.h>
#include <stdlib.h>

char retornaLetra(){
    return 'x';

}

int main()
{
    //definindo variavel
    char letra;

    letra = retornaLetra();

    printf("%c\n", letra);


    return 0;
}

