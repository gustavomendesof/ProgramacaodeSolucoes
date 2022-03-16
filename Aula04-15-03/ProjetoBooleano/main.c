#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    bool a = true, b = false;

    if(a){
        printf("\n A eh verdadeiro");
    }
    if(b){
        printf("\n b eh verdadeiro");
    }else{
        printf("\n B eh falso");
    }

    if(!b){
        printf("\n B eh falso");
    }

    printf("\n");
    return 0;
}
