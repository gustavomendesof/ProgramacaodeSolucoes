#include <stdio.h>
#include <stdlib.h>

//typedef -- redefinir tipos
int main()
{
    typedef float nota; //4 bytes

    //Declarando variveis
    nota prova1 = 6.0;
    nota prova2 = 7.0;


    nota soma = prova1 + prova2;


    printf("A soma das notas e %.2f\n", soma);
    return 0;
}
