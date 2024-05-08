import java.util.Locale;
import java.util.Scanner;

public class Operadora {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int minutos;
        double valor;

        System.out.print("Digite a quantidade de minutos: ");
        minutos = sc.nextInt();

        if (minutos <= 100) {
            valor = 50.00;
        } else {
            valor = (minutos - 100) * 2.0 + 50.00;
        }

        System.out.println("Valo a pagar: R$ " + String.format("%.2f", valor));



        sc.close();

    }
}
