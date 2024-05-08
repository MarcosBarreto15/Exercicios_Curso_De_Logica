import java.util.Locale;
import java.util.Scanner;

public class Pares_consecutivos {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int x, cont, soma;

        System.out.print("Digite um numero inteiro: ");
        x = sc.nextInt();

        while (x != 0) {
            if (x % 2 != 0) {
                x = x + 1;
            }

            cont = 1;
            soma = x;

            while (cont <= 4) {
                x = x + 2;
                soma = soma + x;
                cont = cont + 1;
            }
            System.out.println("SOMA = " + soma);
            System.out.print("Digite um numero inteiro: ");
            x = sc.nextInt();
        }

        sc.close();

    }
}

