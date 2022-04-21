#include <stdio.h>
#include <stdlib.h>


//Struct - estrutura
struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];

};

struct st_agenda{

    struct st_contato contatos[100];



}agenda;

int main()
{

    for(int i = 0; i < 1; i++){

        printf("informe o nome:\n");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("informe a data de nascimento:\n");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();


        printf("informe o telefone:\n");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("informe o email:\n");
        fgets(agenda.contatos[i].email, 100, stdin);

    }

    printf("==== Agenda de Contatos ====\n");
    for(int i = 0; i < 1; i++){
        printf("======= Contatos %d ====\n", (i+1));
        printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n"));
        printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
        printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
        printf("Ano: %d\n", strtok(agenda.contatos[i].ano_nascimento, "\n"));


    }

    return 0;
}
