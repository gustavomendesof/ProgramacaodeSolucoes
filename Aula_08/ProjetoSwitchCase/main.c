#include <stdio.h>
#include <stdlib.h>

void main() {


    int a = 2;
    char b = 'y';

    if(a == 1) {
        printf("\nOpcao escolha: 1");
    }else if(a == 2) {
        printf("\nOpcao escolha: 2");
    }else if(a == 2) {
        printf("\nOpcao escolha: 3");
    }else {
        printf("\nOpcao invalido");
    }

    //o mesmo codigo de cima (if) adaptado ao switch
    switch(a){
    case 1:
         printf("\nA opcao escolhida foi 1");
         break;
    case 2:
        printf("\nA opcao escolhida foi 2");
        break;
    case 3:
        printf("\nA opcao escolhida foi 3");
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }

    //switch case char
    switch(b) {
    case 'x':
        printf("\nA letra eh x");
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }


    return 0;
}
