package Aula1;

public class Pessoa {
    String nome;
    String email;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    public void digaOi(){
        System.out.println("Oi");
    }
    public String digaTchau(){
        return "Tchau";
    }
}
