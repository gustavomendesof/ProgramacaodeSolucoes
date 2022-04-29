package com.company;

public class Avalicao {
    private String descricao;
    private float nota;

    public Avalicao(String descricao, float nota){
        this.descricao = descricao;
        this.nota = nota;
    }

    public void lancaAluno(Aluno aluno, int avalaicao){
        if(avalaicao == 1){
            aluno.lancaNotaA1(this);
        }
        if(avalaicao == 2){
            aluno.lancaNotaA2(this);
        }
        if(avalaicao == 3){
            aluno.lancaNotaA3(this);
        }
    }

    public float getNota(){
        return this.nota;
    }

}
