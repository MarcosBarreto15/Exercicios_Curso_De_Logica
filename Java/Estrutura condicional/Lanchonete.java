import java.util.Locale;
import java.util.Scanner;

public class Lanchonete {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int codigo, qtde;
        double preco;

        System.out.print("Codigo do produto comprado: ");
        codigo = sc.nextInt();
        System.out.print("Quantidade comprada: ");
        qtde = sc.nextInt();

        preco = 0;

        switch (codigo) {
            case 1:
                preco = 5.00 * qtde;
                break;

            case 2:
                preco = 3.50 * qtde;
                break;

            case 3:
                preco = 4.80 * qtde;
                break;

            case 4:
                preco = 8.90 * qtde;
                break;

            case 5:
                preco = 7.32 * qtde;
                break;
        }

        System.out.println("Valor total a pagar: R$ " + String.format("%.2f", preco));

        sc.close();

    }
}

