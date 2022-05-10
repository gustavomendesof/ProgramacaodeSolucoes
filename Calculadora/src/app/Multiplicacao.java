package app;

public class Multiplicacao extends Operacao{

    public Multiplicacao(){
        sinal = '*';
    }
    public float calcular(){

        return operador1 * operador2;
    }

}
