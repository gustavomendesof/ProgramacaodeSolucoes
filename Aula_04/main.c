#include <stdio.h>


/*
objetivo da Aula:

- Criar um programa para cadastrar at� 100 alunos ;
- Cada aluno deve ter as seguintes informa��es:
        # nome
        # email (OPCIONAL)
        # matr�cula
        # notas A1, A2 e A3
- Capacidade de excluir um aluno j� cadastrado pela matr�cula
- Listar os alunos cadstrados com nome, email e matr�cula
- listar os alunos cadstrados com matr�cula, nome, notas A1, A2 e A3, alt�m da m�dia final
- A m�dia � conposta de A1 valendo 20% da nota final, A2 30% da nota final e A3 valendo 50% da nota final;
- Listar os alunos aprovados com matr�cula, nome e m�dia final. Aprovados tem m�dia igual ou superior a 7;
- Listar os alunos reprovados com matr�cula, nome e m�dia final. Aprovados tem m�dia igual ou superior a 7;
- Os percentuais de participa��o das notas podem sofrer mudan�as futuramente, bem como a nota de aprova��o;
*/

typedef struct{
    char nome;
    char email;
    int matricula = -1;
    float a1;
    float a2;
    float a3;
}Aluno;

void limpaTela(){
    printf("\e[1;1H\e[2J");
}

int menuPrincipal(){
    limpaTela;
        printf("Menu principal\n");
        printf("-----------\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. exlucir aluno\n");
        printf("0. sair\n\n");

        int opt = 0;
        do{
            printf("Informe opcao desejada:");
            scanf("%i", &opt);
        }while(opt <0 || opt>3);

    return opt;

}

void gravaAluno(int posicao,Aluno alunos[]){

        printf("(%d)Informe o nome:\n", posicao);
        scanf("%s", alunos[posicao].nome);

        printf("Informe o email:\n");
        scanf("%s", alunos[posicao].email);


        printf("Informe a matricula:\n");
        scanf("%d", alunos[posicao].matricula);

        printf("Informe a primeira nota:\n");
        scanf("%f", alunos[posicao].a1);
        printf("Informe a segunda nota:\n");
        scanf("%f", alunos[posicao].a2);
        printf("Informe a terceira nota:\n");
        scanf("%f", alunos[posicao].a3);
        printf("------------\n");
}

void zeraCadastro(int matr[10]){
    for(int i = 0; i < 10; i++){
        matr[i] = -1;
    }
}

int primeiroDisponivel(int matr[10]){
    int ret = -1
    for(int i = 0; i < 10; i++){
        if(matr[i] == -1){
            ret = i;
            break;
        }
    }
    return ret;
}
void main() {
   /* char nome[10][50];
    char email[10][50];
    int matricula[10];
    float A1[10], A2[10], A3[10];
    */
    zeraCadastro(matricula);



    while(true){
        limpaTela();
        int menu = menuPrincipal();

        switch(menu){
            case 1:
                //printf("informe a posivao que quer gravar: 1-10:");
                int i = primeiroDisponivel(matricula);
                //scanf("%d", &i);
                gravaAluno(i, nome, email, matricula, A1, A2, A3);
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                break;
            default:
                break;
        }



        for(int x = 0; x <10; x++){
            if(matricula[x] > -1){
                printf("nome: %s\nemail: %s\nMatricula: %d\n", nome[x], email[x], matricula[x]);
            }
        }
    }

    return 0;
}
