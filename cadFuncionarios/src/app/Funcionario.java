package app;

public class Funcionario {
    private int id;
    private int matricula;
    private String nome;
    private float salario;
    private Cargo cargo;
    private Departamento departamento;

    public Funcionario(int id, int matricula, String nome, float salario) {
        this.id = id;
        this.matricula = matricula;
        this.nome = nome;
        this.salario = salario;
        this.salario = salario;
    }

    public int getId() {
        return id;
    }

    public int getMatricula() {
        return matricula;
    }

    public String getNome() {
        return nome;
    }

    public float getSalario() {
        return salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }

    public void setId(int id) {
        this.id = id;
    }

    public Cargo getCargo() {
        return cargo;
    }

    public void setCargo(Cargo cargo) {
        this.cargo = cargo;
    }

    public Departamento getDepartamento() {
        return departamento;
    }

    public void setDepartamento(Departamento departamento) {
        this.departamento = departamento;
    }
}
}
