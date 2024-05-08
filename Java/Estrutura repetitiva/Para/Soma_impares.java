import java.util.Locale;
import java.util.Scanner;

public class Soma_impares {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int x, y, i, soma, troca;

        System.out.println("Digite dois numeros: ");
        x = sc.nextInt();
        y = sc.nextInt();

        if (x > y) {
            troca = y;
            y = x;
            x = troca;
        }

        soma = 0;

        for (i = x + 1; i < y; i++) {
            if (i % 2 != 0) {
                soma = soma + i;
            }
        }

        System.out.print("SOMA DOS IMPARES = " + soma);

        sc.close();

    }
}

