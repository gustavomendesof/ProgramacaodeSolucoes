package app;

public class Subtracao extends Operacao {

    public Subtracao(){
        sinal = '-';
    }

    public float calcular(){

        return operador1 - operador2;
    }


}
