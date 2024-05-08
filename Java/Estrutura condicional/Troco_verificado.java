import java.util.Locale;
import java.util.Scanner;

public class Troco_verificado {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int qtde;
        double preco, dinheiro, troco, total, falta;

        System.out.print("Preco unitario do produto: ");
        preco = sc.nextDouble();
        System.out.print("Quantidade comprada: ");
        qtde = sc.nextInt();
        System.out.print("Dinheiro recebido: ");
        dinheiro = sc.nextDouble();



        total = preco * qtde;

        if (total > dinheiro) {
            falta = total - dinheiro;
            System.out.println("DINHEIRO INSUFICIENTE. FALTAM " + String.format("%.2f", falta) + " REAIS");
        } else {
            troco = (double)dinheiro - total;
            System.out.println("TROCO = " + String.format("%.2f", troco));
        }


        sc.close();

    }
}
