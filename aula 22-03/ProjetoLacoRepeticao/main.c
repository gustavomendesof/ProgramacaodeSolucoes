#include <stdio.h>
#include <stdlib.h>

//funcao principal do programa
void main()
{
    //definindo variavel
    int a = 1, b = 10;

    //Contando até 10
    while(a <= 10){
        printf("\n%d", a);
        a++; // a = a + 1;
    }

    //primeiro executa depoisconfere a condição
    while(b >= 1){
        printf("\n%d", b);
        b--; // b = b - 1;
    }

    do {
        printf("\n%d", a);
        a++;
    }while(a <= 10);
    return 0;
}
