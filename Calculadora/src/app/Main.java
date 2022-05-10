package app;

public class Main {

    public static void main(String[] args) {
        /*
        Soma minhaSoma = new Soma();

        minhaSoma.setOperador1(9f);
        minhaSoma.setOperador2(10f);
        Soma outraSoma = new Soma();
        outraSoma.setOperador2(20f);
        outraSoma.setOperador1(minhaSoma.somar());

        System.out.println(minhaSoma.somar());
        System.out.println(outraSoma.somar());
        */

        Calculadora josefina= new Calculadora();
        josefina.obterValor1();
        josefina.obterValor2();
        josefina.selecionarOperacao();
        josefina.obterResultado();
    }
}
