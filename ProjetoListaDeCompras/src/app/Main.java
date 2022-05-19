package app;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        ListaDeCompras l1 = new ListaDeCompras();

        int op;

        do{
            System.out.println("Digite: ");
            System.out.println("1 - Cadastrar Produto");
            System.out.println("2 - visualizar Produto");
            System.out.println("3 - ver quantidade de Produtos");
            System.out.println("4 - Apagar todos os Produtos");
            System.out.println("5 - Ver total de Compras");
            System.out.println("0 - Sair");
            op = sc.nextInt();

            switch (op){
                case 1:
                    Produto p1 = new Produto();
                    System.out.println("Digite o nome do Produto");
                    sc.nextLine();
                    p1.setNome(sc.nextLine());
                    
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
            }


        }while (op!=0);

    }
}
