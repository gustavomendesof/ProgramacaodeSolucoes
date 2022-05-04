package com.company;
import java.io.PrintStream;

class Main {
    public static void main(String[] args) {
        int a = 1;
        char b = 'f';
        boolean c = false;

        PrintStream ps;
        ps = System.out;
        //ps.println("Hello world!" + a + b + c);

        Aluno al1 = new Aluno("Matheus", 1232423);
        //Aluno al2 = new Aluno();
        //al1.nome = "Matheus";
        //al1.matricula = 112312;

        Avalicao provaA1 = new Avalicao("Prova do dia", 8.5f);
        Avalicao avalA2 = new Avalicao("Prova de amanhã", 6.5f);

        /*trocar de modelo
        al1.lancaNotaA1(provaA1);
        al1.lancaNotaA2(avalA2);
        al1.lancaNotaA3(provaA1);
*/
        provaA1.lancaAluno(al1, 1);


        ps.println(al1.getNome());
        ps.println(al1.getMatricula());
        ps.println(al1.getNotas());
        ps.println(al1.media());


    }
}