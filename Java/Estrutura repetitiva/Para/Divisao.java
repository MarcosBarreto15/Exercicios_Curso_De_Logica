import java.util.Locale;
import java.util.Scanner;


public class Divisao {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int i, N, a, b;
        double divisao;

        System.out.print("Quantos casos voce vai digitar? ");
        N = sc.nextInt();

        for (i = 1; i <= N; i++) {
            System.out.print("Entre com o numerador: ");
            a = sc.nextInt();
            System.out.print("Entre com o denominador: ");
            b = sc.nextInt();
            if (b == 0) {
                System.out.println("DIVISAO IMPOSSIVEL");
            }
            else {
                divisao = (double)a/b;
                System.out.println("DIVISAO = " + String.format("%.2f", divisao));
            }

        }

        sc.close();

    }
}
