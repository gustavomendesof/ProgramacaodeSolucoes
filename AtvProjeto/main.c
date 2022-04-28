#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/*
objetivo da Aula:

Criar um programa para cadastrar até 100 alunos ;
Cada aluno deve ter as seguintes informações:
        # nome
        # email (OPCIONAL)
        # matrícula
        # notas A1, A2 e A3
Capacidade de excluir um aluno já cadastrado pela matrícula
Listar os alunos cadastrados com nome, email e matrícula
Listar os alunos cadastrados com matrícula, nome, notas A1, A2 e A3, além da média final
A média é composta de A1 valendo 20% da nota final, A2 30% da nota final e A3 valendo 50% da nota final;
Listar os alunos aprovados com matrícula, nome e média final. Aprovados tem média igual ou superior a 7;
Listar os alunos reprovados com matrícula, nome e média final. Aprovados tem média igual ou superior a 7;
Os percentuais de participação das notas podem sofrer mudanças futuramente, bem como a nota de aprovação;
*/

// Struct para a o cadastro do aluno
struct aluno {

  char nome[50];
  char email[50];
  int matricula;
  float A1, A2, A3, media;
  bool ativo;
};

struct aluno aluno[100];

void main() {
    int opcao;

    do{
        menu();

        printf("Digite opção desejada:");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
                cadastrarAluno();
            break;
        case 2:
                listarAlunos();
            break;
        case 3:
                listaAlunosAprovados();
            break;
        case 4:
                deletarAluno();
            break;
        case 0:
            printf("Obrigado por usar o sistemas");
            break;
        default:
            break;
    }

    }while(opcao != 0);



    return 0;
}


void menu(){

    printf("Menu:\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Listar Alunos\n");
    printf("3 - Listar Alunos Aprovados\n");
    printf("4 - Deletar Aluno\n");
    printf("0 - Sair do Sistema\n");

};

int cadastrarAluno(){

    for(int i = 0; i < 100; i++){
        printf("Digite o nome do Aluno:\n");
        scanf("%s", &aluno[i].nome);
        printf("Digite o email do Aluno: \n");
        scanf("%s", &aluno[i].email);
        printf("Digite a matricula do aluno: \n");
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota do A1: \n");
        scanf("%f", &aluno[i].A1);
        printf("Digite a nota do A2: \n");
        scanf("%f", &aluno[i].A2);
        printf("Digite a nota do A3: \n");
        scanf("%f", &aluno[i].A3);

        aluno[i].media = ((aluno[i].A1 * 2) + (aluno[i].A2 * 3) + (aluno[i].A3 * 5)) / 10;
        menu();
    }


};

int listarAlunos(){

    for(int i = 0; i < 100; i++){

    printf("Aluno: "[i]);
    printf("\nNome: %s", aluno[i].nome);
    printf("\nEmail: %s", aluno[i].email);
    printf("\nMatricula: %d", aluno[i].matricula);
    printf("\nNota A1: %.1f", aluno[i].A1);
    printf("\nNota A2: %.1f", aluno[i].A2);
    printf("\nNota A3: %.1f", aluno[i].A3);
    printf("\nMedia das notas: %.1f", aluno[i].media);
        if(aluno[i].media > 7 ){
            printf("Aluno Aprovado");
        }else{
            printf("Aluno Reprovado");
        }
    }
     menu();

}

int listaAlunosAprovados(){

     for(int i = 0; i < 100; i++){
        if(aluno[i].media > 7){
            printf("Aluno: "[i]);
            printf("\nNome: %s", aluno[i].nome);
            printf("\nEmail: %s", aluno[i].email);
            printf("\nMatricula: %d", aluno[i].matricula);
            printf("\nMedia das notas: %.1f", aluno[i].media);
            printf("\nAluno Aprovado");
        }
     }
      menu();
}


void deletarAluno(){

    int mat;

    printf("Digite a matricua do aluno que deseja excluir");
    scanf("%d", &mat);

    //if(mat == aluno.matricula){

    //}


}
