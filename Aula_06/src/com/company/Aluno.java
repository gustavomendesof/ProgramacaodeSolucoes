package com.company;

class Aluno {
    private String nome;
    private int matricula;
    private float a1;
    private float a2;
    private float a3;

    public Aluno(String nome , int matricula){
        this.nome = nome;
        this.matricula = matricula;
    }


    public float media(){
        float m = (a1 + a2 + a3) / 3.0f;
        return m;
    }

    public void lancaNotaA1(Avalicao av){
        this.a1 = av.getNota();
    }
    public void lancaNotaA2(Avalicao av){
        this.a2 = av.getNota();
    }
    public void lancaNotaA3(Avalicao av){
        this.a3 = av.getNota();
    }
    public String getNotas(){
        return "A1: " + this.a1 + " A2: " + this.a2 + " A3: " + this.a3;
    }
    public String getNome(){
        return nome;
    }

    public int getMatricula(){
        return matricula;
    }
}