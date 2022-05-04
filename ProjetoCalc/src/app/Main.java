package app;

import javax.swing.JOptionPane;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {

        int opcao;
        opcao = Integer.parseInt(JOptionPane.showInputDialog(
                "Escolha a sua opção:\n" +
                "1 - Adição\n" +
                "2 - Subtração\n" +
                "3 - Multiplicação\n" +
                "4 - Divisão\n"));
        switch (opcao){
            case 1:
                modAdicao();
                break;
            case 2:
                modSubtracao();
                break;
            case 3:
                modMultiplica();
                break;
            case 4:
                modDivisao();
                break;
            default:
                JOptionPane.showMessageDialog(null, "Fim do programa");
                break;
        }
    };

    static void modAdicao(){
        double v1, v2, res;
        v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor"));
        v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor"));

        res = v1 + v2;

        JOptionPane.showMessageDialog(null, "Soma = " + res);
    }

    static void modSubtracao(){
        double v1, v2, res;
        v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor"));
        v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor"));

        res = v1 - v2;

        JOptionPane.showMessageDialog(null, "Subtração = " + res);
    }

    static void modMultiplica(){
        double v1, v2, res;
        v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor"));
        v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor"));

        res = v1 * v2;

        JOptionPane.showMessageDialog(null, "Multiplicação = " + res);
    }

    static void modDivisao(){
        double v1, v2, res;
        v1 = Double.parseDouble(JOptionPane.showInputDialog("Digite o primeiro valor"));
        v2 = Double.parseDouble(JOptionPane.showInputDialog("Digite o segundo valor"));

        res = v1 / v2;

        JOptionPane.showMessageDialog(null, "Divisão = " + res);
    }
}
