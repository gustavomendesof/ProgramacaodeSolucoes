#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void desenhaBorda(){
    printf("|-------------------|\n");
}

int main()
{
    desenhaBorda();

    printf("hi\n");

    desenhaBorda();

    return 0;
}
