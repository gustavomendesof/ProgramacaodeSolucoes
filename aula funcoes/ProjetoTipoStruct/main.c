#include <stdio.h>
#include <stdlib.h>

struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[100];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[100];
}agenda;


int main(){

    for (int i = 0; i < 1 ; i++){

        printf("\nInforme o nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("\nInforme o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);

        setbuf(stdin, 0);
        printf("\nInforme o telefone: ");
        fgets(agenda.contatos[i].telefone, 100, stdin);

        printf("\nInforme o email: ");
        fgets(agenda.contatos[i].email, 100, stdin);

    }

    printf("========= AGENDA DE CONTATOS =========");

    for (int i = 0; i < 1; i++){
        printf("\n========= Contato %d =========", (i+1));
        printf("\nNome: %s", strtok(agenda.contatos[i].nome, "\n"));
        printf("\nTelefone: %s", strtok(agenda.contatos[i].telefone, "\n"));
        printf("\nE-mail: %s", strtok(agenda.contatos[i].email, "\n"));
        printf("\nAno de nascimento: %d", strtok(agenda.contatos[i].ano_nascimento, "\n"));
    }
return 0;
}
