package app;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Calculadora {
    private float valor1;
    private float valor2;
    private char operacao;
    //private Scanner scanner;
    private List <Operacao> operacoes;

    Scanner scanner = new Scanner(System.in);



    public Calculadora(){

        operacoes = new ArrayList();
        operacoes.add(new Soma());
        operacoes.add(new Subtracao());
        operacoes.add( new Multiplicacao());
    }

    public void obterValor1(){
        System.out.println("informe o 1 valor: ");
        valor1 = scanner.nextFloat();
    }

    public void obterValor2(){
        System.out.println("informe o 2 valor: ");
        valor2 = scanner.nextFloat();
    }

    public void selecionarOperacao(){
        System.out.println("informe a operação:\n");
        for (int i = 0; i < operacoes.size(); i++){
            System.out.println(operacoes.get(i).getSinal());
        };
        String op = scanner.next();
        operacao = op.charAt(0);
        if (op.equals('+')) {

        }
    }

    public void obterResultado() {
        Operacao chiquinho = null;
        int i = 0;
        if(operacao == '+'){
            i = 0; //hiquinho = objSoma;
        }
        if(operacao == '-') {
            i = 1;//chiquinho = objSubtracao;

        }
        if( operacao == '*'){
            i = 2;//chiquinho = objMultiplicacao;
        }
        chiquinho = operacoes.get(i);
        chiquinho.setOperador1(valor1);
        chiquinho.setOperador2(valor2);
        System.out.println("Resultado => " + chiquinho.calcular());

        /*
        if (operacao == '+') {
            objSoma.setOperador1(valor1);
            objSoma.setOperador2(valor2);
            System.out.println("Resultado => " + objSoma.calcular());
        } else if (operacao == '-') {
            objSubtracao.setOperador1(valor1);
            objSubtracao.setOperador2(valor2);
            System.out.println("Resultado => " + objSubtracao.calcular());
        } else if (operacao == '*') {
            objMultiplicacao.setOperador1(valor1);
            objMultiplicacao.setOperador2(valor2);
            System.out.println("Resultado => " + objMultiplicacao.calcular());
        } else if (operacao == '/') {

        }*/

    }
}
