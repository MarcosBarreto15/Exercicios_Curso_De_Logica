import java.util.Locale;
import java.util.Scanner;

public class Troco {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double preco, dinheiro, troco;
        int qtde;

        System.out.print("Preco unitario do produto: ");
        preco = sc.nextDouble();
        System.out.print("Quantidade comprada: ");
        qtde = sc.nextInt();
        System.out.print("Dinheiro recebido: ");
        dinheiro = sc.nextDouble();

        troco = dinheiro - (double) (preco * qtde);

        System.out.println("TROCO = " + String.format("%.2f", troco));

        sc.close();

    }
}