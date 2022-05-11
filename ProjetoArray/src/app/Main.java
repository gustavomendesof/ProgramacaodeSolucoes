package app;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] pares = { 0, 2, 4, 6, 8};

        System.out.println("Numeros pares: ");
        System.out.println(Arrays.toString(pares));
        System.out.println("O array contém " + pares.length + " elementos");
    }
}
