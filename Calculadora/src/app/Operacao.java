package app;

public abstract class Operacao {

    protected float operador1;
    protected float operador2;
    protected char sinal;



    public float calcular(){

        return 0f;
    }

    public float getOperador1() {
        return operador1;
    }

    public void setOperador1(float operador1) {
        this.operador1 = operador1;
    }

    public float getOperador2() {
        return operador2;
    }

    public void setOperador2(float operador2) {
        this.operador2 = operador2;
    }

    public char getSinal(){
        return sinal;
    }
}
