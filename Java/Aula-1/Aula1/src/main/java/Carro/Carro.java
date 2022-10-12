package Carro;

public class Carro {
    private Integer velocidade;

    public Carro(){
        this.velocidade = 0;
    }
    public void acelerar(){
        this.velocidade += 5;
        System.out.println("Acelerou! ");
    }
    public void katchau(){
        this.velocidade += 25;
        System.out.println("KATCHAAAAAAU! ");
    }
    public void freiar() {
        this.velocidade -= 5;
        System.out.println("Freiou! ");
    }
    public Integer getVelocidade(){
        return this.velocidade;
    }
}
