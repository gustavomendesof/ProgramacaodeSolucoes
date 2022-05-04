package app;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        //instancia de clase
        Pessoa p1 = new Pessoa();

        System.out.println("Digite o seu nome: ");
        p1.nome = sc.nextLine();

        System.out.println("Digite o seu ano de nascimento: ");
        p1.anoDeNascimento = sc.nextInt();

        System.out.println("Digite o seu numero de filhos: ");
        p1.numeroDeFilhos = sc.nextByte();

        System.out.println("Digite o seu salario: ");
        p1.salario = sc.nextDouble();

        System.out.println("Digite o ano atual: ");
        int anoAtual = sc.nextInt();

        int idade = p1.calcularIdade(anoAtual);

        System.out.println("Seu nome e: " + p1.nome);
        System.out.println("Seu ano de nascimento e: " + p1.anoDeNascimento);
        System.out.println("Seu numero de filhos e: " + p1.numeroDeFilhos);
        System.out.println("Seus salario e: " + p1.salario);
        System.out.println("Sua idade atual e: " + idade + "anos");

    }
}
