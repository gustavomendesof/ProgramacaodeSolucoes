#include <stdio.h>
#include <stdlib.h>

//funcao principal do programa
void main()
{
    //definindo variavel
    int a = 1, b = 10;

    //Contando at� 10
    while(a <= 10){
        printf("\n%d", a);
        a++; // a = a + 1;
    }

    //primeiro executa depoisconfere a condi��o
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
