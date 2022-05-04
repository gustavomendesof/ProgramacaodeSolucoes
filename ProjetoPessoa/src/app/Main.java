package app;
 import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        //Sistema de entrada de dados da blibioteca util.Scanner
	    Scanner sc = new Scanner(System.in);

        String nome;
        int anoDeNascimento, anoAtual, calcularIdade;
        byte numeroDeFilhos;
        double salario;

        System.out.println("Escreva seu nome: ");
        nome = sc.nextLine();

        System.out.println("Escreva seu ano de nascimento: ");
        anoDeNascimento = sc.nextInt();

        System.out.println("Escreva seu numero de filhos: ");
        numeroDeFilhos = sc.nextByte();

        System.out.println("Escreva seu ano atual: ");
        anoAtual = sc.nextInt();

        System.out.println("Escreva seu salario: ");
        salario = sc.nextDouble();

        calcularIdade = anoAtual - anoDeNascimento;

        System.out.println("Nome: " + nome);
        System.out.println("Filhos: " + numeroDeFilhos);
        System.out.println("Salario: " + salario);
        System.out.println("Sua idade e:" + calcularIdade);
    }
}
