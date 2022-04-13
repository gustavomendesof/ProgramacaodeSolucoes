#include <stdio.h>
#include <stdlib.h>

int retornaDez();

float retornaNuQuebrados();

int main()
{
    //definindo variaveis
    int a;

    //Passando retorno da funcao para uma variavel
    a = retornaDez();

    //imprimindo valor de a
    printf("\n%d", a);


    float b;

    b = retornaNuQuebrados();

    printf("%f", b);
    return 0;

}

//funcao que retorna dez
int retornaDez(){
 //imprimindo valor de a
    printf("\n Oi \n");
    int numero = 10;
    return numero;

}

//funcao que retorna numero quebrado
float retornaNuQuebrados(){
    return 5.5;
}
