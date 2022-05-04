package app;

public class Pessoa {

    //declaraçao de atributos
    public String nome;
    public int anoDeNascimento;
    public byte numeroDeFilhos;
    public double salario;

    //metodo de calclo
    public int calcularIdade(int anoAtual){
         //this - é o operador para acessar os dados armazenados nos atributos
          return anoAtual - this.anoDeNascimento;
    }


}
