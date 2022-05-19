package app;

public class Main {

    public static void main(String[] args) {
        Cargo prof = new Cargo(1,"Professor F1", 1200f);
        Cargo profN2 = new Cargo(1,"Professor N2",3000f);

        Departamento deptoAcademico = new Departamento(1,"Academico");

	    Funcionario f1 = new Funcionario(1,123,"jean",1200f);
        f1.setCargo(prof);
        f1.setDepartamento(deptoAcademico);


        Funcionario f2 = new Funcionario(2,124,"Felipe",1200f);
        f2.setCargo(prof);
        f2.setDepartamento(deptoAcademico);


        Funcionario f3 = new Funcionario(3,125,"Vitor",1200f);
        f3.setCargo(prof);
        f3.setDepartamento(deptoAcademico);

        f1.getCargo().getDescricao();

    }
}
