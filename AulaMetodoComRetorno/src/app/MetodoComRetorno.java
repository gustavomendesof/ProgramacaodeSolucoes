package app;

public class MetodoComRetorno {

    public static void main(String[] args) {
        System.out.println(MetodoComRetorno.somar(1, 5));
        System.out.println(MetodoComRetorno.mostrarPares(100));
    }

    public static double somar(double a, double b){

        return a + b;
    }

    public static String mostrarPares(int valor){
        String retorno = "";
        for(int a = 0; a <= valor; a = a +2){
         retorno += a + "\n";
        }
        return retorno;
    }
}
