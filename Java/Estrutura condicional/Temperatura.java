import java.util.Locale;
import java.util.Scanner;

public class Temperatura {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        char resposta;
        double c, f;

        System.out.print("Voce vai digitar a temperatura em qual escala (C/F)?");
        resposta = sc.next().charAt(0);

        if (resposta == 'C') {
            System.out.print("Digite a temperatura em Celsius: ");
            c = sc.nextDouble();
            f = c * 9 / 5 + 32;
            System.out.print("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", f));
        } else {
            System.out.print("Digite a temperatura em Fahrenheit: ");
            f = sc.nextDouble();
            c = (f - 32) / 1.8;
            System.out.print("Temperatura equivalente em Celsius: " + String.format("%.2f", c));
        }

        sc.close();

    }
}
