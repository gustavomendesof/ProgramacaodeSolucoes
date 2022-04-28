package app;

public class MetodosSemRetorno {

    public static void main(String[] args) {


        //funçoes - no caso do Java podem ser metodos
        imprimir();
        imprimirTexto("Ola");
    }

    //metodo estatico sem retorno
    public static void imprimir(){
        System.out.println("Apresentando a linguagem java");
    }

    public static void imprimirTexto(String texto){
        System.out.println(texto);
    }
}
