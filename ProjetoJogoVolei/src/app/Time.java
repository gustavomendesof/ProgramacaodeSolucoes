package app;

public class Time {
    private String nome, tecnico;
    private int ponto;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTecnico() {
        return tecnico;
    }

    public void setTecnico(String tecnico) {
        this.tecnico = tecnico;
    }

    public int getPonto() {
        return ponto;
    }

    public void setPonto(int ponto) {
        this.ponto = ponto;
    }

    public void pontuar(){
        this.ponto++;
    }

    @Override
    public String toString() {
        return this.nome + " - "  + this.ponto +"ponto(s)";
    }
}
