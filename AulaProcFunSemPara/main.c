#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Declara�ao de variaveis globais
float n1, n2, so, su, mu, divi;
int opcao;


//Prototipos de funcoes
void menu();
void leitura();
void soma();
void sub();
void mul();
void divis();


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
        printf(" \n 2. Subtra��o");
        printf(" \n 3. Multiplica��o");
        printf(" \n 4. Divis�o");
        printf(" \n 0. Sair");

        printf(" \n Digite ao op��o desejada:");
        scanf("%d*c", &opcao);

        switch (opcao) {
            case 1:
                soma();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
               divis();
                break;
            default:
                printf(" \n Digite uma op��o valida!");
                break;
        }
    }while(opcao != 0);

}

//Fun�ao para leitura dos dados do teclado
void leitura(){
    printf("\n Digite o valor do primeiro numero: ");
    scanf("%f*c", &n1);

    printf("\n Digite o valor do segundo numero: ");
    scanf("%f*c", &n2);
}

//Funcao para calcular a soma de dois operanos
void soma(){
    //chamada da funcao
    leitura();

    so = n1 + n2;
    printf("\n A soma �: %2.f\n", so);
}

//Funcao para calcular a subtra��o de dois operanos
void sub(){
    //chamada da funcao
    leitura();

    su = n1 - n2;

    printf("\n A subtra��o �: %2.f\n", su);

}

//Funcao para calcular a multiplica��o de dois operanos
void mul(){
    //chamada da funcao
    leitura();

    mu = n1 * n2;

    printf("\n A multiplica��o �: %2.f\n", mu);
}

//Funcao para calcular a divisao de dois operanos
void divis(){
     //chamada da funcao
    leitura();
    if(n2 != 0){
        divi = n1/n2;
        printf("\n A divisao �: %2.f\n", divi);
    }else{
        printf("\n N�o existe divis�o por zero");
    }


}

