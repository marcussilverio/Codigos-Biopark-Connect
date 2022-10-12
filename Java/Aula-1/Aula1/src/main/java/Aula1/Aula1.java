package Aula1;

import Carro.Carro;

public class Aula1 {
    public static void main(String[] args) {

        Pessoa pessoa = new Pessoa();

        pessoa.setNome("Marcus");
        pessoa.setEmail("marcus.silverio@gmail.com");

        pessoa.digaOi();
        System.out.println("nome: "+pessoa.getNome());
        System.out.println("email: "+pessoa.getEmail());
        System.out.println(pessoa.digaTchau());

        Carro carro = new Carro();
        System.out.println(carro.getVelocidade());
        carro.acelerar();
        carro.acelerar();
        carro.acelerar();
        carro.acelerar();
        carro.katchau();
        System.out.println(carro.getVelocidade());
        carro.freiar();
        carro.freiar();
        carro.freiar();
        System.out.println(carro.getVelocidade());
    }

}
