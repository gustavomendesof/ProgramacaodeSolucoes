#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3;

    printf("Digite o numero 1:");
    scanf("%f", &n1);

    printf("Digite o numero 2:");
    scanf("%f", &n2);

    printf("Digite o numero 2:");
    scanf("%f", &n2);

    if(n1 > n2 && n1 > n3){
        printf("O numero maior é %.0f", n1);
        if(n3 > n2){
            printf("O menor numero é %0.f:", n2);
        }else {
            printf("O menor numero é %0.f:", n3);
        }
    }else if(n2 > n3){
        printf("O maior numero é %.0f", n2);
        if(n1 > n3){
            printf("O menor numero é %.0f", n3)
        }else{
            printf("O menor numero é %0.f", n2);
        }
    }


    printf("Hello world!\n");
    return 0;
}
