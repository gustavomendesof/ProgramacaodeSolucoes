#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Declaraçao de variaveis globais
float n1, n2, so, su, mu, divi;
int opcao;


//Prototipos de funcoes
void menu();
void leitura();
void soma(float n1, float n2);
void sub(float n1, float n2);
void mul(float n1, float n2);
void divis(float n1, float n2);


//Programa principal
int main() {

    setlocale(LC_ALL, "Portuguese");
    menu();

    return 0;
}

//funcoes prototipadas

//funcao que contem o menu
void menu(){

    do {
        printf(" \n 1. Soma");
        printf(" \n 2. Subtração");
        printf(" \n 3. Multiplicação");
        printf(" \n 4. Divisão");
        printf(" \n 0. Sair");

        printf(" \n Digite ao opção desejada:");
        scanf("%d*c", &opcao);


        switch (opcao) {
            case 1:
                leitura();
                soma(n1, n2);
                break;
            case 2:
                leitura();
                sub(n1, n2);
                break;
            case 3:
                leitura();
                mul(n1, n2);
                break;
            case 4:
                leitura();
               divis(n1, n2);
                break;
            default:
                printf(" \n Digite uma opção valida!");
                break;
        }
    }while(opcao != 0);

}

//Funçao para leitura dos dados do teclado
void leitura(){
    printf("\n Digite o valor do primeiro numero: ");
    scanf("%f*c", &n1);

    printf("\n Digite o valor do segundo numero: ");
    scanf("%f*c", &n2);
}

//Funcao para calcular a soma de dois operanos
void soma(float n1, float n2){


    so = n1 + n2;
    printf("\n A soma é: %2.f\n", so);
}

//Funcao para calcular a subtração de dois operanos
void sub(float n1, float n2){

    su = n1 - n2;

    printf("\n A subtração é: %2.f\n", su);

}

//Funcao para calcular a multiplicação de dois operanos
void mul(float n1, float n2){
    //chamada da funcao

    mu = n1 * n2;

    printf("\n A multiplicação é: %2.f\n", mu);
}

//Funcao para calcular a divisao de dois operanos
void divis(float n1, float n2){

    if(n2 != 0){
        divi = n1/n2;
        printf("\n A divisao é: %2.f\n", divi);
    }else{
        printf("\n Não existe divisão por zero");
    }


}

