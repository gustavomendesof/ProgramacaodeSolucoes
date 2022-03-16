#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variaveis
    char palavra[10];

    //instruções

    printf("Digite uma palavra: ");
    setbuf(stdin, 0);

    fgets(palavra, 5, stdin);

    //limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

    return 0;
}
